#include <iostream>
#include<Windows.h>	//for PlaySound()

/*

		Software Engineer	: Ahmet Yasir TEKSAR
		Project				: Get Message From User And Play Sounds For Message

*/


//My Libraries
#include"getString.h"
#include"stringToChar.h"
#include"soundNumber.h"

void clear();	//forward decleration, I clean console.

int main()
{
	while (true)	//infinite loop
	{
		std::string message{ getString() };			//get message from user.

		char* cMessage = stringToChar(message);		//convert from string to char array

		for (int i = 0;i < message.length();++i)	//play sound for every char array
		{
			soundNumber(static_cast<int>(message[i]));
		}

		//std::exit(0);
		
		clear();
	}
	return 0;
}
