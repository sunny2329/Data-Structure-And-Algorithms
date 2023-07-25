#include <bits/stdc++.h>
using namespace std;

void reverses(string& str, int i, int j){
    if(i>j) return;

    swap(str[i],str[j]);
    i++;
    j--;

    reverses(str,i,j);
}

bool checkpalindrome(string s, int i , int j){
    if(i>j) return true;

    if(s[i]!=s[j]) return false;

    else return checkpalindrome(s,i+1,j-1);
}


int power(int a, int b){
    if(b==0) return 1;

    if(b==1) return a;
    int ans = power(a,b/2);

    if(b%2==0) return ans*ans;
    else return a*ans*ans;
}

void sortarray(int *arr, int n){
    if(n==0 || n==1) return ;

    for(int i = 0;i<n-1;i++){
     if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }

    sortarray(arr, n-1);
}



int main()
{

}