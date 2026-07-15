
#include <stdio.h>

int mazePath(int sr, int sc, int er, int ec) {
    // Base case
    if (sr == er && sc == ec)
        return 1;

    // Out of bounds
    if (sr > er || sc > ec)
        return 0;

    // Move down and right
    int downPaths = mazePath(sr + 1, sc, er, ec);
    int rightPaths = mazePath(sr, sc + 1, er, ec);

    return downPaths + rightPaths;
}

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int totalPaths = mazePath(1, 1, rows, cols);

    printf("Total number of paths = %d\n", totalPaths);

    return 0;
}
