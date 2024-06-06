#include <stdio.h>
#include <string.h>

int main()
{
    char response[100];
    printf("What's your name?\n");
    fgets(response, sizeof(response), stdin);
    printf("Hello, %s", response);
    return 0;
}