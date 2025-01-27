#include <stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    switch (grade){
        case 'A':printf("Excellent");
        case 'B':printf("Good");
        case 'C':printf("Average");
        case 'D':printf("Below Average");
        case 'F':printf("Fail");
    }
    return 0;
}