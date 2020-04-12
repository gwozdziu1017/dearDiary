#pragma once
#ifndef _FILE_HANDLER_H
#define _FILE_HANDLER_H

/*
*	Class responsible for file management
*		* create file
*		* saveing to disc
*		* deleting from disc
*
*	Created by dgwo 12.04.2020
*/

#include <iostream>

class FileHandler
{
public:
	FileHandler();
	~FileHandler();

	static bool openStream();
	static bool saveToFile();
	static bool closeFile();
	static void setDefaultFilePath();

protected:
	static std::FILE* stream;
	static char filePath[];

};
#endif _FILE_HANDLER_H