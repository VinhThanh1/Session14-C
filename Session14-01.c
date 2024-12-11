#include <stdio.h>
int main(){
	char word[100];
	printf("Nhap vao mot chuoi: ");
	fgets(word, sizeof(word), stdin);
	
	word[strcspn(word, "\n")] = '\0';
	int length = strlen(word);
	printf("Chuoi ban vua nhap la: %s\n", word);
	printf("Do dai chuoi la: %d\n", length);
	
	return 0;
}
