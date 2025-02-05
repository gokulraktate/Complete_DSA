/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

// brute force
// time limit exceeded

// class Solution {
//   public:
//     // Function which returns the  root of the flattened linked list.
   

//  Node *flatten(Node *root) {
//         // Your code here
//         Node* temp=root;
        
//         vector<int>arr;
        
//         while(root){
//             Node* t2=temp;
//             while(t2){
//                arr.push_back(t2->data);
//                t2=t2->bottom;
//            }
//            temp=temp->next;
//         }
//         sort(arr.begin(),arr.end());
//         root=convert(arr);
//     }
    
//     Node* convert(vector<int>& arr){
//         if(arr.size()==0) return NULL;
//         Node* newNode=new Node(arr[0]);
//         Node* root=newNode;
//         Node*temp=root;
//         for(int i=1;i<arr.size();i++){
//             newNode=new Node(arr[i]);
//             temp->bottom=newNode;
//             temp=temp->next;
//         }
//         return root;
//     }
    
    
// };




/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

// optimal


// class Solution {
//   public:
    
//     Node* merge(Node* list1,Node* list2){
//         Node* dummy=new Node(-1);
//         Node* res=dummy;
//         while(list1!=NULL && list2!=NULL){
//             if(list1->data<list2->data){
//                 res->bottom=list1;
//                 res=list1;
//                 list1=list1->bottom;
//             }
//             else{
//                 res->bottom=list2;
//                 res=list2;
//                 list2=list2->bottom;
//             }
//             res->next=NULL;
//         }
//         if(list1) res->bottom=list1;
//         else res->bottom=list2;
        
//         if(dummy->bottom) dummy->bottom->next=NULL;
//         return dummy->bottom;
//     }
  
//     // Function which returns the  root of the flattened linked list.
//     Node *flatten(Node *root) {
//         // Your code here
//         if(root==NULL || root->next==NULL) return root;
        
//         Node* mergeHead=flatten(root->next);
//         root=merge(root,mergeHead);
//         return root;
//     }
// };