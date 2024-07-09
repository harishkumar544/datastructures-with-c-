#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
class Tree{
    public:
    Node *root=nullptr;
    Node *createnode_and_insert(Node *root,int val)
    {
        if(root==nullptr)
        return new Node(val);
        else if(val<root->data)
        root->left=createnode_and_insert(root->left,val);
        else if(val>root->data)
        root->right=createnode_and_insert(root->right,val);
        return root;
    }
    void insert(int val)
    {
        root=createnode_and_insert(root,val);
    }
    void post_order(Node *root)
    {
        if(root==nullptr)
        return;
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
    }
    void pre_order(Node *root)
    {
        if(root==nullptr)
        return;
        cout<<root->data<<" ";
        pre_order(root->left);
        pre_order(root->right);
    }
    void in_order(Node *root)
    {
        if(root==nullptr)
        return;
        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
    }
    void post()
    {
        post_order(root);
    }
    void pre()
    {
        pre_order(root);
    }
    void in()
    {
        in_order(root);
    }
    
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Tree bst;
        while(n--)
        {
            int d;
            cin>>d;
            bst.insert(d);
        }
        bst.pre();
        cout<<endl;
        bst.in();
        cout<<endl;
        bst.post();
        cout<<endl<<endl;
    }
}