#include<stdio.h>
int main(){
    int mismatch=0,i,j;
    char a[101],b[101];
    scanf(" %s",a);
    scanf(" %s",b);
    i=j=0;
    while(b[j]!='\0'){
        j=j+1;
    }
    j=j-1;
    while(mismatch==0&&j>-1){
        if(a[i]==b[j]){
            i=i+1;
            j=j-1;
        }else{
            mismatch=1;
        }
    }
    if(mismatch==1){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}
