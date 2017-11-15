#include<stdio.h>
int main(){
    int i,j,temp,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int d=1;
    while(d<n){
        temp=a[d];
        j=d-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
        d=d+1;
    }
    d=1;
    while(a[d-1]==d){
        d=d+1;
    }
    printf("%d\n",d);
    return 0;
}
