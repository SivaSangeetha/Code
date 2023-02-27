#include"reverse.h"
#include"sort.h"
#include<string.h>
int main()
{
 int ch,op1,op2,n,l,ans,i,res;
 int *a=new int[n];
 float *b=new float[n];
 char *arr=new char[n];
 char *d=new char[n]; 
 char *s=new char[n];
 do
  {
   cout<<"\n******Function Overloading******\n";
   cout<<"\n Menu given: \n1.Sorting \n2.Reverse \n3.Exit";
   cout<<"\n enter your choice:";
   cin>>ch;
   switch(ch)
   	{
       	 case 1:do
		 {
		  cout<<"\n1.Integer \n2.Float \n3.Char \n4.Exit";
		  cout<<"\n Enter your choice:";
		  cin>>op1;
		  switch(op1)
			{
		  	 case 1:cout<<"\nEnter how many numbers:";
			   	cin>>n;
				cout<<"\nEnter the integers: ";
				for(i=0;i<n;i++)
				cin>>a[i];
				sort(a,n);
				cout<<"\nThe sorted elements are: ";
				for(i=0;i<n;i++)
				cout<<"\t"<<a[i];
				break;
			 case 2:cout<<"\nEnter how many numbers: ";
                                cin>>n;
                                cout<<"\nEnter the float values: ";
                                for(i=0;i<n;i++)
                                cin>>b[i];
                                sort(b,n);
                                cout<<"\nThe sorted elements are:";
                                for(i=0;i<n;i++)
                                cout<<"\t"<<b[i];
                                break;
			 case 3:cout<<"\nEnter how many elements: ";
                                cin>>n;
                                cout<<"\nEnter the characters: ";
                                for(i=0;i<n;i++)
                                cin>>arr[i];
                                sort(arr,n);
                                cout<<"\nThe sorted elements are:1";
                                for(i=0;i<n;i++)
                                cout<<"\t"<<arr[i];
                                break;
			 case 4:break;
                        }
                 }while(op1>=1&&op1<=3);
             break;
         case 2:do
		{
		  cout<<"\n1.Number \n2.String \n3.Exit";
                  cout<<"\n Enter your choice:";
                  cin>>op2;
                  switch(op2)
		       {   
			 case 1:cout<<"\nEnter the number you want to reverse: ";
                                cin>>n;
                                res=reverse(n);
                                cout<<"\nThe reverse of the given number is:\t";
                                cout<<res;
                                break;
			 case 2:cout<<"Enter the no.of characters in your string:\n";
				cin>>l;
				cout<<"\nEnter the string you want to reverse:\t";
				for(i=0;i<l;i++)
                                cin>>s[i];
                                d=reverse(s);
                                cout<<"\nThe reverse of the given string is:\t";
				for(i=0;i<l;i++)
                                cout<<d[i];
                                break;
			 case 3:break;
                       }
                }while(op2>=1&&op2<=2);
             break;
		}
	}while(ch<=2);

}
