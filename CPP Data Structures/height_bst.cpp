#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* right;
    node* left;
};

int findHeightofTree(node*root)
{
    if(root == NULL)
       return -1;
    else
    {
        int l = findHeightofTree(root->left);
        int r = findHeightofTree(root->right);
        if(l >= r)
           return (l+1);
        else
           return (r+1);
    }
}

node* getNewNode(int data)
{
    node* root = new node();
    root->data = data;
    root->right = root->left = NULL;
    return root;
}

int main()
{
    node* root = getNewNode(3);
    root->right = getNewNode(4);
    root->left = getNewNode(2);
    root->left->left = getNewNode(1);
    root->left->right = getNewNode(5);
    cout<<"Depth of tree is: "<<findHeightofTree(root);
}
