#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("What's the height of the pyramid? From 1 to 8\n"); //ask for the pyramid height
    }
    while (height < 1 || height > 8);

    for (int row = height; row >= 1 ; row--) // sets the row location
    {
        for (int spaces = 0; spaces < row - 1; spaces++) printf(" "); //sets number of spaces
        for (int hashes = height; hashes >= row; hashes--) printf("#"); //sets number of hashes
        printf("\n"); //prints space between
    }
}
