#include<stdio.h>
#include<string.h>
int main(){
	int cases;
	char word[101];
	scanf("%d",&cases);

	for(int i=1;i<=cases;i++){
		scanf("%s",word);
		if(strlen(word)<=10){
			printf("%s\n",word);
		}else{
	
		int l=strlen(word)-1;
		printf("%c",word[0]);
		printf("%d",strlen(word)-2);
		printf("%c",word[l]);
		printf("\n");
		
		}
		
	}
	
	return 0;
	
}
