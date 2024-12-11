#include <stdio.h>
int main() {
    char str[] = "Hello world"; 
    int count = 0;
    for (int i = 0;  i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    printf("So luong ky tu la chu cai: %d\n", count);
    return 0;
}
