#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
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
            next = NULL;
        }
    }
};

void insertnode(node *&tail, int element, int d)
{
    if(tail==NULL){
        node* node1 = new node(d);
        tail = node1;
        node1 -> next = node1;
    }else{
        node* curr = tail;
        while(curr->data != element){
            curr=curr->next;
        }
        node * temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(node* tail){
    node* temp = tail;
    
    do{
        cout << tail->data << " ";
        tail = tail->next;

    }while(tail!=temp);
}


void deleten(node*&tail, int value){
    if(tail==NULL){
         return ;
    }else{
        node* prev = tail;
        node* curr = prev -> next;
        while(curr->data != value){
            prev = curr;
            curr->next = NULL;
        }
        if(curr==prev){
            tail = NULL;
        }
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
}