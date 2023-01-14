#include <stdio.h>
int fibonacci(int num)
{
    int arr[num + 2];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= num; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[num];
}

int main()
{
    int num;
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}

