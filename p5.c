#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("ENTER TIMES");
    scanf("%d",&n);
    for(i=2*n-1;i>=1;i--)
    {
        if(i%2!=0)
            printf("\n %d",i);
    }
    getch();
}
