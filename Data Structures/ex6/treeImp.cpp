#include"tree.h"

Labour::Labour()
{
	name=new char[20];
	strcpy(name,"abc");
	age=0;
	workHours=0.0;
	comPerday=0;
}

Labour::Labour(int c)
{
	name=new char[20];
	strcpy(name,"abc");
	age=0;
	workHours=0.0;
	comPerday=c;
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

TreeNode::TreeNode()
{
	data=0;
	right=NULL;
	left=NULL;
}

TreeNode::TreeNode(Labour d,TreeNode  *r,TreeNode *l)
{
	data=d;
	right=r;
	left=l;
}

TreeNode::TreeNode(const TreeNode &t)
{
	data=t.data;
	right=t.right;
	left=t.left;
}

TreeNode::~TreeNode()
{
	delete right;
	delete left;
}

BST::BST()
{
	root=NULL;
}

BST::BST(TreeNode *t)
{
	root=t;
}

BST::BST(const BST &b)
{
	root=b.root;
}

BST::~BST()
{
	delete root;
}

bool BST::isEmpty()
{
	if(root==NULL)
		return true;
	else
		return false;
}

TreeNode* BST::getRoot()
{
	return root;
}

TreeNode* BST::insertTree(TreeNode *newNode)
{
	if(root==NULL)
	{
		root=newNode;
	}
	else
	{
		TreeNode *parent=NULL;
		TreeNode *temp=root;
		while(temp!=NULL)
		{
			parent=temp;
			if(newNode->data > temp->data)
				temp=temp->right;
			else if(newNode->data < temp->data)
				temp=temp->left;
			else
				return NULL;
		}

	if(parent->data <  newNode->data)
		parent->right=newNode;
	else if(parent->data  > newNode->data)
		parent->left=newNode;
	else
		return NULL;
	}
	return root;
}

Labour BST::deleteTree(Labour Elt)
{
	TreeNode *parent=NULL;
	TreeNode *temp=root;
	while(temp!=NULL)
	{
		if(temp->data==Elt) 
		{
			Labour returnVar=temp->data;
			if(temp->left==NULL && temp->right==NULL)
			{
				if(temp==root)  
				{
					root=NULL;
				}
				else      
				{
					if(parent->left==temp)
						parent->left=NULL;
					else
						parent->right=NULL;
				}
			}
		
			else if(temp->left!=NULL && temp->right!=NULL)
			{
				
				TreeNode* temp1;
				temp1=temp->right;
				while(temp->left!=NULL)
				{
				
					parent=temp1;
					temp1=temp->left;
				}
				temp->data=temp1->data;
				if(temp1->right!=NULL)	
					parent->left=temp1->right;
				else
					parent->left=NULL;
			}
			else
			{			
				if(temp==root)	
				{
					if(temp->left!=NULL && temp->right!=NULL)
					{	
						root=temp->left;
					}
					else	
					{
						root=temp->right;
					}
				}
		
			 else 
			 {
				if(parent->right==temp)
				{	
					if(temp->right!=NULL && temp->left==NULL)
						parent->right=temp->right;	
					else
						parent->right=temp->left;	
				}
				else
				{	
					if(temp->right!=NULL && temp->left==NULL)
						parent->left=temp->right;	
					else
						parent->left=temp->left;	
				}
					
			 }
			}
			return returnVar;
		}
			else if(temp->data > Elt)	
			{
				parent=temp;
				temp=temp->left;
			}
			else	
			{
				parent=temp;
				temp=temp->right;
			}
	}
	Labour abc;
	return abc;
}
void BST::inorder(TreeNode *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->left);
		cout<<temp->data;
		inorder(temp->right);
	}
}

void BST::preorder(TreeNode *temp)
{
	if(temp!=NULL)
	{
		cout<<temp->data;
		preorder(temp->left);
		preorder(temp->right);
	}
}

void BST::postorder(TreeNode *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		cout<<temp->data;
	}
}

Labour BST::search(Labour key)
{
	Labour abc;
	TreeNode* temp=root;
	while(temp!=NULL)
	{
		if(temp->data==key)
			return temp->data;
		else if(temp->data > key)
			temp=temp->left;
		else if(temp->data < key)
			temp=temp->right;
	}
	return abc;
}

Labour BST::findMin()
{
	TreeNode* temp=root;
	TreeNode* parent;
	while(temp!=NULL)
	{
		parent=temp;
		temp=temp->left;
	}
	return parent->data;
		
}

Labour BST::findMax()
{
	TreeNode* temp=root;
	TreeNode* parent;
	while(temp!=NULL)
	{
		parent=temp;
		temp=temp->right;
	}
	return parent->data;
}

int BST::getSize(TreeNode* temp,int cnt)
{
	if(temp!=NULL)
	{
		cnt++;
		getSize(temp->left,cnt);
		getSize(temp->right,cnt);
	}
	else
		return cnt;		
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
