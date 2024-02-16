#include <stdio.h>
int fact(int a)
{
    if (a == 0)
        return 1;
    int b;
    b = a * fact(a - 1);
    return b;
}
int main()
{
    int array[10], original, a, sum = 0, digit;
    printf("enter the number\n");
    scanf("%d", &a);
    original = a;
    for (int i = 0;; i++)
    {
        if (a == 0)
            break;
        array[i] = a % 10;
        a = a / 10;
        digit++;
    }
    for (int i = 0; i < digit; i++)
    {
        sum += fact(array[i]);
    }
    if (sum == original)
        printf("the number you entered is a strong number");
    else
        printf("the number you entered is not a strong number");
}
