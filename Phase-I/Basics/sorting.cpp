#include <bits/stdc++.h>
using namespace std;


class sorting{

    public:
    void selectionsort(int arr[], int size);
    void bubblesort(int arr[], int size);
    void insertionsort(int arr[], int size);

};


void sorting::selectionsort(int arr[], int size){
     for(int i = 0;i<size;i++){
      int mini = i;
      for(int j = i+1;j<size;j++){
        if(arr[j]<arr[mini]) mini = j;
      }
      swap(arr[mini],arr[i]);
    //   cout << "hi";
     }
}


void sorting::bubblesort(int arr[], int n){
    for(int i = 1;i<=n;i++){
        bool swapped = false;
     for(int j = 0;j<n-i;j++){
      if(arr[j]>arr[j+1]) {
        swap(arr[j],arr[j+1]);
        swapped = true;
     }
    }
    if(swapped == false) break;
}
}

void sorting::insertionsort(int a[],int n){
    int j;
    for(int i = 1;i<n;i++){
        int temp = a[i];
     for( j = i-1;j>=0;j--){
      if(a[j]>temp){
        a[j+1] = a[j];
      }else{
        break;
      }
     }
     a[j+1] = temp;
    }
}





int main()
{

    int a[] = {3,2,5,7,10,11};

    
    sorting s;
    s.insertionsort(a,6);

    for(int i = 0;i<6;i++){
     cout  << a[i] << " ";
    }
   




}