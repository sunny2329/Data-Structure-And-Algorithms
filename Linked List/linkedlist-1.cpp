#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node() {}
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertatpos(node *&tail, node *&head, int pos, int d)
{
    node *temp = head;
    if (pos == 1)
    {
        insertathead(head, d);
        return;
    }

    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    node *nodeto = new node(d);

    nodeto->next = temp->next;
    temp->next = nodeto;
}

void deleten(int pos, node *&head)
{
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;

        int cnt=1;
        while(cnt<=pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}

int main()
{
    node *head = new node(9);

    insertathead(head, 5);
    insertathead(head, 0);
    insertathead(head, 51);
    insertathead(head, 52);
    print(head);
}