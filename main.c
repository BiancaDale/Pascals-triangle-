#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int **pnumbers;

    pnumbers = (int **) malloc(7  *sizeof(int *));
	
    pnumbers[0] = (int *) malloc(1 * sizeof(int));
    pnumbers[1] = (int *) malloc(2 * sizeof(int));
    pnumbers[2] = (int *) malloc(3 * sizeof(int));
    pnumbers[3] = (int *) malloc(4 * sizeof(int));
    pnumbers[4] = (int *) malloc(5 * sizeof(int));
    pnumbers[5] = (int *) malloc(6 * sizeof(int));
    pnumbers[6] = (int *) malloc(7 * sizeof(int));

    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;
    pnumbers[3][0] = 1;
    pnumbers[3][1] = 3;
    pnumbers[3][2] = 3;
    pnumbers[3][3] = 1;
    pnumbers[4][0] = 1;
    pnumbers[4][1] = 4;
    pnumbers[4][2] = 6;
    pnumbers[4][3] = 4;
    pnumbers[4][4] = 1;
    pnumbers[5][0] = 1;
    pnumbers[5][1] = 5;
    pnumbers[5][2] = 10;
    pnumbers[5][3] = 10;
    pnumbers[5][4] = 5;
    pnumbers[5][5] = 1;
    pnumbers[6][0] = 1;
    pnumbers[6][1] = 6;
    pnumbers[6][2] = 15;
    pnumbers[6][3] = 20;
    pnumbers[6][4] = 15;
    pnumbers[6][5] = 6;
    pnumbers[6][6] = 1;

    for (i = 0; i < 7; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 6; i++) {
        free(pnumbers[i]);
    }

    free(pnumbers);

  return 0;
}
