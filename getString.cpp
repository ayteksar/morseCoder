#include<string>
#include<iostream>

std::string getString() {
	std::string message{};
	std::cout << "Enter your message: ";
	std::getline(std::cin >> std::ws, message);

	std::cout << "You entered: " << message<<'\n';

	int iMessageLength{ static_cast<int>(message.length()) };
	std::cout << "Your message has " << iMessageLength << " characters.\n";

	return message;
}