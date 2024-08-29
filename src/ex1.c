#include <stdio.h>

int jolly(void);
int deny(void);
int br(void);
int ic(void);
int smile(void);
int one_three(void);
int two(void);

int main(void) {
    int age;
    printf("Иван Иванов\n");
    printf("Иван\n");
    printf("Иванов\n");
    printf("Иван Иванов\n");
    printf("Александр Денисов, Великий Новгород\n");
    age = 19;
    printf("Мой возраст %d лет или %d дней.\n", age, age * 365);

    jolly();
    deny();
    br();
    printf(", ");
    ic();
    br();
    printf("\n");

    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    printf("Начинаем:\n");
    one_three();
    printf("Порядок!\n");

    

    
    
    return 0;
}

    int jolly(void) {
        printf("Он веселый молодец!\n");

    }

    int deny(void) {
        printf("Никто не может это отрицать!\n");
    }

    int br(void) {
        printf("Бразилия, Россия");
    }

    int ic(void) {
        printf("Индия, Китай\n");
    }

    int smile(void) {
        printf("Улыбайся!");
    }

    int one_three(void) {
        printf("один\n");
        two();
        printf("три\n");
    }

    int two(void) {
        printf("два\n");
    }