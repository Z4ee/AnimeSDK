#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_WEBEXCEPTIONMAPPING_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x19F03940)
#define SYSTEM_NET_WEBEXCEPTIONMAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F03B90)

namespace System::Net
{
	inline static constexpr unsigned int WebExceptionMapping_TypeDefinitionIndex = 2754;

	class WebExceptionMapping : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_Mapping()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebExceptionMapping_TypeDefinitionIndex)->GetStaticField(0x2E8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTIONMAPPING__CCTOR_OFFSET))();
		}

		static ::System::String* GetWebStatusString(::System::Net::WebExceptionStatus a1)
		{
			return ((::System::String*(*)(::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTIONMAPPING_GETWEBSTATUSSTRING_OFFSET))(a1);
		}
	};
}
