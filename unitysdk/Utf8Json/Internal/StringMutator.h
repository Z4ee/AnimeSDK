#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UTF8JSON_INTERNAL_STRINGMUTATOR_ORIGINAL_OFFSET UNITYSDK_OFFSET(0x1E7EDEE0)
#define UTF8JSON_INTERNAL_STRINGMUTATOR_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x1E7EDEF0)
#define UTF8JSON_INTERNAL_STRINGMUTATOR_TOSNAKECASE_OFFSET UNITYSDK_OFFSET(0x1E7EE070)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int StringMutator_TypeDefinitionIndex = 91243;

	class StringMutator : public ::System::Object
	{
	public:
		static ::System::String* Original(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_STRINGMUTATOR_ORIGINAL_OFFSET))(s);
		}

		static ::System::String* ToCamelCase(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_STRINGMUTATOR_TOCAMELCASE_OFFSET))(s);
		}

		static ::System::String* ToSnakeCase(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_STRINGMUTATOR_TOSNAKECASE_OFFSET))(s);
		}
	};
}
