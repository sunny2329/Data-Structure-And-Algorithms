#include <bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}


int countDistinctway(long long n){
    if(n<0) return 0;
    if(n==0) return 1;

    return countDistinctway(n-1) + countDistinctway(n-2);
}


void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}
