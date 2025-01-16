#include <bits/stdc++.h>
using namespace std;
 

class Node {
    public:
        int data;      
        Node* next;       
        // Constructors
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

Node* ArrayToLL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty array case

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}

Node* insertHead(Node* head,int val){
    Node* temp=new Node(val,head);
    return temp;
}

Node* insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;

    return head;
}

Node* insertK(Node* head, int ele, int k){
    if(head==NULL){
        if(k==1){
            return new Node(ele);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new Node(ele,head);

    }

    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==(k-1)){
            Node* x=new Node(ele,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}


Node* insertBeforeValue(Node* head, int ele, int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return new Node(ele,head);

    }


    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* x=new Node(ele,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
     Node* head = ArrayToLL(arr);

//    head=insertTail(head,200);
//    print(head);

//    head=insertK(head,200,3);
//    print(head);

   head=insertBeforeValue(head,200,2);
   print(head);
    
}