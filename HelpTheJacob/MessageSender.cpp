#include "MessageSender.h"

MessageSender::MessageSender(IMessageCarrier* carrier) : _carrier(carrier) {}

void MessageSender::sendMessage(const Message& message) const
{
	_carrier->sendMessage(message);
}

void MessageSender::sendMessage(Message& message, IConverter& converter) 
{
	std::string& body = message.Body;
	converter.convert(body);
	sendMessage(message);
}