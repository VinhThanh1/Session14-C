#include<stdio.h>
int main(){
	char word[100]="Xin chao toi ten la Nguyen Pham Vinh Thanh";
	int length=strlen(word);
	int count=0;
	for(int i=0;i<length;i++){
		if(word[i]==' '){
			count++;
		}
	}
	printf("Chuoi tren co %d tu",count+1);
	return 0;
}
