/*NAME: SHANICE 
Reg no.CT101/G/26496/25
Description:Reads list of integers and writes results to file
*/


#include <stdio.h>

// Function 1: Input 10 integers and store in "input.txt"
void input_integers() {
    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening 'input.txt' for writing.\n");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
    printf("Integers saved to 'input.txt'.\n");
}

// Function 2: Read "input.txt", compute sum & average, save to "output.txt"
void process_file() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: 'input.txt' not found.\n");
        return;
    }

    int num, count = 0;
    long long sum = 0;
    while (fscanf(in, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(in);

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening 'output.txt' for writing.\n");
        return;
    }

    double avg = (count > 0) ? (double)sum / count : 0;
    fprintf(out, "Count: %d\nSum: %lld\nAverage: %.2f\n", count, sum, avg);
    fclose(out);

    printf("Results written to 'output.txt'.\n");
}

// Function 3: Display both files
void display_files() {
    FILE *fp;
    char line[256];

    printf("\n--- input.txt ---\n");
    fp = fopen("input.txt", "r");
    if (fp) {
        while (fgets(line, sizeof(line), fp)) printf("%s", line);
        fclose(fp);
    } else {
        printf("Cannot open 'input.txt'.\n");
    }

    printf("\n--- output.txt ---\n");
    fp = fopen("output.txt", "r");
    if (fp) {
        while (fgets(line, sizeof(line), fp)) printf("%s", line);
        fclose(fp);
    } else {
        printf("Cannot open 'output.txt'.\n");
    }
}

int main() {
    input_integers();
    process_file();
    display_files();
    return 0;
}
    