#include<bits/stdc++.h>
using namespace std;
class Tree
{
    public:
    int val;
    Tree* left;
    Tree* right;
    Tree(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Tree* input_tree()
{
    int val;
    cin>>val;
    Tree* root=new Tree(val);
    queue<Tree*>q;
    q.push(root);
    while (!q.empty())
    {
        Tree* p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Tree* myleft,*myright;
        if(l==-1)
        myleft=NULL;
        else
        myleft=new Tree(l);
        if(r==-1)
        myright=NULL;
        else
        myright=new Tree(r);

        p->left=myleft;
        p->right=myright;

        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}
bool search_BST(Tree* root,int val)
{
    if(root==NULL)
    return false;
    if(root->val==val)
    return true;
    if(val<root->val)
    return search_BST(root->left,val);
    else
    return search_BST(root->right,val);

}
int main()
{
    Tree* root = input_tree();
    int val;
    cin>>val;
    bool ans = search_BST(root,val);
    if(ans)
    cout<<"The value is found";
    else
    cout<<"The value is not found";
    
    return 0;
}