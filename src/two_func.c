#include <stdio.h>
void butler(void);

int main(void) {
    printf("Я вызываю двореццкого. \n");
    butler();
    printf("Да. Принесите мне чай и записываемые DVD-диски. \n");
    return 0;
}

void butler(void) { printf("Вы звонили, сэр?\n"); }