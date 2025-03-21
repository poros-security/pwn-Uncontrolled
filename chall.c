#include <stdio.h>
#include <stdlib.h>

char flag[] = "flag{placeholder}";

int main() {
    char input[100];

    setbuf(stdout, NULL);
    printf("Say something, anything! ");
    fgets(input, sizeof(input), stdin);

    printf("Is this what you said: \n"); 
    printf(input);   

    return 0;
}
