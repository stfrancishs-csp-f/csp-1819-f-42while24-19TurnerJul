#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    //for (k=0; k<5; k++)
    while (k<5)
    {
        sum+=k; //use something different in "while" version
        sum = sum + k;
        k++;
    }
        printf ("%d\n", k);

        //k=5;

    //while (k>0)
    for (k=4; k>0; k--)
    {
        k=k-1; //use something different in "for" version
        printf ("%d\n",sum);
    }

}