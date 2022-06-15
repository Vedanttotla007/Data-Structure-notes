#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* left , *right;
    node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

node* ArrayToBST(vector<int>a , int l , int r)
{
    if(l > r)
       return NULL;
    if(l == r)
       return new node(a[l]);
    int m = (l + (r-l)/2);
    node* root = new node(a[m]);
    root->left = ArrayToBST(a,l,m-1);
    root->right = ArrayToBST(a,m+1,r);
    return root;
}

node* convertArrayToBST(vector<int>a)
{
    return ArrayToBST(a,0,a.size()-1);
}

void print(node* root)
{
    node* ptr = root;
    if(ptr == NULL)
       return;
    cout<<ptr->val<<" ";
    print(ptr->left);
    print(ptr->right);
}

int main()
{
    vector <int> a = {-4 , 0 , 1 , 2 , 7};
    node* root = convertArrayToBST(a);
    print(root);
}