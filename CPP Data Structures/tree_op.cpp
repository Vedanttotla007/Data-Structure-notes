#include<bits/stdc++.h>
using namespace std;

class bst{
	public:
	  int data;
	  bst*left;
	  bst*right;
};

bst* getNewTree(int val)
{
	bst* root = new bst;
	root->data = val;
	root->left = NULL;
	root->right = NULL;
	return root;
}

bst* insert(bst* root , int data)
{
	if(root == NULL)
	   root = getNewTree(data);
	else if(root->data < data)
	       root->left = insert(root->left,data);
	else
	   root->right= insert(root->right,data);
	return root;
}

bool Search(bst* root,int val)
{
	if(root == NULL)
	   return false;
	else if(root->data == val)
	    return true;
	else if(root->data <= val)
	    return Search(root->left,val);
	else 
	   return  Search(root->right,val);
}

bst* getMin(bst* root)
{
    bst* temp = root;
	while(temp != NULL)
	  temp = temp->left;
	return temp;
}

bst* deleteNode(bst* root , int val)
{
	if(root == NULL)
	   return root;
	else if(root->data < val)
	   root->left = deleteNode(root->left,val);
	else if(root->data > val)
	   root->right = deleteNode(root->right,val);
	else
	{
		if(root->right == NULL)
		{
			bst* temp = root->left;
			free(root);
			return temp;
		}
		else if(root->left == NULL)
		{
			bst* temp = root->right;
			free(root);
			return temp;
		}
		bst* temp = getMin(root);
		root->data = temp->data;
		root->right = deleteNode(root->right,root->data);
	}
	return root;
}



void print(bst* ptr)
{
	if(ptr != NULL)
	{
		print(ptr->right);
		cout<<ptr->data<<" ";
		print(ptr->left);
	}

}

int main()
{
	bst*b = NULL;
	// b = insert(b,7);
	// b = insert(b,17);
	// b = insert(b,13);
	// b = insert(b,41);
	// b = insert(b,59);
	// b = insert(b,74);
	vector<int>v = {1,2,3,5,9};
	for(int i = 0 ; i < 5 ; i++)
	    b = insert(b,v[i]);
	print(b);
	// b = deleteNode(b,13);
	// cout<<endl;
	// print(b);
}