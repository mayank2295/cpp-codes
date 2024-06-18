// to find the number of occurance of an element in an array 
# include <iostream>
using namespace std;

int firstoccurance(int arr[],int n,int key){
    int start  =0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastoccurance(int arr[],int n,int key){
    int start  =0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    // first and last ocuurance as the array is sorted and we are using binary search;
    // calling functions 
   int  first =  firstoccurance(arr,n,key);
   int  last = lastoccurance(arr,n,key);
   int count = last - first +1;
   cout<<"The total occurance is "<<count;
    return 0;
}