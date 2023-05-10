#pragma once

#include "Message.h"

class IMessageCarrier
{
public:
	virtual void sendMessage(const Message& message) const = 0;
};

