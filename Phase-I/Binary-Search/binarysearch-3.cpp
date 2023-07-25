#include <bits/stdc++.h>
using namespace std;


int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2;

    while(s<=e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;

        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int mysqrt(int x){
    int s  = 0;
    int e = x;

    long long int mid = s + (e-s)/2;

    long long int ans = -1;

    while(s<=e){
        long long int square = mid*mid;
        if(square==x) return mid;

        if(square < x){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

double moreprec(int n, int prec, int temp){
    double factor = 1;
    double ans = temp;
    for(int i = 0;i<prec;i++){
     factor = factor/10;
     for(double j = ans;j*j<n;j=j+factor){
        ans = j;
     }
    }
    return ans;
    
}


int main()
{
     
}