//check vowels or consonants using switch statement
#include<stdio.h>
void main()
{
    char vowels;
    printf("Enter char to check vowels and consonants:");
    scanf("%c",&vowels);
     switch (vowels)
    {
    case 'a':
    case 'A':
        printf("this is a vowel:%c ",vowels);
        break;
    case 'e':
    case 'E':
        printf("this is a vowel:%c ",vowels);
        break;
    case 'i':
    case 'I':
        printf("this is a vowel:%c ",vowels);
        break; 
    case 'o':
    case 'O':
        printf("this is a vowel:%c ",vowels);
        break; 
    case 'u':
    case 'U':
        printf("this is a vowel:%c ",vowels);
        break;    

    default:
         printf("This is consonants");
        break;
    }
}