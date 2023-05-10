#pragma once

#include <string>

class IConverter
{
public:
	virtual std::string convert(std::string& textToConvert) = 0;
};