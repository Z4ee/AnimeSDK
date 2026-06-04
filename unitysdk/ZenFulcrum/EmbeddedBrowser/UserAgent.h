#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1B50B550)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0x1B50B780)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1B50B6F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50B830)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int UserAgent_TypeDefinitionIndex = 36628;

	class UserAgent : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_agentOverride()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserAgent_TypeDefinitionIndex)->GetStaticField(0x65D90);
		}
		static ::System::String** StaticGet_s_strAgentAppendSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserAgent_TypeDefinitionIndex)->GetStaticField(0x65D98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT__CTOR_OFFSET))(this);
		}

		static ::System::String* GetUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_GETUSERAGENT_OFFSET))();
		}

		static ::System::Void SetUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void SetUserAgentAppend(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENTAPPEND_OFFSET))(a1);
		}
	};
}
