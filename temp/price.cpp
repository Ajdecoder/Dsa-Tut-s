#include <stdio.h>

int main()
{
    int mathMarks, sciMarks;
    int passMarks = 35;
    int reward = 0;

    printf("Enter marks in math: ");
    scanf("%d", &mathMarks);
    printf("Enter marks in science: ");
    scanf("%d", &sciMarks);

     if (mathMarks >= passMarks && sciMarks < passMarks)
    {
        printf("Congratulations, you have passed math but failed in science!\n");
        reward = 15;
    }
    else if (sciMarks >= passMarks && mathMarks < passMarks)
    {
        printf("Congratulations, you have passed science but failed in math!\n");
        reward = 15;
    }
    else if (mathMarks >= passMarks && sciMarks >= passMarks)
    {
        printf("Congratulations, you have passed both math and science!\n");
        reward = 45;
    }
    else if (mathMarks < passMarks && sciMarks < passMarks)
    {
        printf("Sorry, you have failed the exam.\n");
    }

    if (reward > 0)
    {
        printf("You have earned a reward of Rs. %d\n", reward);
    }

    return 0;
}
