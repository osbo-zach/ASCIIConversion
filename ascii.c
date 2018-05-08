/*
Zachary Osborne
Lab02
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringToNum()
{
    char clearBuffer[10];
    fgets(clearBuffer, 10, stdin);
    
    char input[10];
    printf("Enter a string: \n");
    fgets(input, 10, stdin);
    int len = strlen(input);

    printf(".-----------------.\n| char|  dec|  hex|\n|-----+-----+-----|\n");
    for (int i = 0; i < len - 1; i++)
        {
            int val = input[i];
            printf("|%5c|%5d|%5x|\n", input[i], input[i], input[i]);
        }
    printf(".-----------------.\n");
    userInput();
}

void numToString()
{
    char output[10];
    printf("Convert ASCII decimal values to string (press 'Enter' after each integer).\nPress 'Enter' twice to finish.\n");
    int i = 0;
    while(1)
        {
            char input[10];
            fgets(input, 10, stdin);
            int num = atoi(input);
            output[i] = (char)num;
            if ((output[i] == NULL)&&(output[i-1] == NULL)&&(i>1))
                {
                    break;
                }
    
            i++;
        }
    printf("Converted string: ");
    for (int j = 0; j <= i; j++)
        {
            printf("%c", output[j]);
        }
    printf("\n");
    userInput();
}

void userInput()
{
    char selection;
    printf("Select an option: \n string -> numerical values: 1\n numerical values -> string: 2\n Exit: 3\n");
    selection = getchar();
    
    if (selection == '3')
        return;
    else if (selection == '1')
        stringToNum();
    else if (selection == '2')
        numToString();
    else
    {
        printf("Invalid selection %c", selection);
        userInput();
    }
}

int main()
{
    userInput();
    return 0;
}