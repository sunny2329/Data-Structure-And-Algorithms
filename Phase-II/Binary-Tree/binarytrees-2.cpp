#include <bits/stdc++.h>
using namespace std;

// questions

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(node *root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

// diameter of a tree is the number of nodes on the longest path between two end nodes

int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2, op3));
    return ans;
}


bool isbalanced(node* root){
    if(root==NULL){
        return true;
    }

    bool left = isbalanced(root->left);
    bool right = isbalanced(root->right);

    bool di = abs(height(root->left) - height(root->right));
    if(left&&right&&di) return true;

    return false;
}

bool isidentical(node* r1, node* r2){
    if(r1==NULL && r2==NULL) return true;

    if(r1==NULL && r2!=NULL) return false;


    if(r1!=NULL && r2==NULL) return false;


    bool left = isidentical(r1->left,r2->left);
    bool right = isidentical(r1->right,r2->right);

    bool value = r1->data == r2->data;

    if(left && right && value) return true;

    return false;
}


pair<bool,int> issum(node* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    if(root->left == NULL && root->right == NULL){
        pair<bool,int> p = make_pair(true,root->data);
    }

    pair<bool,int> leftans = issum(root->left);
    pair<bool,int> rightans = issum(root->right);

    bool left =  leftans.first;
    bool right = rightans.first;

    bool condn = root->data == leftans.second + rightans.second;

    pair<bool, int> ans;

    if(left&&right&&condn){
        ans.first = true;
        ans.second = 2*root->data;
    }else ans.first = false;

    return ans; 
}


int main()
{
}