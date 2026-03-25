#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HeaderParser; }

#define SYSTEM_NET_HEADERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186DC2F0)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 2764;

	class HeaderInfo : public ::System::Object
	{
	public:
		::System::Net::HeaderParser* Parser; // 0x10
		::System::String* HeaderName; // 0x18
		::System::Boolean IsResponseRestricted; // 0x20
		::System::Boolean AllowMultiValues; // 0x21
		::System::Boolean IsRequestRestricted; // 0x22

		::System::Void _ctor(::System::String* name, ::System::Boolean requestRestricted, ::System::Boolean responseRestricted, ::System::Boolean multi, ::System::Net::HeaderParser* p)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Net::HeaderParser*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFO__CTOR_OFFSET))(this, name, requestRestricted, responseRestricted, multi, p);
		}
	};
}
