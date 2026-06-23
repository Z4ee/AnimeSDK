#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient_HeaderName_TypeDefinitionIndex = 3596;

	struct alignas(1) SmtpClient_HeaderName
	{
		// static const ::System::String* ContentTransferEncoding; // 0x0
		// static const ::System::String* ContentType; // 0x0
		// static const ::System::String* Bcc; // 0x0
		// static const ::System::String* Cc; // 0x0
		// static const ::System::String* From; // 0x0
		// static const ::System::String* Subject; // 0x0
		// static const ::System::String* To; // 0x0
		// static const ::System::String* MimeVersion; // 0x0
		// static const ::System::String* MessageId; // 0x0
		// static const ::System::String* Priority; // 0x0
		// static const ::System::String* Importance; // 0x0
		// static const ::System::String* XPriority; // 0x0
		// static const ::System::String* Date; // 0x0
	};
}
