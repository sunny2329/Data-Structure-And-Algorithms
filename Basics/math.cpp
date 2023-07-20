#include <bits/stdc++.h>
using namespace std;


int fastExpo(int a, int b ) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            //odd
            res = res*a;
        }
        b = b >> 1;
        a = a * a; 
    }
    return res;
}


int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

//using Sieve
void sieve(bool prime[]) {

    //setting TRUE for every number
    for(int i=2;i<=1000000;i++){
        prime[i]=1;
    }

    for(int i = 2; i<=1000000; i++) {

        if(prime[i]){
            //iske saare multiple mark krde - non prime
            for(int j = 2*i; j<=1000000; j+=i){
                prime[j] = 0;   
            }
        }
    }
    prime[0] = prime[1] = 0;
}







int main()
{



}