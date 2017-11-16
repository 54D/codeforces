#include<stdio.h>
int main(){
    char input[101];
    int i,endindex=0,H=0,E=0,L=0,O=0,manage=0;
    scanf(" %s",input);
    while(input[endindex]!='\0'){
        endindex=endindex+1;
    }
    for(i=0;i<endindex+1;i++){
        if(H<1){
            if(input[i]=='h'){
                H=H+1;
            }
        }else{
            if(E<1){
                if(input[i]=='e'){
                    E=E+1;
                }
            }else{
                if(L<2){
                    if(input[i]=='l'){
                        L=L+1;
                    }
                }else{
                    if(O<1){
                        if(input[i]=='o'){
                            O=O+1;
                        }
                    }else{
                        manage=1;
                        break;
                    }
                }
            }
        }
    }
    if(manage==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
