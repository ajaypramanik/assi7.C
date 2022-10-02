#include<stdio.h>

int main() {

    int r,i=1,sum,x;
    printf("the amastrong num is:");

    while(i<=500)
    {
        x=i;
        sum=0;
        while(x) 
        {
            r=x%10;
            sum=sum+(r*r*r);
            x=x/10;

        }
        if(i==x)
        {
            printf("%d",i);
        }
    }
    return 0;
}
