#pragma once
#include "IConverter.h"
class HTMLConverter :
    public IConverter
{
public:
    HTMLConverter() {}
    ~HTMLConverter() {}
    void convert(std::string& textToConvert);
};

