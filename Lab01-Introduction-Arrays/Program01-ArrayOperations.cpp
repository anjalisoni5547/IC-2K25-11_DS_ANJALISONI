#include <iostream>
using namespace std;
int main(){
    //Traversal array
    int arr[6]={43,56,67,32,12,31};
     cout<<"Elements of array:"<<" ";
    for(int i=0; i<6; i++){
       
        cout<<arr[i]<<endl;
    }
    //Search an element of array
    int key =67;
    bool found = false;  
    for(int i=0; i<6; i++){
        if(arr[i]==key){
        cout<<"Element found " << key <<  " at index " << i<<endl;;
        break;
        found=true;
        }
    }
    //Sorting of elements
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Sorted elements of array:"<<" ";
    sort(arr, arr + n );//, greater<int>());
    
    for(int i : arr){
        cout<< i<<" ";
    }
    return 0;
}


//OUTPUT
Elements of array: 43
56
67
32
12
31
Element found 67 at index 2
Sorted elements of array: 12 31 32 43 56 67 
