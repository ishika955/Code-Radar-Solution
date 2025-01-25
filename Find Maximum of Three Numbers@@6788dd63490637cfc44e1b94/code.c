#include <stdio.h>
int main(){
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if (n1>n2 && n1>n3){
        printf(n1);
    }
    else if(n2>n1 && n2>n3){
        printf(n2);
    }
    else{
        printf(n3);
}
 return0;
}