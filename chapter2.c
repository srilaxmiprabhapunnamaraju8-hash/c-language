#include<stdio.h>
#include<math.h>
int main() {
    // int a =10;
    // int b =a;
    // int c= b *6;
    // int d = 1,e; 

    // int a,b,c;
    // a=b=c=20;

    // int p =1, q = 10;
    // int sum = a + b;
    // int multiply = a * b;
    // pow(x,y) for x to the power y
    int b,c;
    b =c= 1;
    int a = b+c;
    int power = pow(a,b);
    printf("%d\n", power);
    printf("%d\n", 16%10);
    printf("%d\n", -16%10);
    printf("%f\n", 10.01 + 90);
    printf("%f\n", 10 / 20);
    printf("%f\n", 10.0 / 9.0);

    int n = 1.9999999;
    printf("%d \n",n);

    int x = 4 * 3 / 6 * 2;
    printf("%d\n", x);

    int s = 5 * 2 - 2 * 3;
    printf("%d\n", s);

    int t = 5 * 2 / 2 * 3;
    printf("%d\n", t);

    int u  = 5 * (2/2) * 3;
    printf("%d\n", u);

    int v = 5 + 2 / 2 * 3;
    printf("%d\n", v);

    printf("%d \n", 4==4);
    printf("%d \n", 4>=9);
    printf("%d \n", 4<=9);
    printf("%d \n", 14>9);
    printf("%d \n", 4<9);
    printf("%d \n", 4!=9);

    printf("%d \n", (4<3)&&(4>9));
    printf("%d \n", (4>3)||(4>9));
    printf("%d \n", !(4>9));
    printf("%d \n", !((5>1) && (3>4)));

    int df = 1;
    int fg = 4;
    df = df+fg; // a = a+b - > a+=b
    printf("%d \n", df);

    // int num1;
    // printf("enter a number : ");
    // scanf("%d", &num1);
    // printf("%d \n", num1 % 2 ==0);

    printf("%d \n", 7^7);

    int isSunday = 0;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    int isMonday = 1;
    int isRaining = 0;
    printf("%d \n", isMonday || isRaining);

    int num_a;
    printf("enter a number: ");
    scanf("%d", &num_a);
    printf("%d \n", x>9 && x<100);

    return 0;
}