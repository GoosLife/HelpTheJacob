#include "Message.h"

#include <string>

Message::Message(const std::string& to, const std::string& from, const std::string& body, const std::string& subject, const std::string& cc) 
{
	To.push_back(to);
	From = from;
	Body = body;
	Subject = subject;
	Cc = cc;
}

Message::Message(const std::vector<std::string>& to, const std::string& from, const std::string& body, const std::string& subject, const std::string& cc)
{
	To = to;
	From = from;
	Body = body;
	Subject = subject;
	Cc = cc;
}

Message::~Message() {}