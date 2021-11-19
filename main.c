/*
Author:Jaohet Makori
License:MIT
Compiler:gcc
*/



/* Users views users add delate login change password
Catalogue
Issuance
Serial
Acquisation
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();// prototype
int main()
{
      int action;
      action= menu (); //function call

return 0;
}
//function definition
int menu() //header
{
    int action;
    do {

        printf("Welcome to county library Management system\n");
        printf("What would you like to do?\n");
        printf("1.View user.\n");
        printf("2.Add users.\n");
        printf("3.Edit user.\n");
        printf("4.Delete user.");
        printf("5.change password.\n");
        printf("6.logout.\n");
        printf("7.Exit.\n");
        printf("Selected action(1-7):");
        scanf("%d",&action);
        if (action <1 ||action >7){
              system ("cls");
                printf("invalid Action.Try again");
        }
        }while (action < 1 || action > 7);


return action;
}
