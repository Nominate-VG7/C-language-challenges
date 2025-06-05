#include <stdio.h>

void reverse(char ch[], int size);
void print(char ch[], int size);

int main()
{
    char ch[5] = "abcd"; // Include null terminator
    reverse(ch, 4); // Only reverse first 4 characters
    print(ch, 4);
    return 0;
}

void reverse(char ch[], int size){
    int i, j;
    char temp;
    for(i = 0, j = size - 1; i < j; i++, j--){
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
}

void print(char ch[], int size){
    for(int i = 0; i < size; i++){
        printf("%c", ch[i]);
    }
    printf("\n");
}
