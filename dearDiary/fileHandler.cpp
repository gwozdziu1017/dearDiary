#include "fileHandler.h"

FileHandler::FileHandler()
{
	strcpy(this->filePath, "");
	this->stream = nullptr;
}

FileHandler::~FileHandler()
{
	stream = nullptr;
	delete stream;
}

bool FileHandler::openStream()
{
	stream = std::fopen(filePath, "w");
	if (!stream)
	{
		// file open failure
		return false;
	}
	else
	{
		return true;
	}
}


bool FileHandler::saveToFile()
{
	return false;
}

void FileHandler::setDefaultFilePath()
{
	strcpy(filePath, "C:/Users/egwodam/Private/dearDiary/dearDiary/dearDiaryLogger.txt");
}
