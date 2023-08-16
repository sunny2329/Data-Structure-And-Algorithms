#include <bits/stdc++.h>
using namespace std;

#define null NULL;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = null;
        this->right = null;
    }
};

node *buildtree(node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return null;

    cout << "enter data for left:" << endl;

    root->left = buildtree(root->left);
    cout << "enter data for right" << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelorder(node *root)
{
    queue<node *> q;

    q.push(root);

    q.push(__null);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == __null)
        {
            cout << endl;
            if (!q.empty())
                q.push(__null);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    if (root == __null)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == __null)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == __null)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


node * buildfromlevelorder(node* &root){
    queue<node*> q;
    cout << "Enter data for root" << endl;

    int data;

    cin >> data;

    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "enter left node for" << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if(leftdata!=-1){
            temp ->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter right node for" << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if(rightdata!=-1){
            temp ->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{

    node *root = NULL;
}
