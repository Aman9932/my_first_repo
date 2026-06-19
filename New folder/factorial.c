#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        a=a*i;
    }
    printf("%d",a);
    return 0;
}