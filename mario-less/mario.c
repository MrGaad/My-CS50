#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);
    // print the pyramid
    // the row
    for (int row = height; row > 0; row--)
    {
        // adding spaces
        for (int spaces = 1; spaces < row; spaces++)
        {
            printf(" ");
        }
        // adding the blocks
        for (int blocks = row - 1; blocks < height; blocks++)
        {
            printf("#");
        }
        // adding a new line
        printf("\n");
    }
}
