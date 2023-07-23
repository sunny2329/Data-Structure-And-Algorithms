#include <bits/stdc++.h>
using namespace std;

#define null NULL

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = null;
    }
};

node* reverselinkedlist(node *head){

    if(head == null || head->next ==null)
    return head;
    node* prev = null;
    node* curr = head;

    while(curr!=null){
        node * forward = curr ->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int getlen(node *head){
    int len = 0;
    while(head!=null){
        len++;
        head = head->next;
    }
    return len;
}

node * findmid(node *head){
    int len = getlen(head);
    int ans = (len/2);
    node * temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp-> next;
        cnt++;
    }
    return temp;
}

int main()
{

}