# include<stdio.h> // pre-processor directive

int main() {
    printf("Hello World"); 
    // single line comment
    /*multi-line comment*/
    // new line 
    printf("hello prabha \n");
    printf("hi subha \n");
    int age = 19;
    float pi = 3.1415;
    char star = '*';
    printf("age is %d\n", age);
    printf("value of pi is %f\n", pi);
    printf("star looks like this %c\n", star);
    // input -> scanf("")
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    printf("number is : %d\n", num);
    

    int a,b;
    printf("enter a: ");
    scanf("%d", &a); 
    printf("enter b: ");
    scanf("%d", &b); 
    int sum = a+b; 
    printf("sum is %d\n", sum);

    int side;
    printf("enter the side of the square:");
    scanf("%d", &side);
    printf("The Area of the square is %d\n", side*side);

    float radius; 
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The Area of the circle is %f\n", 3.14*radius*radius);

    double radius;
    printf("Enter the radius : ");
    scanf("%")
    return 0;

}

