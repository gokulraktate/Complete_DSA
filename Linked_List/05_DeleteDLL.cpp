#include <bits/stdc++.h>
using namespace std;
 
 class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
 };

 Node* convertArrToDLL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
    
 }

 int print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
 }

Node* removeHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* prev=head;
    head=head->next;

    prev->next=nullptr;
    return head;

}

Node* removeTail(Node* head){
    if(head==NULL ||head->next==NULL){
        return NULL;
    }

    Node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    prev->next=nullptr;
    temp->back=nullptr;
    delete(temp);

    return head;
}

Node* removeK(Node* head,int k){
    if(head==NULL){
        return NULL;
    }

    int cnt=0;
    Node* kNode=head;
    while(kNode!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        kNode=kNode->next;
    }
    Node* prev=kNode->back;
    Node* front=kNode->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
       head=front;
       head->back=nullptr;
       delete kNode;

        return head;
    }

    else if(front==NULL){
        prev->next=nullptr;
        kNode->back=nullptr;
        delete(kNode);

        return head;
    }
    prev->next=front;
    front->back=prev;

    kNode->back=nullptr;
    kNode->next=nullptr;
    delete kNode;

    return head;
}
 
int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node* head=convertArrToDLL(arr);
    print(head);
    cout<<endl;

    // head=removeHead(head);
    // print(head);

    // head=removeTail(head);
    // print(head);

    head=removeK(head,1);
    print(head);
    return 0;
}