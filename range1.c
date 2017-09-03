#include<stdio.h>
int getnum();    

int main() {

    int input = 0;
        input = getnum();
    
    while (!((input <= 100) && (input >= 1))) {
        printf("[ERROR] The num you entered is out of range");
        
        input = getnum();
    }
    printf("
    The num you entered is %d", input);
    return 0;
}      
int getnum() {    
    int num; 
printf(" Enter a num between 1 to 100");
    
    scanf("%d", &num);
    return (num);
}

