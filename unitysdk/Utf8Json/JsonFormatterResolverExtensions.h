#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"

namespace System { class Type; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_JSONFORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1E6CF920)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonFormatterResolverExtensions_TypeDefinitionIndex = 91076;

	class JsonFormatterResolverExtensions : public ::System::Object
	{
	public:
		static ::System::Object* GetFormatterDynamic(::Utf8Json::IJsonFormatterResolver* resolver, ::System::Type* type)
		{
			return ((::System::Object*(*)(::Utf8Json::IJsonFormatterResolver*, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMIC_OFFSET))(resolver, type);
		}
	};
}
