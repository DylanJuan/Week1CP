#include <stdio.h>

int main()
{
 char str[101];
 
 char word[] = {'a', 'e', 'i', 'o', 'u','y'};
 
 while(gets(str))
 {
 	for(int i = 0; str[i]!='\0'; i++)
 		{
 		int count = 0;
 	if(str[i] >= 65 && str[i] <= 90){
 	str[i] += 32;
 }
 	for(int j = 0; j < 6; j++){
 	if(str[i] == word[j]) count = 1;
 }
 	if(!count){
 	printf(".%c", str[i]);
 	}
 }
 	printf("\n");
 }
 return 0;
}
