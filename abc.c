#include<stdio.h>

int main()
{
    int a[20],b,c,n;
    printf("How many elements?");
    scanf("%d",&n);

    printf("Enter array elements:n");
    for(b=0;b<n;++b)
        scanf("%d",&a[b]);

    printf("nEnter element to search:");
    scanf("%d",&c);

    for(b=0;b<n;++b)
        if(a[b]==c)
            break;

    if(b<n)
        printf("Element found at index %d",b);
    else
        printf("Element not found");

    return 0;
}
