#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], x[10][10], r, c;

    printf("Enter rows and col: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            x[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of matrix:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
