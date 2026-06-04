#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF70CD0)
#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x1AF6F1F0)

namespace System::Net
{
	inline static constexpr unsigned int NetRes_TypeDefinitionIndex = 2771;

	class NetRes : public ::System::Object
	{
	public:
		static ::System::String* GetWebStatusString(::System::String* a1, ::System::Net::WebExceptionStatus a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetWebStatusString_1(::System::Net::WebExceptionStatus a1)
		{
			return ((::System::String*(*)(::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_1_OFFSET))(a1);
		}
	};
}
