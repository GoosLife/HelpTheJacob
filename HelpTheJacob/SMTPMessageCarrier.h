#pragma once
#include "IMessageCarrier.h"
class SMTPMessageCarrier :
    public IMessageCarrier
{
public:
    SMTPMessageCarrier() {}
    ~SMTPMessageCarrier() {}
    void sendMessage(const Message& message) const;
};
