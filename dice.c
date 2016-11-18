//Pedro Henrique Jacobino de Carvalho
//Matrix: phjacobino-de-carval

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rollDice(void);
int startRoll(void);
int showDice(void);
int dcresult;

int rollDice(void) {
   int dcresult = (rand() % 6) + 1;
   return dcresult;
}

int startRoll(void) {
   int dice1 = 0;
   int dice2 = 0;
      int dice[2] = {0,0};

   printf("Press <ENTER> to roll the dice.\n");
   dice[0] = rollDice();
   dice[1] = rollDice();
   return dice;
}

int showDice(int dice[]) {

}
