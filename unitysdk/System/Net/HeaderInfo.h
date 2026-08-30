#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HeaderParser; }

#define SYSTEM_NET_HEADERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B026BF0)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 2776;

	class HeaderInfo : public ::System::Object
	{
	public:
		::System::String* HeaderName; // 0x10
		::System::Net::HeaderParser* Parser; // 0x18
		::System::Boolean IsRequestRestricted; // 0x20
		::System::Boolean IsResponseRestricted; // 0x21
		::System::Boolean AllowMultiValues; // 0x22

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Net::HeaderParser* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Net::HeaderParser*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
