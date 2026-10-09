#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int state = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(state == 0)
        {
            if(str[i] == 'a')
                state = 1;
            else
                state = 3;
        }
        else if(state == 1)
        {
            if(str[i] == 'a')
                state = 1;
            else if(str[i] == 'b')
                state = 2;
            else
                state = 3;
        }
        else if(state == 2)
        {
            if(str[i] == 'a')
                state = 1;
            else if(str[i] == 'b')
                state = 2;
            else
                state = 3;
        }
    }

    if(state == 1)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
