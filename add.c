//Add preprocessor

 

#include<stdio.h>

#include<conio.h>

void main()

{

 

//Declaring variables

int a[10]10],b[10][10],c[10][10],i,j;

 

//Clear screen

clrscr();

 

        printf(“enter all elements of first matrix : \n”);

       for(i=0;i<3;i++)

{

        for(j=0;j<3;j++)

{

        scanf(“%d”,&a[i][j]);

}

}

       printf(“enter all elements of second matrix : \n”);

       for(i=0;i<3;i++)

{

        for(j=0;j<3;j++)

{
scanf(“%d”,&b[i][j]);

}

}

        printf(“sum of matrices are: \n”);

        for(i=0;i<3;i++)

{

       for(j=0;j<3;j++) 

{

        c[[i][j]=a[i][j]+b[i][j];

        printf(“%d \t ”,c[i][j]);

}

       printf(“\n”);

}

        getch();

}
