#include"avl.h"

Labour::Labour()
{
	name=new char[20];
	strcpy(name,"abc");
	age=0;
	workHours=0.0;
	comPerday=0;
}

Labour::Labour(char* x,int a,float b,int c)
{
	int l;
	l=strlen(x);
	name=new char[l+1];
	strcpy(name,x);
	age=a;
	workHours=b;
	comPerday=c;
}

Labour::Labour(int c)
{
	comPerday=c;
}

Labour::Labour(const Labour&l)
{
	int x;
	x=strlen(l.name);
	name=new char[x+1];
	strcpy(name,l.name);
	age=l.age;
	workHours=l.workHours;
	comPerday=l.comPerday;
}

Labour::~Labour()
{
	delete []name;
}

Labour Labour::operator=(Labour l)
{
	strcpy(name,l.name);
	age=l.age;
	workHours=l.workHours;
	comPerday=l.comPerday;
	return *this;
}

Labour Labour::operator=(int l)
{
	strcpy(name,"null");
	age=l;
	workHours=1.1;
	comPerday=l;
	return *this;
}

bool Labour::operator==(Labour l)
{
	if(comPerday==l.comPerday)
		return 1;
	else
		return 0;
}

bool Labour::operator!=(Labour l)
{
	if(comPerday!=l.comPerday)
		return 1;
	else
		return 0;
}

bool Labour::operator<(Labour l)
{
	if(comPerday < l.comPerday)
		return 1;
	else
		return 0;
}

bool Labour::operator>(Labour l)
{
	if(comPerday > l.comPerday)
		return 1;
	else
		return 0;
}

istream& operator>>(istream &myin,Labour &l)
{
	cout<<"\nEnter the name : ";
	myin>>l.name;
	cout<<"\nEnter the age : ";
	myin>>l.age;
	cout<<"\nEnter the working hours : ";
	myin>>l.workHours;
	cout<<"\nEnter the commission per day : ";
	myin>>l.comPerday;
	return myin;
}

ostream& operator<<(ostream &myout,Labour &l)
{
	myout<<"\n\tName"<<"\tAge"<<"\tWorking Hours"<<"\tCommission PerDay";
	myout<<"\n\t------------------------------------------------------";
	myout<<"\n\t"<<l.name<<"\t"<<l.age<<"\t"<<l.workHours<<"\t\t"<<l.comPerday<<"\n";
	return myout;
}

AVLNode::AVLNode()
{
	data=0;
	right=NULL;
	left=NULL;
	height=0;
}

AVLNode::AVLNode(Labour d,AVLNode* r,AVLNode* l,int h)
{
	data=d;
	right=r;
	left=l;
	height=h;
}

AVLNode::AVLNode(const AVLNode &l)
{
	data=l.data;
	right=l.right;
	left=l.left;
	height=l.height;
}

AVLNode::~AVLNode()
{
	delete right;
	delete left;
}


AVLTree::AVLTree()
{
	root=NULL;
}

AVLTree::AVLTree(AVLNode *n)
{
	root=n;
}

AVLTree::AVLTree(const AVLTree &t)
{
	root=t.root;
}

AVLTree::~AVLTree()
{
	delete root;
}

AVLNode* AVLTree::insert(AVLNode *temp,AVLNode *newNode)
{
	
	if(temp==NULL)
	{
		root=newNode;
		return root;
	}
	else
	{		
		if(temp->data > newNode->data)
		{
			if(temp->left==NULL)
				temp->left = newNode;
			else
				insert(temp->left,newNode);
		}
	
		else if(temp->data < newNode->data)
		{
			if(temp->right==NULL)
				temp->right = newNode;
			else
				insert(temp->right,newNode);
		}
	
		else 
			return temp;
	}

	temp->height= max(height(temp->left),height(temp->right)) +1;
	
	int balance = balFactor(temp);
	
	if(balance > 1)
	{
		if(newNode->data < temp->left->data)
			return LLRot(temp);		
		else
			return LRRot(temp);
	}
	
	if(balance < -1)
	{
		if(newNode->data > temp->left->data)
			return RRRot(temp);		
		else
			return RLRot(temp);		
	}
	return temp;	
	
}

int AVLTree::isEmpty()
{
	if(root==NULL)
		return 1;
	else
		return 0;
}

int AVLTree::max(int a,int b)
{
	if(a > b)
		return a;
	else if(a < b)
		return b;
	return a;
}

int AVLTree::height(AVLNode *temp)
{
	if(temp==NULL)
		return -1;		
	else
		return temp->height;
}

int AVLTree::balFactor(AVLNode *temp)
{
	if(temp==NULL)
		return -1;		
	else
		return (height(temp->left) - height(temp->right));		
}

void AVLTree::makeEmpty()
{
		root=NULL;
}


AVLNode* AVLTree::LLRot(AVLNode *k3)	
{
	AVLNode *k2=k3->left;
	AVLNode *temp=k2->right;
	
	k2->right=k3;
	k3->left=temp;
	
	k3->height=max(height(k3->left),height(k3->right))+1;
	k2->height=max(height(k2->left),height(k2->right))+1;
	
	return k2;
}

AVLNode* AVLTree::RRRot(AVLNode *k1)
{
	AVLNode *k2=k1->left;
	AVLNode *temp=k2->left;		
	k1->left=k1;
	k1->right=temp;

	
	k1->height=max(height(k1->left),height(k1->right))+1;
	k2->height=max(height(k2->left),height(k2->right))+1;
	
	return k2;
}

AVLNode* AVLTree::LRRot(AVLNode *k3)				
{

	k3->left=RRRot(k3->left);
	
	return LLRot(k3);
}

AVLNode* AVLTree::RLRot(AVLNode *k1)			
{
	
	k1->right=LLRot(k1->right);
	
	return RRRot(k1);	
}

void AVLTree::inorder(AVLNode *temp)	
{
	if(temp!=NULL)
	{
		inorder(temp->left);
		cout<<temp->data;
		inorder(temp->right);
	}
}

void AVLTree::preorder(AVLNode *temp)
{
	if(temp!=NULL)
	{
		cout<<temp->data;
		preorder(temp->left);
		preorder(temp->right);
	}
}

void AVLTree::postorder(AVLNode *temp)		
{
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		cout<<temp->data;
	}
}

AVLNode* AVLTree::getRoot()					
{
	return root; 
}

Labour AVLTree::search(Labour ele)	
{
	AVLNode *temp=root;
	while(temp!=NULL)
	{
		if(temp->data < ele)
			temp=temp->right;
		else if(temp->data > ele)
			temp=temp->left;
		else 
			return temp->data;
	}
	Labour abc;
	return abc;
}


