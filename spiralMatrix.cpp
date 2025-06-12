#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>& matrix){
    int m=matrix.size(), n=matrix[0].size();

    vector<int> ans;
    int stRow = 0;
    int stCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    while(..){
        //top
        for(int idx = stCol; idx <= endCol; idx++){
            ans.push_back(matrix[stRow][idx]);
        }

        //right
        for(int idx = stRow+1; idx <= endRow; idx++){
            ans.push_back(matrix[idx][endCol]);
        }

        //bottom
        for(int idx = endCol-1; idx >= stCol; idx--){
            ans.push_back(matrix[endRow][idx]);
        }

        //left
        for(int idx = endRow-1; idx >= stRow; idx--){
            ans.push_back(matrix[idx][stCol]);
        }
        stRow++, stCol++, endRow--, endCol--;
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> ans = spiralMatrix(matrix);

    for(int i:ans){
        cout<<i<<" ";
    }
}