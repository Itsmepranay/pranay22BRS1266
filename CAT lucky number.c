#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    while(num>0){
        int m=num%10;
        sum=sum+m;
        num=num/10;
    }
    
    int sum2=0;
    if(sum>9){
        while(sum>0){
            int x=sum%10;
            sum2=sum2+x;
            sum=sum/10;
        }
    }else{
        sum2=sum;
    }
    
    int sum3=0;
    if(sum2>9){
        while(sum2>0){
            int y=sum2%10;
            sum3=sum3+y;
            sum2=sum2/10;
        }
    }else{
        sum3=sum2;
    }
    
    if(sum3%2==0){
        printf("Even found");
    }else{
        printf("Odd found");
    }
    return 0;
}