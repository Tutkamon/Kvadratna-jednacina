#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x;
    printf("Unesite koeficijent a: ");
    scanf("%f",&a);
    printf("Unesite koeficijent b: ");
    scanf("%f",&b);
    printf("Unesite slobodni clan: ");
    scanf("%f",&c);
    if(a==0.0)
    {
        if(b==0.0)
            printf("Resenje je neodredjeno.\n");
        else
        {
            x=-c/b;
            printf("x = %6.2f.\n",x);
        }
    }
    else
    {
        if(b*b-4*a*c>0.0)
        {
            x=(-b+sqrt(b*b-4*a*c))/(2*a);
            printf("x = %.2f",x);
            x=(-b-sqrt(b*b-4*a*c))/(2*a);
            printf(" ili x = %.2f.\n",x);
        }
        else if(b*b-4*a*c==0.0)
        {
            x=-b/(2*a);
            printf("x = %.2f.\n",x);
        }
        else
        {
            float xR,xI;
            xR=-b/(2*a);
            xI=sqrt(4*a*c-b*b)/(2*a);
            if(b!=0.0)
                printf("x = %.2f + %.2f*i ili x = %.2f - %.2f*i.\n",xR,xI,xR,xI);
            else
            printf("x = %.2f*i ili x = -%.2f*i.\n",xI,xI);
        }
    }
    getchar();getchar();
    return 0;
}
