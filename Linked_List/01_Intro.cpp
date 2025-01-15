// #include <bits/stdc++.h>
// using namespace std;
 
//  struct Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;

//     }
//  };
 
// int main()
// {
//     vector<int> arr={2,3,4,5,6};
//     Node* y=new Node(arr[0],nullptr);
//     cout<<y;
//     cout<<y->data;
//     return 0;
// }



// Array to Linked_list

#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

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

int LengthLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    cout << endl; // To move to the next line after printing elements
    return cnt;
}

int SearchInLL(Node* head,int val){
    Node* temp = head;
    while (temp) {
        if(temp->data==val){
            return 1;
        }
        temp = temp->next;
        
    }
    return 0;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = ArrayToLL(arr); // Create linked list from array
    cout << "Length of Linked List: " << LengthLL(head) << endl; // Print length of linked list

    Node* temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<endl;

    cout<< SearchInLL(head,4);
    return 0;
}
