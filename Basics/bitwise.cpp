#include<iostream>
using namespace std;


//questions 

//1. Subtract the product and sum of an integer

int subt(int n){
    //leetcode q-1281
    int p = 1;
    int sum = 0;
    while(n!=0){
        int rem = n%10;
        p= p*rem;
        sum = sum + rem;
        n = n/10;
    }
    
    return p - sum;
}


//2. Count the number of 1 bits 
int onebit(int n){
    //leetcode question 191
    int c = 0;
    while(n!=0){
        if(n&1) c++;
        n = (n>>1);

    }
    return c;
}

int main() {

    int a = 4;
    int b = 6;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b " << (a|b) << endl;
    cout<<" ~a " << ~a << endl;
    cout<<" a^b " << (a^b) << endl;

    cout<< (17>>1)<<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;

    int i = 7;

    cout<< (++i) <<endl;
    // 8 
    cout<< (i++) <<endl;
    // 8 , i = 9
    cout<< (i--) <<endl;
    //9 , i = 8 
    cout<< (--i) <<endl; 
    // 7, i =7
    return 0;
}