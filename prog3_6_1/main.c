
#include <stdio.h>
#include <stdbool.h>


int enc = 1;

bool check(char v)
{
    char t;
    scanf("%c", &t);
    if(t == EOF || t == '\n' || t == 0)
    {
        return (!enc ? true : false);
    }

    if(t == ')')
    {
        if(v == '(')
        {
           enc--;
            return true;
        }
        return false;
    }

    if(t == '}')
    {
        if(v == '{')
        {
           enc--;
            return true;
        }
        return false;
    }

    if(t == ']')
    {
        if(v == '[')
        {
           enc--;
            return true;
        }
        return false;
    }

    if(t == '{' || t == '[' || t == '(')
    {
       enc++;
        if(check(t))
            return check(v);
        else
            return false;
    }

    return check(v);
}

int main()
{
    char t;
    scanf("%c", &t);

    while(t != EOF && t != '\n' && t != 0)
    {
        if (t == '(' || t == '[' || t == '{')
        if(!check(t))
        {
            printf ( "no");
            return 0;
        }
        if (t == ')' || t == ']' || t == '}')

        {
            printf ( "no");
            return 0;
        }

        scanf("%c", &t);
    }

    printf("yes");
    return 0;
}
