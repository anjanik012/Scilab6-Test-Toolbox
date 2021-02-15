#include<stdio.h>
#include<stdlib.h>

int **trans(int **, int, int);

void print(int **mat, int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// @params 
// m = row
// n = column
// mat = dynamically loaded matrix
int main() {
    int **mat;
    int m, n;
    scanf("%d %d", &m, &n);
    mat = malloc(m*sizeof(int*));
    int i, j;
    for(i = 0; i < n; i++) {
        mat[i] = malloc(n*sizeof(int));
    }
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int **ret = trans(mat, m, n);
    print(ret, n, m);
    return 0;
}