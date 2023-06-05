/*
*****************************************************************************
Lucas Heck Acosta
Workshop - #4 (Part-2)
This is a program designed to teach new programmers how to use loops in a program using C language.

 Thanks for checking it
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int apples, oranges, pears, tomatoes, cabbages;
    int hand, flag = 1;

    while (flag != 0)
    {
        apples = -1, oranges = -1, pears = -1, tomatoes = -1, cabbages = -1;  // set values to -1 so the while loops work (needs to be < 0)

        printf("Grocery Shopping\n");
        printf("================\n");

        while (apples < 0)
        {
            printf("How many APPLES do you need? : "); // get apples
            scanf("%d", &apples);

            if (apples < 0)  // print error if value < 0
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            // once the number is 0 or greater, loop breaks and variable apples have the right value
        }
        printf("\n");
        while (oranges < 0)
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &oranges);

            if (oranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        }
        printf("\n");
        while (pears < 0)
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &pears);

            if (pears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        }
        printf("\n");
        while (tomatoes < 0)
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoes);

            if (tomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        }
        printf("\n");
        while (cabbages < 0)
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbages);

            if (cabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
        }
        printf("\n");

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");
        printf("\n");

        while (apples != 0)  // start loop only if apple is needed, if set to 0 it will skip to next 
        {
            printf("Pick some APPLES... how many did you pick? : ");  // get amount picked
            scanf("%d", &hand);

            if (hand > apples)              // picking more than the max prints a warning
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
            }
            else if (hand <= 0)             // picking 0 or less prtins a error
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else                            // other values get subtracted from the total
            {
                apples -= hand;
                if (apples > 0)
                {
                    printf("Looks like we still need some APPLES...\n");  // if there's any apples left, start loop again
                }
                else if (apples == 0)
                {
                    printf("Great, that's the apples done!\n");         // once apples are done, loop ands and goes to next fruit/vegetable
                    printf("\n");
                }
            }

        }
        
        while (oranges != 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &hand);

            if (hand > oranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
            }
            else if (hand <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                oranges -= hand;
                if (oranges > 0)
                {
                    printf("Looks like we still need some ORANGES...\n");
                }
                else if (oranges == 0)
                {
                    printf("Great, that's the oranges done!\n");
                    printf("\n");
                }
            }

        }
        
        while (pears != 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &hand);

            if (hand > pears)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
            }
            else if (hand <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                pears -= hand;
                if (pears > 0)
                {
                    printf("Looks like we still need some PEARS...\n");
                }
                else if (pears == 0)
                {
                    printf("Great, that's the pears done!\n");
                    printf("\n");
                }
            }

        }
        
        while (tomatoes != 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &hand);

            if (hand > tomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes);
            }
            else if (hand <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                tomatoes -= hand;
                if (tomatoes > 0)
                {
                    printf("Looks like we still need some TOMATOES...\n");
                }
                else if (tomatoes == 0)
                {
                    printf("Great, that's the tomatoes done!\n");
                    printf("\n");
                }
            }

        }
        
        while (cabbages != 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &hand);

            if (hand > cabbages)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages);
            }
            else if (hand <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                cabbages -= hand;
                if (cabbages > 0)
                {
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else if (cabbages == 0)
                {
                    printf("Great, that's the cabbages done!\n");
                    printf("\n");
                }
            }

        }
        
        printf("All the items are picked!\n");
        printf("\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &flag);
        printf("\n");
        

    }
    printf("Your tasks are done for today - enjoy your free time!\n");




    
    
    return 0;
}