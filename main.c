#include <stdio.h>

void change_color() {
    printf("Changing color to blue!\n");
}

void change_by_dev2() {
    printf("Function added by dev2 to change color to red!\n");
}

int main() {
    printf("Hello, World!\n");
    change_color();
    change_by_dev2();
    return 0;
}