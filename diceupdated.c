//Pedro Henrique Jacobino de Carvalho
//Matrix: phjacobino-de-carval

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rollDice(void);
int startRoll(void);
int showDice(void);
int dcresult;
int result;

int rollDice(void) {
   int dcresult = (rand() % 6) + 1;
   return dcresult;
}

int startRoll(void) {
   int dice[2] = {0,0};
   //Ask to user to start the game
   printf("Press <ENTER> to roll the dice.\n");
   dice[0] = rollDice();
   dice[1] = rollDice();
   return dice;
}

int showDice(int dice[]) {
   switch(dice[]) {
   	case (dice[] == 1):
   		printf("+------+\n");
   		printf("|      |\n");
   		printf("|   o  |\n");
   		printf("|      |\n");
   		printf("+------+\n");
   	case (dice[] == 2):
   		printf("+------+\n");
   		printf("|     o|\n");
   		printf("|      |\n");
   		printf("|o     |\n");
   		printf("+------+\n");
   	case (dice[] == 3):
   		printf("+------+\n");
   		printf("|     o|\n");
   		printf("|   o  |\n");
   		printf("|o     |\n");
   		printf("+------+\n");
   	case (dice[] == 4):
   		printf("+------+\n");
   		printf("|o    o|\n");
   		printf("|      |\n");
   		printf("|o    o|\n");
   		printf("+------+\n");
   	case (dice[] == 5):
   		printf("+------+\n");
   		printf("|o    o|\n");
   		printf("|   o  |\n");
   		printf("|o    o|\n");
   		printf("+------+\n");
   	case (dice[] == 6):
   		printf("+------+\n");
   		printf("|o    o|\n");
   		printf("|o    o|\n");
   		printf("|o    o|\n");
   		printf("+------+\n");
		break;
	   }
   }
   

int main (void){
	rollDice();
	startDice();
	showDice(int dice[0]]);
	showDice(int dice[1]);
	return 0;	
}





