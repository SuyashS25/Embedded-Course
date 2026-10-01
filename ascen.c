#include <stdio.h>
#include <string.h>

int main() {

    char *str[5] = {"mango", "apple", "orange", "banana", "cherry"};
    char *temp;


    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {  
                temp = str[i];                 
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }


    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}