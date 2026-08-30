#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class CultureInfo; }

#define SYSTEM_WEB_UTIL_HELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x182CA870)

namespace System::Web::Util
{
	inline static constexpr unsigned int Helpers_TypeDefinitionIndex = 2665;

	class Helpers : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_InvariantCulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(Helpers_TypeDefinitionIndex)->GetStaticField(0x29F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HELPERS__CCTOR_OFFSET))();
		}
	};
}
