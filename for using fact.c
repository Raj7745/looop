#include<stdio.h>
#include<conio.h>
int main()
{
        int no=0;
        int fact=0;
        int temp=0;

        printf(" enetr a number \n");
        scanf("%d",&no);

        if(no==0)
        {


            printf(" invalid number\n");
        }
        for(fact=1,temp=no; temp>1; temp--)
        {

            fact=fact*temp;
        }
        printf(" the number of factorial is %d ",fact);





        return 0;
}



