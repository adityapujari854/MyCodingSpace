#include<stdio.h>
#include<conio.h>
#include<string.h>

int usr()
{
    char user[30],pass[20];
    char user1[30],pass1[20];
    printf("\nSIGN UP: ");
    printf("\nEnter Your Username: ");
    scanf("%s",&user);
    printf("\nEnter Your Password: ");
    scanf("%s",&pass);
    printf("\nSIGN IN: ");
    printf("\nENTER YOUR LOGIN CREDENTIALS : \n");
    printf("\nEnter Your Username : ");
    scanf("%s",&user1);
    printf("\nEnter Your Password : ");
    scanf("%s",&pass1);
    if(strcmp(user,user1)==0 && strcmp(pass,pass1)==0)
    {
        printf("\n\t\n\t***LOGIN SUCCESSFULL***\n\n");
    }
    else
    {
        printf("\nINVALID CREDENIATLS!");
    }
    return 0;
}
int main()
{
    usr();
    return 0;
}