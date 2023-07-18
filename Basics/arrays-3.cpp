#include <bits/stdc++.h>
using namespace std;

vector<int> reverses(vector<int> v)
{

    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void merge(int arr[], int n, int brr[], int m, int c[])
{

    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = brr[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j < m)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
}

void movezeros(int a[], int s)
{
    int i = 0, j = 1;
    while (i < s && j < s)
    {
        if (a[i] == 0 && a[j] != 0)
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }
        else if(a[j]==0) j++;
        else if(a[i]!=0) i++;
    }
}


bool check(vector<int>& nums){
    int count = 0;
    int n = nums.size();
    for(int i = 1;i<nums.size();i++){
     if(nums[i-1]>nums[i]){
        count++;
     }
    }
    if(nums[n-1]>nums[0]) count++;

    return count<=1;
}


vector<int> findarraysum(vector<int>& a, int n, vector<int>&b, int m){
    int i  = n-1;
    int j = m-1;

    vector<int> ans;
    int carry = 0;

    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry  = sum/10;
        sum = sum%10;

        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
}


void rotate(vector<int>& nums, int k){
    vector<int> temp(nums.size());

    for(int i = 0;i<nums.size();i++){
     temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;
}

int main()
{
    int a[] = {2,0,1,3,0,0,0};

    movezeros(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
}