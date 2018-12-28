#include <stdio.h>
int main(){
    int i,n,kth,a=0;
    scanf("%d %d",&n,&kth);
    int score[n];
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    int min=score[kth-1];
    for(i=0;i<n;i++){
        if(score[i]<min){
            break;
        }else if(score[i]>0){
            ++a;
        }
    }
    printf("%d\n",a);
    return 0;
}
