#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int IgnoreFormatter_1_TypeDefinitionIndex = 85755;

	template <typename T>
	class IgnoreFormatter_1 : public ::System::Object
	{
	public:
	};
}
