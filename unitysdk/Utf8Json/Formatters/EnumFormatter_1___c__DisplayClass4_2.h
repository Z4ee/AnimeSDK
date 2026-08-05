#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class JsonDeserializeFunc_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int EnumFormatter_1___c__DisplayClass4_2_TypeDefinitionIndex = 95261;

	template <typename T>
	class EnumFormatter_1___c__DisplayClass4_2 : public ::System::Object
	{
	public:
		::Utf8Json::JsonDeserializeFunc_1<::System::Object*>* boxDeserialize; // 0x0
	};
}
