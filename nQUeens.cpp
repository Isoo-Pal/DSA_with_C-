#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n){
    //Horizontal
    //Waise to horizontal check ka yaha koi sense nhi banta kyuki we are seeking safe place for that particular row because in the question there is only one queen can be placed in a row 
    //pr chalo logic likha rahega
    for(int j=0; j<col; j++){
        if(board[row][j] == 'Q')return false;
    }

    //Vertical
    for(int i=0; i<row; i++){
        if(board[i][col] == 'Q')return false;
    }

    //Left diagonal
    for(int i=row, j=col;i>=0 && j>=0; i--, j--){
        if(board[i][j] == 'Q')return false;
    }

    //Right diagonal
    for(int i=row, j=col;i>=0 && j<n; i--, j++){
        if(board[i][j] == 'Q')return false;
    }
    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
    if(row == n){
        ans. push_back({board});
        return;
    }
    for(int j=0; j<n; j++){
        if(isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            nQueens(board, row+1, n, ans);
            board[row][j] = '.';
        }
    }
}

int main(){
    vector<vector<string>> ans;
    int n = 4;
    vector<string> board(n, string(n,'.'));

    nQueens(board, 0, n, ans);

    for(auto &i : ans){
        for(auto &j : i){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}