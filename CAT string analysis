#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c,d,e;
    a=0;
    b=0;
    c=0;
    d=1; 
    e=0;
    char ua[26]={"abcdefghijklmnopqrstuvwxyz"};
    char la[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char dig[10]={"0123456789"};
    char s[100]; 
    fgets(s, 100, stdin);
    for (int i=0;i<strlen(s);i++){
        for(int j=0;j<26;j++){
            if (s[i]==ua[j]){
                a=a+1;
            }
        }
    }

    for (int i=0;i<strlen(s);i++){
        for(int j=0;j<26;j++){
            if (s[i]==la[j]){
                b=b+1;
            }
        }
    }

    for (int i=0;i<strlen(s);i++){
        for(int j=0;j<10;j++){
            if (s[i]==dig[j]){
                c=c+1;
            }
        }
    }

    for (int i=0;i<strlen(s);i++){
        if (s[i]==' '){
            d=d+1;
        }
    }
    char spe[]={ '&','.','*','+','-'}; 
    for (int i=0;i<strlen(s);i++){
        for(int j=0;j<5;j++){
            if (s[i]==spe[j]){
                e=e+1;
            }
        }
    }

printf("%d\n %d\n %d\n %d\n %d\n",a,b,c,d,e);

    return 0;
}
