#include"graph.h"

Labour::Labour()
{
	name="NULL";
	id=0;
	workHours=0.0;
	comPerday=0;
}

Labour::Labour(string n,int x,float y,int z)
{
	name=n;
	id=x;
	workHours=y;
	comPerday=z;
}

Labour::Labour(const Labour &l)
{
	name=l.name;
	id=l.id;
	workHours=l.workHours;
	comPerday=l.comPerday;
}


int Labour::getId()
{
	return id;
}

void Labour::getDetails()
{
	cout<<"\nEnter the name :";
	cin>>name;
	cout<<"\nEnter the id : ";
	cin>>id;
	cout<<"\nEnter the workhours : ";
	cin>>workHours;
	cout<<"\nEnter the commission per day: ";
	cin>>comPerday;
}

void Labour::displayDetails()
{
    cout<<"name: "<<name<<endl;
    cout<<"id : "<<id<<endl;
    cout<<"work Hours : "<<workHours<<endl;
    cout<<"Commission: "<<comPerday<<endl;
}

Graph::Graph(int n)
{
	noOfVertices=n;
	vertices=new Labour[noOfVertices];
	adjMatrix=new int*[noOfVertices];
	for(int i=0;i<noOfVertices;i++ )
	adjMatrix[i]=new int[noOfVertices];
	for(int i=0;i<noOfVertices;i++)
	for(int j=0;j<noOfVertices;j++)
	adjMatrix[i][j]=0;
}
Graph::~Graph()
{
}
void Graph::getData()
{
	int id,comPerday;
	string name;
	float workHours;
	cout<<"Enter the details of the Labour detail:\n";
	for(int i=0;i<noOfVertices;i++)
	{
		cout<<"Vertices " << i <<"\n";
		cout<<"\nEnter the name :";
		cin>>name;
		cout<<"\nEnter the id : ";
		cin>>id;
		cout<<"\nEnter the workhours : ";
		cin>>workHours;
		cout<<"\nEnter the commission per day: ";
		cin>>comPerday;
	
		Labour s(name,id,workHours,comPerday);
		vertices[i]= s;
	}
}
void Graph::createGraph()
{
	int edge,v,w;
	cout<<"\nEnter the number of edges in graph:";
	cin>>edge;
	for(int i=0;i<edge;i++)
	{
	cout<<"\nEnter the adjacent vertices:\n";
	cout<<"\nEnter v,w: ";
	cin>>v>>w;
	adjMatrix[v][w] =1;
	adjMatrix[w][v] =1;
	}
}
void Graph :: displayAll()
{
	cout<<"\n\nLabour details are:\n\n\n";
	for(int i=0;i<noOfVertices;i++)
	vertices[i].displayDetails();
}
void Graph :: showVertexData(int i)
{
	cout<<"\n Vertice : "<<i<<"\n";
	cout<<"\n\nLabour details are:\n\n\n";
	vertices[i].displayDetails();
}
void Graph::performDFS()
{
	visited=new bool[noOfVertices];
	for(int i=0;i<noOfVertices;i++)
	visited[i]=false;
	for(int i=0;i<noOfVertices;i++)
	{
	if(!visited[i])
	DFS(i);
	}
}
void Graph::DFS(int i)
{
	showVertexData(i);
	visited[i]=true;
	for(int j=0;j<noOfVertices;j++)
	{
	if(adjMatrix[i][j]==1)
	{
		if(!visited[j])
		DFS(j);
	}
	}
}
void Graph::printAdjacent()
{
	for(int i=0;i<noOfVertices;i++)
	cout<<"\t"<<i;
	cout<<"\n";
	for(int i=0;i<noOfVertices;i++)
	cout<<"________";
	cout<<"\n";
	for(int i=0;i<noOfVertices;i++)
	{
	cout<<i<<" |\t";
	for(int j=0;j<noOfVertices;j++)
	cout<<adjMatrix[i][j]<<"\t";
	cout<<"\n";
	}
}
void Graph::implementConnectedComponent()
{
	visited = new bool[noOfVertices];
	for(int i=0;i<noOfVertices;i++)
	visited[i]=false;
	int count=0;
	for(int i=0;i<noOfVertices;i++)
	{
		if(!visited[i])
		{
		cout<<"Connected Component:"<<++count<<endl;
		DFS(i);
		}
	}
}

