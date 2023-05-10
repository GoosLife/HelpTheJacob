#include "Message.h"

#include <string>

Message::Message(std::string to, std::string from, std::string body, std::string subject, std::string cc) 
{
	To = to;
	From = from;
	Body = body;
	Subject = subject;
	Cc = cc;
}

Message::~Message() {}