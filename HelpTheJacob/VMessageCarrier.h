#pragma once
#include "IMessageCarrier.h"
class VMessageCarrier :
    public IMessageCarrier
{
public:
	VMessageCarrier() {}
	~VMessageCarrier() {}

	/// <summary>
	/// Simulates sending a message over VMessage.
	/// </summary>
	/// <param name="message"></param>
	void sendMessage(const Message& message) const;
};

