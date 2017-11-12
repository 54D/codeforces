#include<stdio.h>
typedef struct input{
    int num;
    int index;
}input;
int main(){
    int i,n,epoint=0,opoint=0;
    scanf("%d",&n);
    input numbers[n],even[n-1],odd[n-1];
    for(i=0;i<n;i++){
        scanf("%d",&numbers[i].num);
        numbers[i].index=i;
    }
    for(i=0;i<n;i++){
        if(numbers[i].num%2==0){
            even[epoint].num=numbers[i].num;
            even[epoint].index=numbers[i].index;
            epoint++;
        }else{
            odd[opoint].num=numbers[i].num;
            odd[opoint].index=numbers[i].index;
            opoint++;
        }
    }
    if(opoint>epoint){
        printf("%d",even[0].index+1);
    }else{
        printf("%d",odd[0].index+1);
    }
    return 0;
}
