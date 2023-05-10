#include "VMessageCarrier.h"

#include <iostream>

void VMessageCarrier::sendMessage(const Message& message) const
{
	std::cout << "Connecting to VMessage...\n";

	for (std::string recipient : message.To) {
		std::cout << recipient << '\n';
	}

	std::cout << "From: " << message.From << '\n';
	std::cout << "Subject: " << message.Subject << '\n';
	std::cout << "Body: " << message.Body << '\n';
	std::cout << "Cc: " << message.Cc << '\n';
	std::cout << "Message sent!\n";
	std::cout << "Terminating VMessage connection...\n";
}
