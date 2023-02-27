#include"slice.h"
#include"max.h"
using namespace std;
#include<iostream>
int main()
{
 int op,x=1,y=1,a,row,col,r,c,i,j,max,size,z=1,b;
 bool sign;
  do
  {
   cout<<"Welcome to my app";
   cout<<"Menu given:\n1.Find maximum \n2.Slice matrix \n3.Exit";
   cout<<"\n Enter your choice:\t";
   cin>>op;
   if(op==1)
      {
		cout<<"enter the size of array:\n";
		cin>>size;
		int *arr=new int[size];
		cout<<"enter the elements\n";
		for(i=0;i<size;i++)
		cin>>arr[i];
		do
		{
		 cout<<"\n1.with sign parameter \n2.without sign parameter \n3.exit\n";
                 cin>>a;
		 switch(a)
			{
			 case 1:cout<<"\n For considering sign enter 0";
				cout<<"\n For not considering sign enter 1";
				cout<<"\nEnter your choice: ";
				cin>>sign;
				max=find_max(arr,size,sign);
				cout<<"\nthe maximum array is :"<<max;
				break;
			 case 2:max=find_max(arr,size);
				cout<<"\nthe maximum of the array is:"<<max; 
				break;
			 default:cout<<"\n wrong input";
		 	}
		}while(a<=2);
	}
  	 else if(op==2)
                                {
                                        cout<<"\nEnter the size of the matrix\n";
                                        cin>>r>>c;
                                        int **arr=new int*[r];
                                        for(i=0;i<r;i++)
                                        arr[i]=new int[c];
                                        cout<<"\nEnter the elements:\n";
                                        for(i=0;i<r;i++)
                                         for(j=0;j<c;j++)
                                        cin>>arr[i][j];
                                        do
                                        {
                                                 cout<<"For slicing\n1.Row and column\n2.Row\n3.Without rows and columns\n4.Exit\n";
                                                 cout<<"\nEnter your choice.\n";
                                                 cin>>a;

                                        switch(a)
                                        {
                                                case 1:
							cout<<"\n Enter the row and column to slice the matrix\n";
                                                        cin>>row>>col;
                                                        if((row<=r)&&(col<=c))
                                                        {
                                                                int **a=new int*[row];
                                                                for(i=0;i<row;i++)
                                                                a[i]=new int[col];
                                                                a=slice_matrix(arr,row,col);
                                                                for(i=0;i<row;i++)
                                                                 for(j=0;j<col;j++)
                                                                {
                                                                        cout<<arr[i][j]<<" ";
                                                                        cout<<"\n";
                                                                }
                                                        }
                                                        break;
                                                case 2: cout<<"\nRow Slice\n";
                                                        cin>>row;
                                                        if(row<=r)
                                                        {
                                                                int **a=new int *[row];
                                                                for(i=0;i<row;i++)
                                                                a[i]=new int[2];
                                                                a=slice_matrix(arr,row);
                                                                for(i=0;i<row;i++)
                                                                {
                                                                        for(j=0;j<2;j++)
                                                                        cout<<arr[i][j]<<" ";
                                                                        cout<<"\n";
                                                                }
                                                        }
                                                        else
                                        			cout<<"Wrong Input\n"<<r;
                                                        break;

                                                case 3:{
                                                        int **a=new int*[2];
                                                        for(i=0;i<2;i++)
                                                                a[i]=new int[2];
                                                        a=slice_matrix(arr);
                                                        for(i=0;i<2;i++)
                                                        {
                                                                for(j=0;j<2;j++)
                                                                cout<<arr[i][j]<<" ";
                                                                cout<<"\n";
                                                        }
                                                }       break;
                                                }
                                        }while(a=1&&a<=3);
                                }





        } while(op<=2);
}


		   
				                                 




