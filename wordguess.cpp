#include<iostream>
#include<string.h>
using namespace std;

char *two_wheeler[5]={"Activa","Jupiter","Splender","Shine","Fassino"};
int correctWord=0;
//int chance=0;

void showResult()
{
    if (correctWord>=4)
    {
        printf("\n**********************************************\n");
        printf("|        Congratulation! You won the Game    |\n");
        printf("|        You have guessed %d words correctly  |\n",correctWord);
        printf("**********************************************\n\n");
    }else
    {
        printf("\n**********************************************\n");
        printf("|        Sorry! You lose the Game            |\n");
        printf("|        You have guessed %d words correctly  |\n",correctWord);
        printf("**********************************************\n\n");
    }   
}

void checkWord(int i,char *guessWord)
{
    if (0==strcmp(guessWord,two_wheeler[i]))
    {
        printf("Correct Guess\n");
        correctWord++;
    }else
    {
        printf("Wrong Guess\n");
        //chance--;
    }
   
}

void startgame(){
    char guessWord[15];
    
    cout<<"Guess the two wheeler name given below ";
    cout<<"A__t__a : ";
    fflush(stdin);
    gets(guessWord);
    checkWord(0,guessWord);

    
    cout<<"Guess the two wheeler name given below ";
    cout<<"J__i__r : ";
    fflush(stdin);
    gets(guessWord);
    checkWord(1,guessWord);

    cout<<"Guess the two wheeler name given below ";
    cout<<"S__e__er : ";
    fflush(stdin);
    gets(guessWord);
    checkWord(2,guessWord);

    cout<<"Guess the two wheeler name given below ";
    cout<<"S__n__ : ";
    fflush(stdin);
    gets(guessWord);
    checkWord(3,guessWord);

    cout<<"Guess the two wheeler name given below ";
    cout<<"F__s__i : ";
    fflush(stdin);
    gets(guessWord);
    checkWord(4,guessWord);
}

int main(){
    startgame();
    showResult();
    return 0;
}