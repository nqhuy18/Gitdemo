#include <stdio.h>

void change_color() {
    printf("Changing color to blue!\n");
}
void add(int a, int b) {
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}

void change_by_dev2() {
    printf("Function added by dev2 to change color to red!\n");
}

void change_by_dev3() {
    printf("Function added by dev3 to change color to green!\n");
}

void change_by_dev4() {
    printf("Function added by dev4 to change color to yellow!\n");
}   
int main() {
    printf("Hello, World!\n");
    change_color();
    add(5, 3);
    change_by_dev2();
    return 0;
}