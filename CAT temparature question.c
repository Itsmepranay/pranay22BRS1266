#include<stdio.h>

int main(){
    int chennai[7];
    
    for(int i=0;i<7;i++){
        scanf("%d",&chennai[i]);
    }
    
    int delhi[7];
    int Haveri[7];
    
    for(int i=0;i<7;i++){
        delhi[i]=chennai[i]-8;
        Haveri[i]=chennai[i]+5;
    }
    
    int gangtok[7];
    
    for(int i=0;i<7;i++){
        gangtok[i]=Haveri[i]-delhi[i];
        printf("%d\n",gangtok[i]);
    }
    
    return 0;
}