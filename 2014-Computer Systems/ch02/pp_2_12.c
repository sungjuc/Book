#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 0x87654321;
    printf("0x%x\n", x);
    int result = x & 0xFF;
    printf("0x%x\n", result);
    result = ~x ^ 0xFF;
    printf("0x%x\n", result);
    result = x | 0xFF;
    printf("0x%x\n", result);
}
