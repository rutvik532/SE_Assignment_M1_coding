/*6. Find the Character Is Vowel or Not */

#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter alphabet for checking vowel or consonat:");
	scanf("%c", &ch);
	
	switch(ch)
	
	{
		case 'a': printf("Enter alphabets is Vowel"); break;
		case 'A': printf("Enter alphabets is Vowel"); break;
		case 'o': printf("Enter alphabets is Vowel"); break;
		case 'O': printf("Enter alphabets is Vowel"); break;
		case 'e': printf("Enter alphabets is Vowel"); break;
		case 'E': printf("Enter alphabets is Vowel"); break;
		case 'i': printf("Enter alphabets is Vowel"); break;
		case 'I': printf("Enter alphabets is Vowel"); break;
		case 'u': printf("Enter alphabets is Vowel"); break;
		case 'U': printf("Enter alphabets is Vowel"); break;
		
	
	
	default : printf("Enter alphabets is consonant"); break;
	
	
    }
}
