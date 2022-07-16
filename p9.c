#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("ENTER TIMES");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("\n %d",i*i*i);
    getch();
}
