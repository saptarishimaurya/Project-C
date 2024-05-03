#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char a,char b)
{
    if( a == b)
    {
        return 0;
    }
    else if (a == 'R' && b == 'P')
    {
        return -1;
    }
    else if (a == 'P' && b == 'R')
    {
        return 1;
    }
    else if (a == 'S' && b == 'R')
    {
        return -1;
    }
    else if (a == 'R' && b == 'S')
    {
        return 1;
    }
    else if (a == 'P' && b == 'S')
    {
        return -1;
    }
    else if (a == 'S' && b == 'P')
    {
        return 1;
    } 
}


int main()
{
    int number;
    char you,comp;
    srand(time(0));
    number = rand()%3 + 1;

    if (number == 1)
    {
        comp = 'R';
    }
    else if (number == 2)
    {
        comp = 'P';
    }
    else if (number == 3)
    {
        comp = 'S';
    }
    
    while (!(you == 'R' ||you == 'r'||you == 'P'||you == 'p'||you == 'S'||you == 's'))
    {
        printf("Enter R for rock, P for paper and S for Scissor: ");
        scanf("%c",&you);
    }
    if (you == 'r')
    {
        you = 'R';
    }
    if (you == 'p')
    {
        you = 'P';
    }
    if (you == 's')
    {
        you = 'S';
    }
    int k = rockpaperscissor(you,comp);
    if (k == 1)
    {
        printf("You won\n");
    }
    else if (k == 0)
    {
        printf("Game drawn\n");
    }
    else
    {
        printf("You lost\n");
    }
    
    printf("You choose %c and Computer choose %c\n",you,comp);
    
    return 0;
}
