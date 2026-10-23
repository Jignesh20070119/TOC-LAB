#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    for(i = 0; i <= n - 3; i++)
    {
        if(str[i] == '1' &&
           str[i + 1] == '0' &&
           str[i + 2] == '1')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
