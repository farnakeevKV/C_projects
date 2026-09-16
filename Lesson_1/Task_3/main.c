#include <stdio.h>
#include <locale.h>

int input_int( char *prompt)
{
    int value;

    printf("%s", prompt);
    while (scanf("%d", &value) != 1)
    {
        printf("Ошибка ввода. Введите целое число: ");
        while (getchar() != '\n')
        {
        }
    }

    return value;
}

int main(int argc, char *argv)
{
    int number1;
    char *locale = setlocale(LC_ALL, "");

    (void)argc;
    (void)argv;
    (void)locale;

    number1 = input_int("Введите число 1: ");
    printf("Вы ввели число: %d\n", number1);

    return 0;
}