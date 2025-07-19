#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
    //Horizontal
    for(int j=0; j<9; j++){
        if(board[row][j] == dig)return false;
    }

    //Vertical
    for(int i=0; i<9; i++){
        if(board[i][col] == dig)return false;
    }

    //Grid check
    int srow = (row/3) * 3;
    int scol = (col/3) * 3;

    for(int i=srow; i<=srow+2; i++){
        for(int j=scol; j<=scol+2; j++){
            if(board[i][j] == dig)return false;
        }
    }
    return true;
}

bool solveSudoku(vector<vector<char>>& board, int row, int col){
    if(row == 9)return true;

    int nextRow = row; 
    int nextCol = col+1;
    if(nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }

    if(board[row][col] != '.'){
        return solveSudoku(board, nextRow, nextCol);
    } 

    for(char dig='1'; dig<='9'; dig++){
        if(isSafe(board, row, col, dig)){
            board[row][col] = dig;
            if(solveSudoku(board, row, col)){return true;}
        }                                
        board[row][col] = '.';
    }
    return false;
}

int main(){
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}};
    if(solveSudoku(board, 0, 0)){
        for(auto &i : board){
        for(auto &j : i){
            cout<<j<<' ';
        }
        cout<<endl;
        }
    }
    else{
        cout<<"Solution does not exist."<<endl;
    }

    
}