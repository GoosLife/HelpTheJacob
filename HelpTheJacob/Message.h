#pragma once

#include <string>

class Message
{
public:
	Message(const std::string& to, const std::string& from, const std::string& body, const std::string& subject, const std::string& cc = "");
	~Message();

	std::string To;
	std::string From;
	std::string Body;
	std::string Subject;
	std::string Cc;
};

