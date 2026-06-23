#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailHeaderID_TypeDefinitionIndex = 3575;

	enum class MailHeaderID : ::System::Int32
	{
		Bcc = 0,
		Cc = 1,
		Comments = 2,
		ContentDescription = 3,
		ContentDisposition = 4,
		ContentID = 5,
		ContentLocation = 6,
		ContentTransferEncoding = 7,
		ContentType = 8,
		Date = 9,
		From = 10,
		Importance = 11,
		InReplyTo = 12,
		Keywords = 13,
		Max = 14,
		MessageID = 15,
		MimeVersion = 16,
		Priority = 17,
		References = 18,
		ReplyTo = 19,
		ResentBcc = 20,
		ResentCc = 21,
		ResentDate = 22,
		ResentFrom = 23,
		ResentMessageID = 24,
		ResentSender = 25,
		ResentTo = 26,
		Sender = 27,
		Subject = 28,
		To = 29,
		XPriority = 30,
		XReceiver = 31,
		XSender = 32,
		ZMaxEnumValue = 32,
		Unknown = -1,
	};
}
