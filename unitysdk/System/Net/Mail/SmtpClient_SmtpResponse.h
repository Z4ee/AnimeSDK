#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/SmtpStatusCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_MAIL_SMTPCLIENT_SMTPRESPONSE_PARSE_OFFSET UNITYSDK_OFFSET(0x1921FBB0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient_SmtpResponse_TypeDefinitionIndex = 3598;

	struct alignas(8) SmtpClient_SmtpResponse
	{
		::System::Net::Mail::SmtpStatusCode StatusCode; // 0x10
		::System::String* Description; // 0x18

		static ::System::Net::Mail::SmtpClient_SmtpResponse Parse(::System::String* line)
		{
			return ((::System::Net::Mail::SmtpClient_SmtpResponse(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SMTPRESPONSE_PARSE_OFFSET))(line);
		}
	};
}
