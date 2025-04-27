#include <stdio.h>

main() {
    char name[8] = "Quan";
    int val = 10;

    printf("Hi %s, val=%d", name, val);

    fprintf(stderr, "Hi %s, val=%d", name, val);

    char str[24];
    sprintf(str, "Hi %s, val=%d", name, val);
}
