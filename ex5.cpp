#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, left = 0, ones = 0, right = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    while(str[left] == '0')
        left++;

    i = left;

    while(str[i] == '1')
    {
        ones++;
        i++;
    }

    while(str[i] == '0')
    {
        right++;
        i++;
    }

    if(i != n || left != right)
        valid = 0;

    if(valid)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
