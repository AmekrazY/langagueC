#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)

{

    int tab[3][3];
    tab[0][0]=0;
    tab[0][1]=2-1;
    tab[0][2]=1-3;
    tab[0][3]=0-1;
    tab[1][0]=3-2;
    tab[1][1]=0;
    tab[1][2]=2-2;
    tab[1][3]=0-1;
    tab[2][0]=1-3;
    tab[2][1]=1-1;
    tab[2][2]=0;
    tab[2][3]=3-";
    tab[3][0]=2-1;
    tab[3][1]=3-1;
    tab[3][2]=2-2;
    tab[3][3]=0;
    //int l=strlen (tab[3][3]);
    for ( int i = 0; i<3;i++)
    {
        for ( int j =0;j<3;i++)
        {
            printf("%i",tab[i][j]);
        }
        printf("\n");
    }



}
