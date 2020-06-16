#include <stdio.h>

int main(void) {
    int feet, fathoms; // 可以使用逗号
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms); // 必须用双引号
    printf("Yes, I sad %d feet!\n", 6 * fathoms);
    return 0;
}