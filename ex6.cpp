#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, zeros = 0, ones = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] == '0')
    {
        zeros++;
        i++;
    }

    while(str[i] == '1')
    {
        ones++;
        i++;
    }

    if(str[i] != '\0' || zeros != ones)
        valid = 0;

    if(valid)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
