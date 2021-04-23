#pragma once
using namespace std;
enum l1
{
	graph_size, ///< Number of vertices of the considered graph.
	start, ///< Value of the current vertex under concideration.
	finish, ///< Value of the finish vertex.
	from, ///< Value of vertex from which the transition was made. 
	index, ///< Index to set the vertex in the path
	way_sum, ///< Final cost of the current route.
	total_price, ///< Cost of the best riute.
	graph, ///< Graf, represented by adjacency matrix.
};
///List of data structures
enum l2
{
	Way, ///< Current route.
	Marked, ///< List of vertices with attendance marks.
	Total_way, ///< The best route
};
/**
	\brief Class for solving The traveling salesman problem.

	This class contain a set of methods for solving the traveling salesman problem, using the exhaustive Brute Force method.

*/

class Salesman
{
private:
	
	int Graph_size;
	int Start;
	int Finish;
	int From;
	int Index;
	int Way_sum;
	int Total_price;
	int** Graph;
	vector <int> Way;
	vector <int> Marked;
	vector <int> Total_way;

public:
	Salesman()
	{
		/**
		\brief Class constructor.

		Function sets the base values for the class fields.
		\return None.
		*/
		Graph_size = 0;
		Start = 0;
		Finish = 0;
		From = 0;
		Index = 0;
		Way_sum = 0;
		Total_price = 100000;
		
	}
	~Salesman()
	{
		/**
		\brief Class destructor.
		\return None.
		*/
	}
	int Salesman_input( char* argv);
	void Brute_force(const int start);
	void Screen_output();
	void File_output();
	void Graphviz_output();


};