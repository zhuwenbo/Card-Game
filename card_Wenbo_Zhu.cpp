/*
 *  card_game.cpp
 *  Card Game
 *
 *  Created by Ramavarapu Sreenivas  
 *  Wenbo Zhu
 *  Assignment 4
*/

#include <iostream>
#include "card_Wenbo_Zhu.h"
#include <map>
#include <stdio.h>
#include <time.h>

using namespace std;
	
int main (int argc, char * const argv[]) 
{
	clock_t tStart = clock();

	int total_number_of_cards;
	sscanf_s (argv[1], "%d", &total_number_of_cards);

	cout << "Total Number of Cards = " << total_number_of_cards << endl;
	cout << "Value of the game = " << value(total_number_of_cards/2,total_number_of_cards/2) << endl;

	//Calculate execution time.
	printf("Time taken: %.4fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
