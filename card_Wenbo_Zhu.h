/*
 *  card_game.h
 *  Card Game
 *
 *  Created by Ramavarapu Sreenivas  
 *  Wenbo Zhu
 *  Assignment 4
 * Implementing map library, so early computations can be accessed later to reduce running time.
*/

//Using map library to keep computation results can be accessed later
#ifndef	CARDGAME_H
#define CARDGAME_H
#include <algorithm>
#include <map>
#include <utility>

double value(int r, int b)
{
	//Create a static variable to keep track of map
	static std::map<std::pair<int,int>,double> mymap;
	//r is # of red cards, b is # of black cards
	if (0 == r)
		return ((double) b);
	if (0 == b)
		return (0);

	//If the value already stored in the map, we can output the result directly
	if(mymap[std::make_pair(r,b)])
		return mymap[std::make_pair(r,b)];

	double term1 = ((double) r/(r+b)) * value(r-1, b);
	
	double term2 = ((double) b/(r+b)) * value(r, b-1);
	
	double mapvalue = std::max((term1 + term2), (double) (b - r));


	mymap[std::make_pair(r,b)]=mapvalue;

	return mapvalue;
}
#endif