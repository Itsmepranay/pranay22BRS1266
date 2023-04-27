#include<stdio.h>
#include<string.h>

struct details{
    char name[100];
    int age;
    char position[100];
    char date[100];
};

void sortbyname(int n,struct details det[]){
    struct details temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(det[i].name,det[j].name)>0){
                temp=det[i];
                det[i]=det[j];
                det[j]=temp;
            }
        }
    }
}

void sortbydate(int n,struct details det[]){
    struct details temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(det[i].date,det[j].date)>0){
                temp=det[i];
                det[i]=det[j];
                det[j]=temp;
            }
        }
    }
}

int main(){
    int n;
    printf("enter the number of employees ");
    scanf("%d",&n);
    
    struct details det[n];
    
    for(int i=0;i<n;i++){
        scanf("%s",det[i].name);
        scanf("%d",&det[i].age);
        scanf("%s",det[i].position);
        scanf("%s",det[i].date);
    }
    
    sortbydate(n,det);
    printf("sorting based on alphabetical order :");
    for(int i=0;i<n;i++){
        printf("%s\n",det[i].name);
        printf("%d\n",det[i].age);
        printf("%s\n",det[i].position);
        printf("%s\n",det[i].date);
    }
    
    sortbyname(n,det);
    printf("sorting based on date of joing :");
    for(int i=0;i<n;i++){
        printf("%s\n",det[i].name);
    }
    
    return 0;
}