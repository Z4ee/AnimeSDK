#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Net { class IWebRequestCreate; }

#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT_GET_CREATOR_OFFSET UNITYSDK_OFFSET(0x19238840)
#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT_SET_CREATOR_OFFSET UNITYSDK_OFFSET(0x192389D0)
#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19238B10)
#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x192389E0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequestPrefixElement_TypeDefinitionIndex = 3315;

	class WebRequestPrefixElement : public ::System::Object
	{
	public:
		::System::String* Prefix; // 0x10
		::System::Net::IWebRequestCreate* creator; // 0x18
		::System::Type* creatorType; // 0x20

		::System::Void _ctor(::System::String* P, ::System::Type* creatorType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT__CTOR_OFFSET))(this, P, creatorType);
		}

		::System::Void _ctor_1(::System::String* P, ::System::Net::IWebRequestCreate* C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::IWebRequestCreate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT__CTOR_1_OFFSET))(this, P, C);
		}

		::System::Net::IWebRequestCreate* get_Creator()
		{
			return ((::System::Net::IWebRequestCreate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT_GET_CREATOR_OFFSET))(this);
		}

		::System::Void set_Creator(::System::Net::IWebRequestCreate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebRequestCreate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT_SET_CREATOR_OFFSET))(this, value);
		}
	};
}
