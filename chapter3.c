#include <stdio.h>
int main() {

//     int age ;
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     if(age < 18){
//         printf("Not an adult\n");
//     } else {
//         printf("An Adult\n");
//         printf("Eligible to Vote\n");
//         printf("Eligible to Drive\n");
//     }

//     printf("Thank You..\n");

//     int marks;
//     printf("Enter your marks: ");
//     scanf("%d" , &marks);

//     if (marks >=90 ) {
//         printf("A Grade\n");
//     }
//     else if(marks>80 && marks <90) {
//         printf("B Grade\n");
//     }
//     else if(marks >80 && marks<70) {
//         printf("C Grade\n");
//     }
//     else {
//         printf("Do Hard work\n");
//     }

//     int ages;
//     printf("Enter age: "); 
//     scanf("%d", &ages);
//     ages >=18? printf("adult\n") : printf("not adult\n");

//     int day; 
//     printf("Enter the day (1-7): ");
//     scanf("%d", &day);

//     switch(day) {
//         case 1 : printf("monday\n");
//                  break;
//         case 2 : printf("tuesday\n");
//                  break;
//         case 3 : printf("wednesday\n");
//                  break;
//         case 4 : printf("thursday\n");
//                  break;
//         case 5 : printf("friday\n");
//                  break;
//         case 6 : printf("saturday\n");
//                  break;
//         case 7 : printf("sunday\n");
//                  break;
//         default : printf("not a valid day!\n");
//         }

//         char days; 
//     printf("Enter the day: ");
//     scanf("%s", &days);

//     switch(days) {
//         case 'm' : printf("monday\n");
//                  break;
//         case 't' : printf("tuesday\n");
//                  break;
//         case 'w' : printf("wednesday\n");
//                  break;
//         case 'T' : printf("thursday\n");
//                  break;
//         case 'f' : printf("friday\n");
//                  break;
//         case 's' : printf("saturday\n");
//                  break;
//         case 'S' : printf("sunday\n");
//                  break;
//         default : printf("not a valid day!\n");
//         }
    
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if(number >=0) {
//         printf("positive\n");
//         if(number % 2==0) {
//             printf("even\n");
//         } else {
//             printf("odd\n");
//         }
//     } else {
//         printf("negative\n");
//     }


//     int mark;
//     printf("Enter the marks :");
//     scanf("%d", &mark);
//     if (mark <= 30) {
//         printf("fail\n");
//     } else if (mark > 30 && mark <=100) {
//         printf("pass\n");
//     } else {
//         printf("invalid marks\n");
//     }

//     mark <=30 ? printf("fail\n") : printf("pass\n");
    
//     int grade;
//     printf("Enter the marks: ");
//     scanf("%d", &grade);
//     if (grade < 30){
//         printf("Grade C\n");
//     } else if(grade >=30 && grade<70) {
//         printf("Grade B\n");
//     } else if(grade >=70 && grade<90){
//         printf("Grade A\n");
//     } else if(grade >=90 && grade<100) {
//         printf("Grade A+\n");
//     } else {
//         printf("invalid marks\n");
//     }


// int x =2;
// if (x = 1){
//     printf("x is equal to 1\n");
// } else {
//     printf("x is not equal to 1\n");
// }

char ch;
printf("enter character : ");
scanf("%c", &ch);

if (ch >='A' && ch <='Z'){
    printf("uppercase\n");
} else if(ch >='a' && ch <='z') {
    printf("lowercase\n");
} else {
    printf("not an english charcter\n");
}
    return 0;
}