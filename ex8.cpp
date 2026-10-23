#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if(str[0] != 'b')
    {
        printf("Rejected\n");
        return 0;
    }

    state = 1;

    for(i = 1; i < n; i++)
    {
        if(str[i] == 'a')
            state = 2;
        else if(str[i] == 'b')
            state = 1;
        else
        {
            printf("Rejected\n");
            return 0;
        }
    }

    if(state == 2)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
