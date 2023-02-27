#include<string.h>
#include<iostream>
using namespace std;

class Labour
{
	private:
		char* name;
		int age;
		float workHours;
		int comPerday;
		
	public:
		Labour();
		Labour(char*,int,float,int);
		Labour(int);
		Labour(const Labour&);
		~Labour();
		Labour operator=(Labour);
		Labour operator=(int);
		bool operator==(Labour);
		bool operator!=(Labour);
		bool operator>(Labour);
		bool operator<(Labour);		
	friend istream& operator>>(istream&,Labour&);
	friend ostream& operator<<(ostream&,Labour&);
};



class AVLNode
{
	private:
		Labour data;
		AVLNode *left;
		AVLNode *right;
		int height;
	public:
		AVLNode();
		AVLNode(Labour,AVLNode*,AVLNode*,int);
		AVLNode(const AVLNode&);
		~AVLNode();
	friend class AVLTree;
};

class  AVLTree
{
	private:
		AVLNode *root;
	public:
		AVLTree();
		AVLTree(AVLNode*);
		AVLTree(const AVLTree&);
		~AVLTree();
		int isEmpty();
		int max(int,int);
		int height(AVLNode*);
		int balFactor(AVLNode*);
		AVLNode* insert(AVLNode*,AVLNode*);
		AVLNode* LRRot(AVLNode*);
		AVLNode* RLRot(AVLNode*);
		AVLNode* LLRot(AVLNode*);
		AVLNode* RRRot(AVLNode*);
		void makeEmpty();
		void inorder(AVLNode*);
		void preorder(AVLNode*);
		void postorder(AVLNode*);
		AVLNode* getRoot();
		Labour search(Labour);
};
