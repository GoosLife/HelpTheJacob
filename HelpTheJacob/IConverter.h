#pragma once

#include <string>

class IConverter
{
public:
	virtual void convert(std::string& textToConvert) = 0;
};