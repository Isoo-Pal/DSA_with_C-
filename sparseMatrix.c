#include<stdio.h>
int main(){
    int sparseMatrix[4][5] = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };
    int size = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(sparseMatrix[i][j] != 0){
                size++;
            }
        }
    }
    //comapact matrix has size number of columns to save the non-zero values
    int compactMatrix[3][size];
    int k=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(sparseMatrix[i][j] != 0){
                compactMatrix[0][k] = i;  //row
                compactMatrix[1][k] = j;  //col
                compactMatrix[2][k] = sparseMatrix[i][j];    //val

                k++;
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<size; j++){
            printf("%d ", compactMatrix[i][j]);
        }
        printf("\n");
    }
}