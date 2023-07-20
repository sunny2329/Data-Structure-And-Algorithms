#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int r, int c)
{
    vector<int> ans;
    for (int i = 0; i < c; i++)
    {
        if (i & 1)
        {
            for (int j = r - 1; j >= 0; j--)
            {
                // cout << arr[j][i] << " ";
                ans.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < r; j++)
            {
                // cout << arr[j][i] << " ";
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

vector<int> spiral(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;


    int str = 0;
    int stcol = 0;
    int endr = row - 1;
    int endc = col - 1;
    while (count < total)
    {
        for(int i = stcol;count < total && i<=endc;i++){
         ans.push_back(matrix[str][i]);
         count++;
        }
        str++;
        for(int i = str; count < total && i<=endr;i++){
         ans.push_back(matrix[i][endc]);
         count++;
        }
        endc--;
        for(int i = endc; count < total && i>=stcol;i--){
         ans.push_back(matrix[endr][i]);
         count++;
        }
        endr--;
        for(int i = endr;count < total && i>=str;i--){
         ans.push_back(matrix[i][stcol]);
         count++;
        }
        stcol++;


    }
}




bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end  = row*col-1;
        
        int mid = start + (end-start)/2;
        
        while(start<=end) {
            
            int element = matrix[mid/col][mid%col];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target) {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
             mid = start + (end-start)/2;    
        }
        return 0;
    }




  bool searchMatrix1(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex>=0 ) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }

int main()
{
    int a[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
}
