#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableFormatter_1_TypeDefinitionIndex = 95266;

	template <typename T>
	class NullableFormatter_1 : public ::System::Object
	{
	public:
	};
}
