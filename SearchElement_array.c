#include<stdio.h>
int main()
{
    int n,i,ser;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
        if(ser==a[i])
            printf("%d is the position where we found the element %d",i+1,ser);
    }
    return 0;
}
