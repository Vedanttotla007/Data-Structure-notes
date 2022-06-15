#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* right;
        node* left;

        
        node(int data)
        {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

int isBSTUtil(node* root , int min , int max)
{
    if(root == NULL)
       return 1;
    if(root->data < min || root->data > max)
       return 0;
    return isBSTUtil(root->left ,min, root->data-1)&&isBSTUtil(root->right,root->data+1 , max);
}

int isBST(node* root)
{
    return (isBSTUtil(root,INT_MIN,INT_MAX));
}

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    if(isBST(root))
       cout<<"yes\n";
    else
       cout<<"No\n";
}