#include <bits/stdc++.h>
using namespace std;


void swapalternate(int arr[], int size){
    for(int i = 0;i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}


int findunique(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
       ans = ans ^ arr[i];
    }
    return ans;
}


 bool uniqueOccurrences(vector<int>& arr) 
    {
        vector <int> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0; i<arr.size(); )
        {
            int count = 1;
            for(int j = i+1; j<arr.size(); j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                }
            }
            ans.push_back(count); 
            i+=count;
        }
        sort(ans.begin(), ans.end());
        for(int i = 0;i<ans.size()-1; i++)
        {
            if(ans[i]==ans[i+1])    
            return false;
        }
        return true;
    }


int findduplicate(vector<int> &arr){
    int ans = 0;
    for(int i =0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    for(int i = 1;i<arr.size();i++){
        ans = ans ^ i;
    }
    return ans;
}


vector<int> findarrayintersection(vector<int> &arr1, int n,vector<int> &arr2){
    vector<int> ans;
     for(int i=0;i<n;i++){
        int element = arr1[i];

        for(int j=0;j<n;j++){
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
     }
     return ans;
}


vector<vector<int>> parisum(vector<int> &arr,int s){
    vector<vector<int>> ans;

    for(int i=0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i]+arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    

}