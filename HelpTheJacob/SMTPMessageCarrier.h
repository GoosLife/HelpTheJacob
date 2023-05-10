#pragma once
#include "IMessageCarrier.h"
class SMTPMessageCarrier :
    public IMessageCarrier
{
public:
    void sendMessage(Message message);
};

