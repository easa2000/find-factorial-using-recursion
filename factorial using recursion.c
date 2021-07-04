#include<stdio.h>
void main(){
    int num,i,res=1;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num==0){
            res*=1;
        }else{
            res*=i;
        }
    }
    printf("\n the factorial of %d = %d",num,res);
}
