#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class Encoding; }

#define UTF8JSON_INTERNAL_STRINGENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB45D40)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 95175;

	class StringEncoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_UTF8()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StringEncoding_TypeDefinitionIndex)->GetStaticField(0x528C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_STRINGENCODING__CCTOR_OFFSET))();
		}
	};
}
