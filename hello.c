#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("Hvað heitir þú? ");
    printf("hello, %s\n" , answer);
}
