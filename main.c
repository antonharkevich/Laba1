#include <stdio.h>

int main(){
    printf("Natural values: ");
    for(int i=1;i<1000;i++){
        if(i%10==1||i%10==5||i%10==6||i%10==0){
            int b=i*i;
            if(b>10000){
                if(i==b%1000){
                   printf("%d ",i);
                }
            }
            else if(b>100){
                if(i==b%100){
                    printf("%d ",i);
                }
            }
            else {
                if(i==b%10){
                     printf("%d ",i);
                }
            }
        }
    }
    return 0;
}
