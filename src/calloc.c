#include <stdio.h>

int main(int argc, const char * argv[]) {

    int rows=2;
    int columns=2;
    int **matrix = (int**)malloc(rows*sizeof(int*));

    matrix[0]=(int*)malloc(rows*columns*sizeof(int));
    for(int i=0; i<rows; i++){
        matrix[i]=matrix[0] + i*columns;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("matrix[%d][%d]=%p\n", i, j, &matrix[i][j]);
        }
    }

}
