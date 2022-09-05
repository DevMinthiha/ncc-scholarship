#include <stdio.h>
void playGame();
int firstQues();
int secondQues();
int thirdQues();
int main()
{
    int play = 0;
    int playAgain = 0;

    printf("Press 1 to play : ");
    scanf("%d", &play);

    while (play)
    {
        playGame();
        printf("Press 1 to play again / Press 0 to quit : ");
        scanf("%d", &play);
        if(!play) {
            play = 0;
            printf("Bye Bye \n");
        }
        
    }
    

    return 0;
}

void playGame() {
    int totalScore = 0;
    int firstMatch = firstQues();
    int secondMatch = secondQues();
    int thirdMatch = thirdQues();
    totalScore = firstMatch + secondMatch + thirdMatch;
    printf("Total Score => %d \n", totalScore);
}

int firstQues() 
{
    int win = 0;
    char answer;
    printf("First Question \n");
    printf("a.aa    b.bb    c.cc => ");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'a':
        win = 1;
        return win;
    
    default:
        win = 0;
        return win;
    }
}

int secondQues() 
{
    int win = 0;
    char answer;
    printf("Second Question \n");
    printf("a.aa    b.bb    c.cc => ");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'b':
        win = 1;
        return win;
    
    default:
        win = 0;
        return win;
    }
}

int thirdQues() 
{
    int win = 0;
    char answer;
    printf("Third Question \n");
    printf("a.aa    b.bb    c.cc => ");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'c':
        win = 1;
        return win;
    
    default:
        win = 0;
        return win;
    }
}