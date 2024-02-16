#include <stdio.h>
int prime(int a)
{
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
        if (a % i != 0)
            continue;
    }
    if (i == a)
        return 1;
}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    int array1[10000], array2[10000];
    for (int i = 0; i <= num / 2; i++)
    {
        array1[i] = i;
    }
    int i = 0;
    for (int j = num; j >= num / 2; j--)
    {
        array2[i] = j;
        i++;
    }
    int k,l=0;
    for (k = 0; k <= num / 2; k++)
    {
        if (prime(array1[k]) == 1 && prime(array2[k]) == 1)
            {printf("%d %d\n", array1[k], array2[k]);
            l++;}
        else
            continue;
    }
    if (k == (num / 2 + 1) && l==0)
        printf("there is no suitable pair");
}
