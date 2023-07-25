#include <bits/stdc++.h>
using namespace std;

class patterns{
    public:
    void square(int n){
       for (int i = 0; i < n; i++)
       {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
        
       }
       
    }

    void number1(int n){
        int i = 1;
        while(i<=n){
            int j = 0;
            while(j<n){
                cout << i << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void number2(int n){
        int i = 0;
        while(i<n){
            int j = 1;
            while(j<=n){
                cout << j << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void count(int n){
        int i = 0;
        int c = 1;
        while(i<n){
            int j =0;
            while(j<n){
                cout << c << " ";
                c++;
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void triangle(int n){
        int i =1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout << "*" << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void number3(int n){
        int i =1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout << i << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void number4(int n){
        int i =1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout << i-j+1 << " ";
                j++;

            }
            cout << endl;
            i++;
        }
    }

    void alpha1(int n){
        int i = 0;
        while(i<n){
            int j = 0;
            while(j<n){
                cout << char('A'+i) << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void alpha2(int n){
        int i = 0;
        while(i<n){
            int j = 0;
            while(j<n){
                cout << char('A'+j) << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }

    void alpha3(int n){
        int i = 0;
        while(i<n){
            int j = 0;
            while(j<n){
                cout << char(i+j+'A') << " ";
                j++;
            }
            i++;
            cout << endl;
        }
    }

    void alpha4(int n){
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout << char('A' + i -1) << " ";
                j++;
            }
            i++;
            cout << endl;
        }
    }
 
    void alpha5(int n){
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout << char(n-i+'A'+j-1) << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    }     

    void triangle2(int n){
        int i = 1;
        while(i<=n){
            int s = n-i;
            while(s--){
                cout << " ";
                
            }
            int v = 1;
            while(v<=i){
                cout << "*";
                v++;
            }
            i++;
            cout << endl;
        }
    }

    void triangle3(int n){
         int i = 1;
        while(i<=n){
            int s = i-1;
            while(s--){
                cout << " ";
                
            }
            int v = 1;
            while(v<=n-i+1){
                cout << "*";
                v++;
            }
            i++;
            cout << endl;
        }
    }

    void dabang(int n){
         int i =1;
        while(i<=n){
            int j =1;
            while(j<=n-i+1){
                cout << j;
                j++;
            }
            int k =1;
            while(k<=2*(i-1)){
                cout << "*";
                k++;
            }
            int r = 1;
            while(r<=n-i+1){
                cout << (n-i+1)-r+1;
                r++;
            }
            
            cout << endl;
            i++;
        }
    }

// questions ==========================================================

    void rhombus(int n){
        int i = 0;
        while(i<n){
            int j = 0;
            while(j<n-i){
                cout << " ";
                j++;
            }
            j = 0;
            while(j<n){
                cout << "*";
                j++;
            }
            i++;
            cout << endl;
        }
    }
    
    void hollowrho(int n){
           int i,j;
            for(i = 0; i < n; i++)
          {
            for(j = 0; j < n - i; j++)
{
cout << " ";  // leading spaces
}
for(j = 0; j < n; j++)
{
// upper horizontal, bottom horizontal, left diagonal, right diagonal
if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
cout << "*";
else
cout << " "; 
}
cout << "\n";
} 
    }


    
};


int main(){
        patterns p;
        
        p.rhombus(4);
}