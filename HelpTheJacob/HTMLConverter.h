#pragma once
#include "IConverter.h"
class HTMLConverter :
    public IConverter
{
public:
    std::string convert(std::string& textToConvert);
};

