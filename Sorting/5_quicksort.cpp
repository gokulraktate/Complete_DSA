#include <bits/stdc++.h>
using namespace std;
 
 //quick sort steps
 //1.Pick a pivot
    //   it may be first,last,middle or any random element
 //2.smaller on left of pivot and larger on right of pivot 
 //3.do it recursively for left and right
 

int partition(vector <int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while (i<j)
    {
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j)  swap(arr[i],arr[j]);

    }
    swap(arr[low],arr[j]);
    return j;
    
}
void qS(vector <int> &arr,int low,int high){
    if(low<high){
        int pIndex= partition(arr,low,high);
        qS(arr,low ,pIndex-1);
        qS(arr,pIndex+1,high);
        
    }
}

vector<int> quickSort(vector<int> arr){
    qS(arr,0,arr.size()-1);
    return arr;
}


int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    arr=quickSort(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}