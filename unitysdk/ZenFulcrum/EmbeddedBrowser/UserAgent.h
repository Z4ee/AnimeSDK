#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x18C92D00)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x18C92F10)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C92F90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int UserAgent_TypeDefinitionIndex = 30608;

	class UserAgent : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_agentOverride()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserAgent_TypeDefinitionIndex)->GetStaticField(0x36860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT__CTOR_OFFSET))(this);
		}

		static ::System::String* GetUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_GETUSERAGENT_OFFSET))();
		}

		static ::System::Void SetUserAgent(::System::String* userAgent)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENT_OFFSET))(userAgent);
		}
	};
}
