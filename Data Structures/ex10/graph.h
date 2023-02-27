#include<iostream>
#include<string>
using namespace std;

class Labour
{
	private:
			string name;
			int id;
			float workHours;
			int comPerday;
			
	public:
			Labour();
			Labour(string,int,float,int);
			Labour(const Labour&);
			int getId();
			void getDetails();
			void displayDetails();

	friend class Graph;
};

class Graph
{
	public:
			Graph(int);
			~Graph();
			void getData();
			void createGraph();
			void displayAll();
			void performDFS();
			void DFS(int);
			void showVertexData(int);
			void printAdjacent();
			void implementConnectedComponent();
	private:
			Labour * vertices;
			int noOfVertices;
			bool *visited;
			int **adjMatrix;
};
