#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_1_OFFSET UNITYSDK_OFFSET(0x186D09A0)
#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x186CEEE0)

namespace System::Net
{
	inline static constexpr unsigned int NetRes_TypeDefinitionIndex = 2770;

	class NetRes : public ::System::Object
	{
	public:
		static ::System::String* GetWebStatusString(::System::String* Res, ::System::Net::WebExceptionStatus Status)
		{
			return ((::System::String*(*)(::System::String*, ::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET))(Res, Status);
		}

		static ::System::String* GetWebStatusString_1(::System::Net::WebExceptionStatus Status)
		{
			return ((::System::String*(*)(::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_1_OFFSET))(Status);
		}
	};
}
