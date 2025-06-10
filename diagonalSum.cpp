// There are two diagonals forms in a matrix 1.PD(Primary Diagonal left to right) 2.SD(Secondary Diag.. right to left) 
// In PD there is a pattern for diagonal elements always forms, their i and j will be equal .
// In SD their j will be equal to n-i-1
// And here else if is because in any odd elemented matrix there is a common element which will add in both diagonals so, removing this duplicacy else if is used

#include<iostream>
using namespace std;

int diagonalSum(int matrix[][3], int n){
    int sum=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(j == i){
                sum += matrix[i][j];
            }
            else if(j == n-i-1){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int matrix[4][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n =4;
    int n2=3;

    // int sum = diagonalSum(matrix, n);
    int sum = diagonalSum(mat, n2);
    cout<<"Diagonal sum : "<<sum<<endl;
}