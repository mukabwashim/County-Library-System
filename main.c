/*
   PROJECT:  COUNTY LIBRARY SYSTEM
   AUTHOR:   MUKABWA SHIM CHELSEA
   DATE:     5TH NOVEMBER 2021
   COMPILER: GNC GCC
   LANGUAGE: C99
   LICENSE:  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();
void execute_action(int action);
int main()
{
    int action;
    action = menu();
    execute_action(action);
    return 0;
}

void execute_action(int action){
    printf("You selected action %d", action);
}

int menu() // header/prototype
{
   int action;
    do {
        printf("\tCounty Library System\n");
        printf("Welcome Mr. Shim. \n");
        printf("What would you like to do?\n");
        printf("1. View Users. \n");
        printf("2. Add New User. \n");
        printf("3. Edit User. \n");
        printf("4. Delete User. \n");
        printf("5. Change Password. \n");
        printf("6. Log out. \n");
        printf("7. Exit System. \n");
        printf("Selected Action(1-7): ");
        scanf("%d", &action);

        if (action < 1 || action > 7){
            system("cls");
            printf("Invalid action!!! Try again.\n");
        }
    }while(action < 1 || action > 7);

switch(action)
    {
    case 1:
        printf("Here is the list of all Users.\n");
    break;

    case 2:
        printf("Enter Name of the New User.\n");
    break;

    case 3:
        printf("Enter Name of the User to be Edited.\n");
    break;

    case 4:
        printf("Enter Name of the User to be Deleted.\n");
    break;

    case 5:
        printf("Enter New Password.\n");
    break;

    case 6:
        printf("Log Out.\n");
    break;

    case 7:
        printf("Exit System.\n");
    break;

    }

}

