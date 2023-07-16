#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int k){
    if (s>e)
    {
        return false;
    }

    int mid =s+(e-s)/2;

    if (arr[mid]==k){
        return true;
    }

    if (arr[mid]<k)
    {
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
    
    
}

int main(){
    int arr[5]={2,4,7,8,9};
    int n=5;
    int k=8;
    cout<<binarysearch(arr,0,5,k); 

    return 0;
}