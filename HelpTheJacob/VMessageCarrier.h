#pragma once
#include "IMessageCarrier.h"
class VMessageCarrier :
    public IMessageCarrier
{
public:
	/// <summary>
	/// Simulates sending a message over VMessage.
	/// </summary>
	/// <param name="message"></param>
	void sendMessage(Message message);
};

