#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i=0;i<9;i++)
    {
        for (int j = 0; j < 41; j++)
        {
            if (i==1 && (j==1 || j==2 ||j==3 || j==4 ||j==7 ||j==8 ||j==9 ||j==10 || j==15 || j==18 || j==21 || j==21 || j==22 || j==23 || j==24 || j==27 || j==28 || j==29 || j==30 || j==33 || j==34 || j==35 || j==36 || j==40))
            {
                printf("0 ");
            }
            else if (i==2 && (j==1 || j==4 || j==7 || j==15 || j==18 || j==21 || j==27 || j==30 || j==33 || j==40))
            {
                printf("0 ");
            }
            else if (i==3 && (j==1 || j==4 || j==7 || j==15 || j==18 || j==21 || j==27 || j==30 || j==33 || j==40))
            {
                printf("0 ");
            }
            else if (i==4 && (j==1 || j==2 || j==3 || j==7 || j==9 || j==10 || j==15 || j==16 || j==17 || j==18 || j==21 || j==22 || j==23 || j==24 || j==27 || j==28 || j==29 || j==33 || j==34 || j==35 || j==36 || j==40))
            {
                printf("0 ");
            }
            else if (i==5 && ( j==1 || j==4 || j==7 || j==10 || j==15 || j==18 || j==21 || j==27 || j==30 || j==33))
            {
                printf("0 ");
            }
            else if (i==6 && ( j==1 || j==4 || j==7 || j==10 || j==15 || j==18 || j==21 || j==27 || j==30 || j==33 ))
            {
                printf("0 ");
            }
            else if (i==7 && ( j==1 || j==2 || j==3 || j==4 || j==7 || j==8 || j==9 || j==10 || j==15 || j==18 || j==21 || j==22 || j==23 || j==24 || j==27 || j==30 || j==33 || j==34 || j==35 || j==36 || j==40))
            {
                printf("0 ");
            }
            else
            {
                printf("  ");
            }
               
        }
    printf("\n");
        
    }

    return 0;
}
