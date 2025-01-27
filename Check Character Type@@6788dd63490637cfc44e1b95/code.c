#include <stdio.h>
int main(){
    char ch;
    int digit;
    scanf("%c %d",&ch,&digit);
    if (digit>=48 && digit<=56){printf("Digit");}
    else if(ch>97 && ch<=122 || ch!=101 || ch!= 111 || ch!=117 || ch!=105){printf("Consonant");}
    else if (ch>65 && ch<=Z || ch!=69 || ch!=73 || ch!=79 || ch!=85){printf("Consonant");}
    else if(ch==97||ch==105||ch==111||ch==117 ||ch==101||ch==65||ch==69||ch==73||ch==79||ch==85){printf("Vowel");}
    else if(ch>=35 || ch<=38 || ch==64){printf("Special Character");}
    return 0;
  }