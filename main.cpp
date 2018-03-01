//Author: Christopher Rey Almaraz
#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int GameTrials;
  int Ws=0;
  
  cout<<"How many times would you like to play.\n";
  cin>>GameTrials;

  for(int i=0;i<GameTrials;i++)
  {	game.newGame();
 	game.guessDoorC();
	game.guessDoorC();
	if(game.isWinner())
	{
		Ws++;
	}
  } 
  cout<<"you won "<< Ws<< " times.\n";
  return 0;
}
