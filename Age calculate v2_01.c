//Bismilahir Rahmanir Rahim
/*
Creator : sompod
Date : 01/05/2017
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int y1,m1,d1,y2,m2,d2,value1,p1,s1;
    int ry,rm,rd;
here:
    printf("\t\t:::::::::::::WELCOME:::::::::::::\n");
    printf("\n\t\t<<<This Is A AGE Calculate Software.>>>\n");
    printf("\n\t\t\t\t\t\tCreate By SOMPOD. Date:23/03/2017\n\n");

    printf("\n\t\tInput your present Age with year-month-day.");
    printf("\n\nLook like \"2017 1 1\"This format.");
    printf("\n\n\t\t[Hints : Type year(space)month(space)day]");
    printf("\n\n\nInput Here plz :  ");
    scanf(" %d %d %d", &y1,&m1,&d1);
    printf("\n\t\tInput  your born Age with year-month-day.");
    printf("\n\nLook like \"2017 1 1\"This format.");
    printf("\n\n\t\t[Hints : Type year(space)month(space)day]");
    printf("\n\n\nInput Here plz :  ");
    scanf(" %d %d %d", &y2,&m2,&d2);
    if(d1<d2)
    {
        if(m2 % 2 == 0)
        {
            p1 = d1+30;
            rd = p1-d2;
        }
        if(m2 % 2 != 0)
        {
            p1 = d1=31;
            rd = p1-d2;
        }

    }
    else
    {
        rd = d1-d2;

    }

    if(d1<d2)
    {
        if(m1<m2)
        {
            s1 = m1 + 12;
            rm = s1 - (m2+1);
        }
        else
        {
            rm = m1-(m2+1);
        }
    }
    if(d1>d2)
    {
        if(m1<m2)
        {
            s1 = m1+12;
            rm = s1-m2;
        }
        else
        {
            rm = m1-m2;
        }
    }


    else
    {
        rm = m1 - m2;
    }


    if(m1<m2)
    {
        y2 = y2+1;
        ry = y1-y2;
    }
    else
    {
        ry = y1-y2;
    }


    printf("\n\nNow you can see Your Age.");
    printf("\n\*\*");
    printf("\n\*\*\*\*");
    printf("\n\*\*\*\*\*\*");
    printf("\n\*\*\*\*\*\*\*\*");
    printf("\n\*\*\*\*\*\*\*\*\*\*");
    printf("\n\*\*\*\*\*\*\*\*\*\*\*Your Age %dyear %dMonth %dDay", ry,rm,rd);
    printf("\n\*\*\*\*\*\*\*\*\*\*");
    printf("\n\*\*\*\*\*\*\*\*");
    printf("\n\*\*\*\*\*\*");
    printf("\n\*\*\*\*");
    printf("\n\*\*");
    printf("\n\n\t\t::.....THANK YOU USER FOR USING MY SOFTWARE.....::");
    printf("\n\nIf you want Again calculate A 'Age'");
    printf("\n\n\tPress 1 for Run Again software.");
    printf("\n\n\t\tOR");
    printf("\n\n\tPress 2 for Exit software.");
    printf("\n\nInput here plz......... ");
    scanf("%d", &value1);

    if(value1 == 1);
    {
        system("cls");
        goto here;
    }
    getch();
}


