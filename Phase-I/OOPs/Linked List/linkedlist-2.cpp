#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        this->data = d;
        this->prev = NULL;
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

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

void insertathead(node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        return;
    }
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
    }
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatpos(node *&head, node *&tail, int pos, int d)
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
    temp->next->prev = nodeto;
    temp->next = nodeto;
    nodeto->prev = temp;
}

int getlen(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void deleten(int pos, node *&head)
{
    if (pos == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while (cnt <= pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
}