#include <stdio.h>

void num_ret(char *s);

int main(void)
{
    char s[] = "Example";

    num_ret(&s);

    return 0;
}

void num_ret(char *s)
{
    int i;

    for (i = 0; i <= sizeof(s)/sizeof(s[0]); i++)
    {
         printf("%c", s[i]);
    }
}
