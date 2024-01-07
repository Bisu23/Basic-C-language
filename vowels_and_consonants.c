//Program to check if a given character is a vowel or consonant using switch statement:
# include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
switch(ch)
{
case 'a':
printf("The character %c is vowel.",ch);
break;
case 'e':
printf("The character %c is vowel.",ch);
break;
case 'i':
printf("The character %c is vowel.",ch);
break;
case 'o':
printf("The character %c is vowel.",ch);
break;
case 'u':
printf("The character %c is vowel.",ch);
break;
case 'A':
printf("The character %c is vowel.",ch);
break;
case 'E':
printf("The character %c is vowel.",ch);
break;
case 'I':
printf("The character %c is vowel.",ch);
break;
case 'O':
printf("The character %c is vowel.",ch);
break;
case 'U':
printf("The character %c is vowel.",ch);
break;
default:
printf("%c is a consonant.", ch);
break;
}
return 0;
}
