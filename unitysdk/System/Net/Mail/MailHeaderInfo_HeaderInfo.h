#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/MailHeaderID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_MAIL_MAILHEADERINFO_HEADERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x90F090)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailHeaderInfo_HeaderInfo_TypeDefinitionIndex = 3577;

	struct alignas(8) MailHeaderInfo_HeaderInfo
	{
		::System::String* NormalizedName; // 0x10
		::System::Boolean IsSingleton; // 0x18
		::System::Net::Mail::MailHeaderID ID; // 0x1C
		::System::Boolean IsUserSettable; // 0x20
		::System::Boolean AllowsUnicode; // 0x21

		::System::Void _ctor(::System::Net::Mail::MailHeaderID id, ::System::String* name, ::System::Boolean isSingleton, ::System::Boolean isUserSettable, ::System::Boolean allowsUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailHeaderID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_HEADERINFO__CTOR_OFFSET))(this, id, name, isSingleton, isUserSettable, allowsUnicode);
		}
	};
}
