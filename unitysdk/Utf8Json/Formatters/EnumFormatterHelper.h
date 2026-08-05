#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define UTF8JSON_FORMATTERS_ENUMFORMATTERHELPER_GETDESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1FAB20C0)
#define UTF8JSON_FORMATTERS_ENUMFORMATTERHELPER_GETSERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1FAB1B20)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int EnumFormatterHelper_TypeDefinitionIndex = 95256;

	class EnumFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Object* GetSerializeDelegate(::System::Type* type, ::System::Boolean& isBoxed)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ENUMFORMATTERHELPER_GETSERIALIZEDELEGATE_OFFSET))(type, isBoxed);
		}

		static ::System::Object* GetDeserializeDelegate(::System::Type* type, ::System::Boolean& isBoxed)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_ENUMFORMATTERHELPER_GETDESERIALIZEDELEGATE_OFFSET))(type, isBoxed);
		}
	};
}
