#pragma once

#include <string>

class Message
{
public:
	Message(std::string to, std::string from, std::string body, std::string subject, std::string cc = NULL);
	~Message();

	std::string To;
	std::string From;
	std::string Body;
	std::string Subject;
	std::string Cc;
};

