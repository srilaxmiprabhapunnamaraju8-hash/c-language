#include <stdio.h>
// declaration or prototype
void printHello();
void printGoodBye();
void bonjour();
void namasthe();
int sum(int a, int b);
void printTable(int n);
int main () {
    printHello();  // function call
    printGoodBye();
    printf("enter f/F for french & i/I for indian:");
    char ch;
    scanf("%c", &ch);
    if(ch=='f'){
        bonjour();
    } else {
        namasthe();
    } 
    int a,b;
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("sum is : %d\n",s);

    int n;
    printf("Enter a number to print the table: ");
    scanf("%d", &n);

    printTable(n); //argument or actual parameter

    return 0;
}
// function definition
void printHello(){
    printf("Hello world!\n");
}
void printGoodBye() {
    printf("Good Bye!\n");
}

void bonjour() {
    printf("Bonjour\n");
}
void namasthe() {
    printf("Indian\n");
}
int sum(int a, int b){
    return a + b;
}

void printTable(int n) { // formal parameter or parameter
    for (int i =1; i<=10; i++){
        printf("%d\n", i*n);
    }
}