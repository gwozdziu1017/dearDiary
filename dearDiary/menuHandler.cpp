#include "menuHandler.h"

MenuHandler::MenuHandler()
{
	drawInitialMenu();
}

MenuHandler::~MenuHandler()
{ }

void MenuHandler::drawInitialMenu()
{
	cout << "Dear Diary by dgwo\n"
		 << "What do you want to do:\n"
		 << "1. Write a note\n"
		 << "2. Delete a note\n"
		 << "Your choice: ";
	setChoice();
}

void MenuHandler::drawInputMenu()
{
	this->clearScr();
	cout << "Place your input and save it by pressing Enter:\n";
}

void MenuHandler::clearScr()
{
	system("cls");
}

suInt MenuHandler::getChoice()
{
	return this->choice;
}

void MenuHandler::setChoice()
{
	cin >> this->choice;
}