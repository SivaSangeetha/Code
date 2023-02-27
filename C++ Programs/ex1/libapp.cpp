#include"numeric.h"
#include"array.h"
int main()
{
 int n,ch,op1,op2,i,ans,res,ele;
 int *a=new int[n];
 do
  {
   cout<<"\nWelcome to my app\n";
   cout<<"\nMenu given:\n1.Numeric operations. \n2.Array operations. \n3.exit.\n";
   cout<<"\nEnter your choice:\n";
   cin>>ch;
   switch(ch)
	 {
	  case 1:cout<<"\nEnter any number:\n";
		cin>>n;
		do
		{
		 cout<<"\n1.Prime Checking \n2.Find minimum digit \n3.Count digit \n4.exit\n";
		 cout<<"\nEnter your choice:\n";
		 cin>>op1;
		 switch(op1)
		 {
		  case 1:res=prime(n);
			if(res==1)
			{
			cout<<"Given number "<<n <<" is ";
			cout<<"Prime Number\n";
			}
			else
			cout<<"Given number "<<n <<" is ";
			cout<<"Not a Prime Number\n";
			break;
		  case 2:res=find_min(n);
		 	cout<<"\nThe Minimum digit of " <<n <<" is:";
			cout<<res;
			break;
		  case 3:res=find_count(n);
			cout<<"\nNo.of digits in " <<n <<" is: ";
			cout<<res;
		  case 4:break;
  		 }
      		}while(op1>=1&&op1<=3);
	     break;
	 case 2:cout<<"\nEnter the size of array:\n";
		cin>>n;
		cout<<"\nEnter the array elements:\n";
		for(i=0;i<n;i++)
		cin>>a[i];
		do
		{
		 cout<<"\n1.Find maximum of the array \n2.Find occurance \n3.Sum of array \n4.exit\n";
		 cout<<"\nEnter your choice:\n";
		 cin>>op2;
		 switch(op2)
		 {
		  case 1:ans=find_max(a,n);
	   		 cout<<"\nThe maximum of given array is: ";
			 cout<<ans;
			 break;
		  case 2:cout<<"\nEnter the element\n";
			 cin>>ele;
			 ans=find_occur(a,n,ele);
			 cout<<"\nThe occurance of the elelment is: ";
			 cout<<ans;
			 break;
		  case 3:ans=find_sum(a,n);
			 cout<<"\nThe sum of elements of the given array is: ";
			 cout<<ans;
			 break;
		  case 4:break;
		 }
		}while(op2>=1&&op2<=3);
	  case 3:cout<<"\nExit\n";
 		 break;
	 }
  }while(ch>=1&&ch<=2);
}
