#include<iostream>
#include<fstream>
#include <vector>
#include "Salesman.h"
using namespace std;
/**
	\brief Main function
	\param[in] int argc  - input parameter that accepts a number of commands
	\param[in] char* argv[] - input parameter that takes the value of the parameters
	\return 0 - if the program was succefull
	\throw runtime_error if the user entered insufficient number of arguments
*/

int main(int argc, char* argv[])
{
	try
	{
		if (argc < 3)
		{
			throw std::runtime_error("Not enough arguments. You must specify input file and output metod: 1-Screen output, 2-File output, 3-Graphviz output");
			return EXIT_FAILURE;
		}
		else
		{
			int begin = 0;
			char out;
			Salesman sale1;
			begin = sale1.Salesman_input(argv[1]);
			sale1.Brute_force(begin);
			out = *argv[2];
			if (out == '1')
			{
				sale1.Screen_output();
			}
			if (out == '2')
			{
				sale1.File_output();
			}
			if (out == '3')
			{
				sale1.Graphviz_output();
			}
		}
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}