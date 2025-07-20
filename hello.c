#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string user_name = get_string("What is your name? ");
    printf("hello, %s\n", user_name);
}
