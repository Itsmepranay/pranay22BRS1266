#include<stdio.h>

int main(){
    int acute=0;
    int right=0;
    int obtuse=0;
    int wrong=0;
    for(int i=0;i<5;i++){
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        int sum=a+b+c;
        
        if(sum==180){
            if(a<90 && b<90 && c<90){
                acute=acute+1;
            }else if(a==90 || b==9 || c==90){
                right=right+1;
            }else{
                obtuse=obtuse+1;
            }
        }else{
            wrong=wrong+1;
            printf("Wrong Entry try again\n");
            i--;
        }
    }
    printf("Acute Angled Triangle: %d\n",acute);
    printf("Right Angled Triangle: %d\n",right);
    printf("Obtuse Angled Triangle: %d\n",obtuse);
    printf("Wrong Entries: %d\n",wrong);
    return 0;
}

