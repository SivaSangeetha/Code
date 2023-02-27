#include"graph.h"
int main()
{
	int id,comPerday;
	string name;
	float workhours;
	int n,choice=0;
	cout<<"\n Enter no of vertices:";
	cin>>n;
	Graph g1(n);
	g1.getData();
	g1.createGraph();
	while(choice<5)
	{
		cout<<"\n***************Menu*********8*****";
		cout<<"______________________________________\n";
		cout<<"\n1.Perform DFS Traversal\n";
		cout<<"\n2.Print Adjacent Matrix\n";
		cout<<"\n3.Find Connected Component\n";
		cout<<"\n4.Display all Employee details\n";
		cout<<"\n5.Exit";
		cout<<"______________________________________\n";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
		case 1:
		{
			cout<<"\n DFS traversal:\n";
			g1.performDFS();
			break;
		}
		case 2:
		{
			cout<<"\n Adjacent matrix:\n";
			g1.printAdjacent();
			break;
		}
		case 3:
		{
			g1.implementConnectedComponent();
			break;
		}
		case 4:
		{
			g1.displayAll();
			break;
			}
		}
	}
 return 0;
}

