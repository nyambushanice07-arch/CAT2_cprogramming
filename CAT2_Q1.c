/*
NAME SHANICE 
Registration no CT101/G/26496/25
*/



// data type: int
// array name: scores
// rows: 2
// columns: 4 (since there are 4 values in each row)

int scores[2][4] = {
    {65, 92, 35, 70}, // Row 0
    {84, 72, 59, 67}  // Row 1
};





#include <stdio.h>

int main() {
    // Create a 2D array called 'scores' with 2 rows and 4 columns
    int scores[2][4] = {
        {65, 92, 35, 70},  // Row 0
        {84, 72, 59, 67}   // Row 1
    };

    int i, j;  // Variables to control the loops

    printf("Elements of the 2D array 'scores':\n");

    // Go through each row
    for (i = 0; i < 2; i++) {
        // Go through each column in the current row
        for (j = 0; j < 4; j++) {
            // Print the element at position [i][j]
            printf("%d\t", scores[i][j]);
        }
        // Move to the next line after printing one row
        printf("\n");
    }

    return 0;
}



