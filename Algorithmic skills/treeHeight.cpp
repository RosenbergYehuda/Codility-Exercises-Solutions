//The problem: https://app.codility.com/programmers/trainings/4/tree_height/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//the most fundamental component
struct tree
{
	int data;
	tree* l;
	tree* r;
};

//create a node with data in the father, and empty children
tree* newNode(int data)
{
	tree* Tree = new tree();
	Tree->data = data;
	Tree->l = NULL;
	Tree->r = NULL;
	
	return(Tree);
}

// the actual solution for the problem
int treeHeight(tree* T)
{
	if (T == NULL)
		return -1;
	else
	{
		// compute the depth of the subtrees
		int lDepth = treeHeight(T->l);
		int rDepth = treeHeight(T->r);
	
		// return the larger one 
		if (lDepth > rDepth)
			return(lDepth + 1);
		else return(rDepth + 1);
	}
}
	

int main()
{
	//creating a tree for example
	tree* root = newNode(6);

	root->l = newNode(3);
	root->r = newNode(8);
	root->l->l = newNode(1);
	root->l->r = newNode(4);
	
	cout <<treeHeight(root)<<endl;
	return 0;
}
