#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i=0,j=matrix[0].size()-1;
    while(i<matrix.size()&&j>=0){
        if(matrix[i][j]==target)return true;
        else if(matrix[i][j]>target)j--;
        else i++;
    }
    return false;
}

int main(){
    vector<vector<int>> mat{{5},{6}};
    cout<<searchMatrix(mat,6);
    return 0;
}
