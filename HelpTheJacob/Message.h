#pragma once

#include <string>
#include <vector>

class Message
{
public:
	Message(const std::string& to, const std::string& from, const std::string& body, const std::string& subject, const std::string& cc = "");
	Message(const std::vector<std::string>& to, const std::string& from, const std::string& body, const std::string& subject, const std::string& cc);
	~Message();

	std::vector<std::string> To;
	std::string From;
	std::string Body;
	std::string Subject;
	std::string Cc;
};

