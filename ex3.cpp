#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if(n < 2)
        valid = 0;
    else if(str[0] != '0' || str[n - 1] != '1')
        valid = 0;

    for(i = 0; i < n; i++)
    {
        if(str[i] != '0' && str[i] != '1')
            valid = 0;
    }

    if(valid)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
