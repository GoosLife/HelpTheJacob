#include "SMTPMessageCarrier.h"

#include <iostream>

void SMTPMessageCarrier::sendMessage(const Message& message) const
{
	std::cout << "Connecting to the SMTP server...\n";
	std::cout << "Sending message to: ";

	for (std::string recipient : message.To) {
		std::cout << recipient << '\n';
	}

	std::cout << "From: " << message.From << '\n';
	std::cout << "Subject: " << message.Subject << '\n';
	std::cout << "Body: " << message.Body << '\n';
	std::cout << "Cc: " << message.Cc << '\n';
	std::cout << "Message sent!\n";
	std::cout << "Terminating SMTP connection...\n";
}