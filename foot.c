#include<stdio.h>
#include<cs50.h>

int main(void)
{
string s[5][5] = {{"null","PSG","OMG","OL","SR"},
{"PSG","null","2-1","1-3","0-1"},
{"OMG","3-2","null","2-2","0-1"},
{"OL","1-3","1-1","null","3-2"},
{"SR","2-1","3-1","2-2","null"} };
for (int i=1; i<5; i++)
{
string sum[5] = {"null","PSG","OMG","OL","SR"};
printf ("\n Score of %s is: ", sum[i]);
int total = 0;
for (int j=1; j<5; j++)
{
if (i != j)
{
printf (" %c, %c,", s[i][j][0], s[j][i][2]);
total = total + (s[i][j][0] -'0') + (s[j][i][2] -'0') ;
}

  }
 
 printf("\n total %s is : %i \n", sum[i], total);
}

}
