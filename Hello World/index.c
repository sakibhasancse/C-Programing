#include <stdio.h>

/* function declaration */
// int addition(int *num1, int *num2);

int main()
{
    int answer;
    int num1 = 10;
    int num2 = 5;

    answer = num1 + num2;

    printf(answer);

    return 0;
}

/* function returning the addition of two numbers */
// int addition(int *a, int *b)
// {
//     return *a + *b;
// }