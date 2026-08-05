#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class Type; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int StaticNullableFormatter_1_TypeDefinitionIndex = 95267;

	template <typename T>
	class StaticNullableFormatter_1 : public ::System::Object
	{
	public:
		::Utf8Json::IJsonFormatter_1<T>* underlyingFormatter; // 0x0
	};
}
