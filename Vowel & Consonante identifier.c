#include<stdio.h>
int main() {
char letter;
int flag = 0;
printf("Enter a letter: ");
scanf(" %c", &letter);

switch (letter) {
case'A':
    flag = 1;
    break;
case'E':
    flag = 1;
     break;
case'I':
    flag = 1;
     break;
case'O':
    flag = 1;
     break;
case'U':
    flag = 1;
     break;
case'a':
    flag = 1;
     break;
case'e':
    flag = 1;
     break;
case'i':
    flag = 1;
     break;
case'o':
    flag = 1;
     break;
case'u':
    flag = 1;
     break;

}
if (flag == 1) {
 printf(" %c is a Vowel.", letter);
}
else{
 printf(" %c is a Consonante.", letter);
}
return 0;
}
