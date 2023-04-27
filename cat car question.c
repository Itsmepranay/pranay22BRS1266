#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a,b;
    char c[100];
    int d;
    scanf("%s",c);
    scanf("%d %d",&a,&b);
    if (c=="hatch back"){
        d=3;
    }
    else if (c=="seden"){
        d=5;
    }
    else if (c=="seden"){
        d=5;
    }
    else if (c=="sev"){
        d=10;
    }
    else if (c=="muv"){
        d=15;
    }
    int total=a+b;
    int dis=total*(d/100);
    int gst =(total-dis)*0.12;
    int net=(total-dis +gst);
    printf("%d",net);
}