
// 1. Write C program to count frequency of each character in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int freq[124] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    for (int i = 0; i < 124; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}

____________________________________________________________________________________________
// 2. Write C program to check whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }

    printf("%s is a palindrome\n", str);

    return 0;
}
__________________________________________________________________________________________________________________
// 3. Write C program to remove spaces, blanks from a string.

#include <stdio.h>
int main()
{
    int i, len = 0, j;
    char str[] = "r a m ";
    len = sizeof(str) / sizeof(str[0]);
    // printf("%d",&len);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
    printf(" removing all  white spaces:%s", str);
    return 0;
}
______________________________________________________________________________________________________________
// 4. Write C program to remove all repeated characters in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i]] == 1)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
___________________________________________________________________________________________________________\
