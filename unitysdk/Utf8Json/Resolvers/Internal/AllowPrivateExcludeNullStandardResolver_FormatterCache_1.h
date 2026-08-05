#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AllowPrivateExcludeNullStandardResolver_FormatterCache_1_TypeDefinitionIndex = 95143;

	template <typename T>
	class AllowPrivateExcludeNullStandardResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatter_1<T>** StaticGet_formatter()
		{
			return (::Utf8Json::IJsonFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateExcludeNullStandardResolver_FormatterCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
