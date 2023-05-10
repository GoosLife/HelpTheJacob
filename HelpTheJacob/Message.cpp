#include "Message.h"

#include <string>

Message::Message(const std::string& to, const std::string& from, const std::string& body, const std::string& subject, const std::string& cc) 
{
	To = std::move(to);
	From = std::move(from);
	Body = std::move(body);
	Subject = std::move(subject);
	Cc = std::move(cc);
}

Message::~Message() {}