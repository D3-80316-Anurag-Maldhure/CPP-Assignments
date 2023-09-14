#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix validity check for multiplication
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Column count of the first matrix must be equal to the row count of the second matrix.\n");
        return 1; 
    }

    int firstMatrix[r1][c1], secondMatrix[r2][c2], resultantMatrix[r1][c2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    //Multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            resultantMatrix[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                resultantMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Display 
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", resultantMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}