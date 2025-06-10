#include<iostream>
#include<climits>
using namespace std;

pair<int,int>linearSearch(int matrix[][3], int rows,int col, int key){
    for(int i=0; i<rows;i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j] == key){
                return {i,j};
            }
            
        }
    }
    return {-1,-1};
}

int maximumRowSum(int matrix[][3], int rows,int col){
    int maxi = INT_MIN;

    for(int i=0; i<rows;i++){
        int sum = 0;
        for(int j=0; j<col;j++){
            sum += matrix[i][j];
        }
        maxi = max(sum, maxi);
    }
    return maxi;
}


int maximumColSum(int matrix[][3], int rows,int col){
    int maxi = INT_MIN;

    for(int i=0; i<col;i++){
        int sum = 0;
        for(int j=0; j<rows;j++){
            sum += matrix[j][i];
        }
        maxi = max(sum, maxi);
    }
    return maxi;
}


int main(){

    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 4;
    int col = 3;
    int key;

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<col; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter key"<<endl;
    cin>>key;

    pair<int,int> p = linearSearch(matrix, rows,col,key);

    cout<<"Row No. : "<<p.first<<endl;
    cout<<"Col No. : "<<p.second<<endl;

    int maxRSum = maximumRowSum(matrix, rows,col);
    cout<<"Maximum row sum : "<<maxRSum<<endl;

    int maxCSum = maximumColSum(matrix, rows,col);
    cout<<"Maximum row sum : "<<maxCSum<<endl;
}