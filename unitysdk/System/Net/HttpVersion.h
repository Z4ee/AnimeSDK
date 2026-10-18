#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F05C4C0)

namespace System::Net
{
	inline static constexpr unsigned int HttpVersion_TypeDefinitionIndex = 2739;

	class HttpVersion : public ::System::Object
	{
	public:
		static ::System::Version** StaticGet_Version10()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0xBEB0);
		}
		static ::System::Version** StaticGet_Version11()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0xBEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET))();
		}
	};
}
