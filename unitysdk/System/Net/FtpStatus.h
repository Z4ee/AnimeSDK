#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/FtpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_FTPSTATUS_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x186D56F0)
#define SYSTEM_NET_FTPSTATUS_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x186D5700)
#define SYSTEM_NET_FTPSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x186D56E0)

namespace System::Net
{
	inline static constexpr unsigned int FtpStatus_TypeDefinitionIndex = 2830;

	class FtpStatus : public ::System::Object
	{
	public:
		::System::String* statusDescription; // 0x10
		::System::Net::FtpStatusCode statusCode; // 0x18

		::System::Void _ctor(::System::Net::FtpStatusCode statusCode, ::System::String* statusDescription)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpStatusCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPSTATUS__CTOR_OFFSET))(this, statusCode, statusDescription);
		}

		::System::Net::FtpStatusCode get_StatusCode()
		{
			return ((::System::Net::FtpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPSTATUS_GET_STATUSCODE_OFFSET))(this);
		}

		::System::String* get_StatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPSTATUS_GET_STATUSDESCRIPTION_OFFSET))(this);
		}
	};
}
