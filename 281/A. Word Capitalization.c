#include<stdio.h>
int main(){
    char msg[10001];
    scanf("%s",msg);
    if(msg[0]>96&&msg[0]<123){
        msg[0]=msg[0]-32;
    }
    printf("%s",msg);
    return 0;
}
