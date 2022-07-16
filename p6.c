#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter times");
    scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    {
        if(i%2==0)
        printf("\n %d",i);
    }
    getch();
}
