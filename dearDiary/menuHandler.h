#pragma once
#ifndef _MENU_HANDLER_H_
#define _MENU_HANDLER_H_

/*
*	Class responsible for application menu
*		* draw menu
*	
*	Created by dgwo 12.04.2020
*/
#include <iostream>

typedef short unsigned int suInt;

using namespace std;

class MenuHandler
{
public:
	MenuHandler();
	~MenuHandler();

	void drawInitialMenu();	// menu when app starts
	void drawInputMenu();	// menu when user wants put input
	void clearScr();
	void setChoice();
	suInt getChoice();

protected:
	suInt choice;
private:
};

#endif _MENU_HANDLER_H_