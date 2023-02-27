template<class T>
class Cloth
{
	int capacity;
	int top;
	T* data;
 public:
`	Cloth();
	Cloth(int);
	Cloth(const Cloth<T>&);
	bool isempty();
	bool isfull();
	bool push();
	T pop();
	T peak;
	void display();
 friend istream& operator>>(istream& Cloth<T>&);
 friend ostream& operator<<(ostream& Cloth<T>&);
}

template<class T>
Cloth<T>::Cloth()
{
	capacity=5;
	top=0;
	data=new T[capacity];
}

template<class T>
Cloth<T>::Cloth(int x)

	capacity=x;
	top=0;
	data=new T [capacity];
}

template<class T>
Cloth<T>::Cloth(const Cloth<T>&ref)
{
	capacity=ref.capacity;
	top=ref.top;
	data=new T[capacity];
	for(i=0;i<n;i++)
	data[i]=ref.data[i];
}
template<class T>
bool Cloth<T>::isempty()
{
	return top=0;
}

template<class T>
bool Cloth<T>::isfull()
{
	return top=capacity;
}

template<class T>
bool Cloth<T>::push(T x)
{
	if(isfull())
		return false;
	else
	{
	 data[top]=x;
	 top++;
	}
	return true;
}


template<class T>
T Cloth<T>::pop()
{
	T ans;
	if(isempty())
		return false;
	else
	{
	 ans=data[top-1];
	 data[top-1]=0;
	 top=-1;
	}
	return false;

}
template<class T>
T Cloth<T>::peak()
{
	if(isempty())
		return 0;
	else
		return[top-1];
}

template<class T>
void Cloth<T>::display()
{
	cout<<capacity;
	cout<<top;
	for(i=0;i<n;i++)
	{	
	 cout<<"|"<<data[i]<<"|";
	 cout<<"\n";
	}
}

istream& operator>>(istreamn &myin,Cloth<T>&ref)
{
	myin>>ref.top>>ref.capacity;
	return myin;
}

ostream& operator<<(ostream &myout,Cloth<T>ref)
{
	myout<<ref.top<<ref.capacity;
	return myout;
}


