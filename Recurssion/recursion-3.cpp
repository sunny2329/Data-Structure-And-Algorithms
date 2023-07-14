#include <bits/stdc++.h>
using namespace std;

bool issorted(int * arr, int size){
    if(size==0 || size==1) return true;

    if(arr[0]>arr[1]) return false;
    else{
        return issorted(arr+1,size-1);
    }

}

int sumarr(int arr[], int size){
    if(size==0) return 0;
    if(size==1) return arr[0];

    int sum = arr[0] + sumarr(arr+1,size-1);

    return sum;

}

bool linearsearch(int arr[], int size, int k){
     if(size==0) return false;
     if(arr[0] == k) return true;
     else return linearsearch(arr+1,size-1,k);
}


bool binarysearchs(int *arr, int s, int e, int k){
    if(s>e) return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k) return true;

    if(arr[mid]<k) return binarysearchs(arr,mid+1, e , k);
    else return binarysearchs(arr,s, mid-1, k);
}



int main(){

}