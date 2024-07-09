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
    bool lot(Node* root)
    {
        queue<Node*> q;
        if(root!=nullptr)
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            for(int i=1;i<=s;i++){
                Node* node=q.front();
                //cout<<node->data<<" ";
                if(!((node->left!=nullptr&&node->right!=nullptr) || (node->left==nullptr&&node->right==nullptr)) )
                return false;
                if(node->left!=nullptr)
                q.push(node->left);
                if(node->right!=nullptr)
                q.push(node->right);
                q.pop();
            }
        }
        return true;
    }
    void order()
    {
        if(lot(root))
        {
            cout<<"True"<<endl;
        }
        else
        cout<<"False"<<endl;
    }
    
};
int main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
        Tree bst;
        int n;
        cin>>n;
        while(n--)
        {
            int d;
            cin>>d;
            bst.insert(d);
        }
        bst.order();
    
    }
}