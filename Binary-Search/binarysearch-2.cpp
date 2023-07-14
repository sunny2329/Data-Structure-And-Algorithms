#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int key){
    int s =0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid -1;
        }else if(key>arr[mid]){
            s = mid+1;

        }else if(key<arr[mid]){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastocc(int arr[], int n, int key){
    int s =0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid +1;
        }else if(key>arr[mid]){
            s = mid+1;

        }else if(key<arr[mid]){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int peakinmount(vector<int>& arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;

        }else{
            e = mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}


int main(){

}