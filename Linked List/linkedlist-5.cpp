
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *next;
    int data;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *kreverse(node *head, int k)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }

    node *next = NULL;
    node *curr = head;
    node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        head->next = kreverse(next,k);
    }


    return prev;
}



bool iscircular(node* head){
    if(head == NULL) return NULL;


    node* temp = head->next;

    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }


    if(temp == head) return true;


    return false;
}



node* floydDetectLoop(node* head) {

    if(head == NULL)
        return NULL;

    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;

}





bool detectloop(node * head){
    if(head == NULL) return false;

    map<node*,bool> visited;

    node* temp = head;

    while(temp!=NULL){

        if(visited[temp]==true) return 1;
        visited[temp] = true;
        temp = temp->next;

    }
    return false;
}


node* getStartingNode(node* head) {

    if(head == NULL) 
        return NULL;

    node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

node *removeLoop(node *head)
{
    if( head == NULL)
        return NULL;

    node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}

int main()
{
}