#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/FtpStatusCode.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_NETRES_GETWEBSTATUSCODESTRING_1_OFFSET UNITYSDK_OFFSET(0x19EF30A0)
#define SYSTEM_NET_NETRES_GETWEBSTATUSCODESTRING_OFFSET UNITYSDK_OFFSET(0x19EF2F10)
#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_1_OFFSET UNITYSDK_OFFSET(0x19EF2EB0)
#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x19EF2E10)
#define SYSTEM_NET_NETRES__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF2E00)

namespace System::Net
{
	inline static constexpr unsigned int NetRes_TypeDefinitionIndex = 3383;

	class NetRes : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES__CTOR_OFFSET))(this);
		}

		static ::System::String* GetWebStatusString(::System::String* Res, ::System::Net::WebExceptionStatus Status)
		{
			return ((::System::String*(*)(::System::String*, ::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET))(Res, Status);
		}

		static ::System::String* GetWebStatusString_1(::System::Net::WebExceptionStatus Status)
		{
			return ((::System::String*(*)(::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_1_OFFSET))(Status);
		}

		static ::System::String* GetWebStatusCodeString(::System::Net::HttpStatusCode statusCode, ::System::String* statusDescription)
		{
			return ((::System::String*(*)(::System::Net::HttpStatusCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSCODESTRING_OFFSET))(statusCode, statusDescription);
		}

		static ::System::String* GetWebStatusCodeString_1(::System::Net::FtpStatusCode statusCode, ::System::String* statusDescription)
		{
			return ((::System::String*(*)(::System::Net::FtpStatusCode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSCODESTRING_1_OFFSET))(statusCode, statusDescription);
		}
	};
}
