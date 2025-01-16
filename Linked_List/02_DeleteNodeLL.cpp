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

Node* removehead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;

    return head;
}

Node* removeK(Node* head,int k){
    if(head==NULL) return head;
    
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;

    }

    int cnt=0;
    Node*temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


Node* removeele(Node* head,int ele){
    if(head==NULL) return head;
    
    if(head->data==ele){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;

    }


    Node*temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        
        if(temp->data==ele){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


int main() {
    vector<int> arr = {2, 5, 8, 7};
     Node* head = ArrayToLL(arr);

    //  head=removehead(head);
    //  print(head);

    //  head=deleteTail(head);
    //  print(head);

    // head=removeK(head,2);
    // print(head);

    head=removeele(head,8);
    print(head);
    
}
