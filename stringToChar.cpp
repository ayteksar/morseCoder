#include<string>

char* stringToChar(std::string message)
{
	char* cMessage = new char[message.length() + 1];

	for (int i = 0;i < message.length();++i)
	{
		cMessage[i] = message[i];
	}

	return cMessage;
}