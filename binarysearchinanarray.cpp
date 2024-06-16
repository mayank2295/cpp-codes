// write a code for binary search in an array.
# include <iostream>
using namespace std;

int binary(int arr[], int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        
         if(key>arr[mid]){
            start = mid+1;
        }
        
        else {
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}


int main(){
    int size;
    cout<<"Enter the size of an array";
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element you want to search";
    cin>>key;
    cout<<binary(arr,size,key);
    return 0;
}