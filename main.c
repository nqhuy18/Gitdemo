#include <stdio.h>

void change_color() {
    printf("Changing color to blue!\n");
}
void add(int a, int b) {
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}

int main() {
    printf("Hello, World!\n");
    change_color();
    add(5, 3);
    return 0;
}