#include <bits/stdc++.h>
using namespace std;


//num&1 if 1-odd else 0-even


int decimaltobinary(int n){
    int ans = 0,i=0;
    while(n!=0){
        int bit = n&1;
        ans = (bit*pow(10,i)) + ans;

        n = n>>1;

        i++;
    }
    return ans;
}


int binarytodecimal(int n){
    int ans =0,i=0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }
    return ans;
}

//questions

//1. reverse an integer

int reverseint(int x){
    //leetcode q-7
    int ans = 0;
    while(x!=0){
        int d = x%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)) return 0;

        ans = ans*10 +d;
        x = x/10;
    }
    return ans;
}


//2. complement of base 10 integer

int comple(int n){
    //leetcode question - 1009

    int m = n;
    int mask = 0;
    if(n==0) return 1;
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}

//3. power of two 
bool power(int n){
    for(int i = 0;i<=30;i++){
           int ans = pow(2,i);
           if(ans == n) return true;
    }
 
    return false;
}