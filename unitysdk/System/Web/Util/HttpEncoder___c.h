#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Web::Util { class HttpEncoder; }

#define SYSTEM_WEB_UTIL_HTTPENCODER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18780310)
#define SYSTEM_WEB_UTIL_HTTPENCODER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18780350)
#define SYSTEM_WEB_UTIL_HTTPENCODER___C___CCTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x18780360)

namespace System::Web::Util
{
	inline static constexpr unsigned int HttpEncoder___c_TypeDefinitionIndex = 2655;

	class HttpEncoder___c : public ::System::Object
	{
	public:
		static ::System::Web::Util::HttpEncoder___c** StaticGet___9()
		{
			return (::System::Web::Util::HttpEncoder___c**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder___c_TypeDefinitionIndex)->GetStaticField(0xDD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER___C__CTOR_OFFSET))(this);
		}

		::System::Web::Util::HttpEncoder* __cctor_b__13_0()
		{
			return ((::System::Web::Util::HttpEncoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER___C___CCTOR_B__13_0_OFFSET))(this);
		}
	};
}
