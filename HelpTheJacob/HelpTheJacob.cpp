#include "HTMLConverter.h"
#include "IConverter.h"
#include "IMessageCarrier.h"
#include "MessageSender.h"
#include "SMTPMessageCarrier.h"
#include "VMessageCarrier.h"

#include <iostream>

int main()
{
	IMessageCarrier* smtp = new SMTPMessageCarrier();
	IMessageCarrier* vmessage = new VMessageCarrier();

	IConverter* converter = new HTMLConverter();

	MessageSender smtpSender(smtp);
	MessageSender vmessageSender(vmessage);

	Message message1("jakobschef@wtfenterprises.dk", "worstinternever@wtfenterprises.dk", "Hej chef jeg har fikset koden :)))", "I DID IT!");
	Message message2("worstinternever@wtfenterprises.dk", "jakobschef@wtfenterprises.dk", "Hej Jakob, det lyder fanme godt! Vi er s� stolte af dig, du er hermed forfremmet til CEO", "RE: I DID IT!");
	Message message3("jakobschef@wtfenterprises.dk", "worstinternever@wtfenterprises.dk", "Ih mange tak, men s� vil jeg ogs� have l�nforh�jelse", "SV: RE: I DID IT!");
	Message message4("worstinternever@wtfenterprises.dk", "jakobschef@wtfenterprises.dk", "Jakob,\n\nKom lige ind p� mit kontor og fort�l hvordan du har f�et adgang til at svare dig selv fra min mail.", "RE: SV: RE: I DID IT!");

	smtpSender.sendMessage(message1);
	vmessageSender.sendMessage(message2);
	smtpSender.sendMessage(message3, *converter);
	vmessageSender.sendMessage(message4, *converter);

	delete smtp;
	delete vmessage;
	delete converter;

	getchar();
}
