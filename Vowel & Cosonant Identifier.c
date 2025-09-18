#include<stdio.h>

int main()
{
 char X;
 printf(" Enter a letter: ");
 scanf(" %c", &X);
 if (X=='A' || X=='E' || X=='I' || X=='O' || X=='U' || X=='a' || X=='e' || X=='i' || X=='o' || X=='u' ) {
     
     printf("You entered a Vowel");
 }
 else { 
 printf("You entered a Consonant");
 }   
    return 0;
}