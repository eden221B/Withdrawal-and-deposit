#include <stdio.h>
struct customer
{
    int accno;
    char name[20];
    float bal;
};
struct customer s[10];
void input();
void display();
void deposit();
void withdrawal();
void lowbal();
int no=0,k=0;

void main()
{
    int i,ano,amount,ten=1;
    int choice;
    while(ten==1)
    {   
        printf("*************WELCOME***************\n");
        printf("-----------------------------------\n");
        printf("| To Enter account details Press 1|\n");
        printf("| To Withdraw Press 2.            |\n");
        printf("| To Deposit Press 3.             |\n");
        printf("| To Display Press 4.             |\n");
        printf("| To Exit Press 5.                |\n");
        printf("-----------------------------------\n");
    printf("\nEnter you choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        input();
        break;
        case 2:
        withdrawal();
        break;
        case 3:
        deposit();
        break;
        case 4:
        display();
        break;
        case 5:
        ten=5;
        break;//hello
    }
    }
}

void deposit()
{
    int i,ano,amount;
    printf("Enter account number ");
    scanf("%d",&ano);
    printf("Enter amount ");
    scanf("%d",&amount);
    for(i=0;i<10;i++)
    {
        if(s[i].accno==ano)
        {
            s[i].bal+=amount;
        }
    }
}
void withdrawal()
{
    
    int i,j=0,ano,amount;
    printf("Enter account number ");
    scanf("%d",&ano);
    printf("Enter amount ");
    scanf("%d",&amount);
    for(i=0;i<10;i++)
    {
        if (s[i].accno==ano)
        {
                if (s[i].bal-100>=amount)
                {
                    s[i].bal-=amount;
                }
                else
                {
                    printf("Withdrawal should be less than %f\n",s[i].bal-100);
                }
        }
    }
}
void input()
{
    int i,j;
    printf("\nEnter No. Of Entry :\n\n");
    printf("--------------------\n");
    scanf("%d",&j);
    no=no+j;
    for (i=k;i<k+j;i++)
    {
        fflush(stdin);
        printf("Enter account no. ");
        scanf("%d",&s[i].accno);
        
        fflush(stdin);
        printf("Enter name ");
        scanf("%s",&s[i].name);
        
        fflush(stdin);
        printf("Enter balance ");
        scanf("%f",&s[i].bal);
        
        if(s[i].bal<100)
        {
            printf("\nBalance of account no. %d too low \n",s[i].accno);
        }
    }
    k=i;
}
void display()
{
    int i;
    printf("=================================\n");
    for (i=0;i<no;i++)
    {
        printf("Account no. = %d \n",s[i].accno);
        printf("Name  = %s \n",s[i].name);
        if(s[i].bal<100)
        {
            printf("Balance  = 0 \n");
        }
        else
        {
            printf("Balance  = %f \n",s[i].bal);
        }
        
        printf("--------------------------\n");
    }
    printf("==================================\n");
}

=========================================

#include <stdio.h>
struct stud
{
    int roll;
    char name[20];
    char dep[15];
    char course[10];
    int y
};
struct stud s[5];

void input();
void display();

void main()
{
    int i,r;
    int y;
    printf("\nEnter the data for each student:\n\n");
    
    input();
    display();
}
void input()
{
    int i;
    for (i=0;i<5;i++)
    {
        fflush(stdin);
        printf("Enter roll no. ");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter name of student ");
        scanf("%s",s[i].name);
    }
}
void display()
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("Roll no of student %d = %d \n",i+1,s[i].roll);
        printf("Name of student %d = %s \n",i+1,s[i].name);
    }
}
