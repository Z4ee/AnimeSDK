#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E993870)

namespace System::Net
{
	inline static constexpr unsigned int HttpVersion_TypeDefinitionIndex = 2739;

	class HttpVersion : public ::System::Object
	{
	public:
		static ::System::Version** StaticGet_Version11()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0xA200);
		}
		static ::System::Version** StaticGet_Version10()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0xA208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET))();
		}
	};
}
