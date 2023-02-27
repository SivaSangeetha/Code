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
		Labour(int);
		Labour(char*,int,float,int);
		Labour(const Labour&);
		~Labour();
		Labour operator=(Labour);
		Labour operator=(int);
		bool operator==(Labour);
		bool operator!=(Labour);
		bool operator<(Labour);
		bool operator>(Labour);
	friend istream& operator>>(istream&,Labour&);
	friend ostream& operator<<(ostream&,Labour&);
	friend class TreeNode;
};


class TreeNode
{
	private:
		Labour data;
		TreeNode *left;
		TreeNode *right;
		
	public:
		TreeNode();
		TreeNode(Labour,TreeNode* ,TreeNode*);
		TreeNode(const TreeNode&);
		~TreeNode();
	friend class BST;
	
};

class BST
{
	private:
		TreeNode *root;

	public:
		BST();
		BST(TreeNode*);
		BST(const BST&);
		~BST();
		bool isEmpty();
		TreeNode* getRoot();
		TreeNode* insertTree(TreeNode*);
		Labour deleteTree(Labour);
		Labour search(Labour);
		void inorder(TreeNode *temp);
		void preorder(TreeNode *temp);
		void postorder(TreeNode *temp);
		Labour findMin();
		Labour findMax();
		int getSize(TreeNode*,int);

};

