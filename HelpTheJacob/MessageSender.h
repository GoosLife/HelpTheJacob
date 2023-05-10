#pragma once
#include "Message.h"
#include "IMessageCarrier.h"
#include "IConverter.h"

class MessageSender
{
public:
	MessageSender(IMessageCarrier* carrier);
	void sendMessage(const Message& message) const;
	void sendMessage(Message& message, IConverter& converter);
private:
	const IMessageCarrier* _carrier;
};

