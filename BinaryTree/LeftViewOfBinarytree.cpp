#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void solve(node *root,vector<int>&ans,int level){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> getLeftView(node *root)
{
    vector<int> ans;
    solve(root,ans,0);
    return ans;
}

int main(){
    
    return 0;
}