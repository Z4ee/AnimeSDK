#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class JsonSerializeAction_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int EnumFormatter_1___c__DisplayClass4_1_TypeDefinitionIndex = 91327;

	template <typename T>
	class EnumFormatter_1___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::Utf8Json::JsonSerializeAction_1<::System::Object*>* boxSerialize; // 0x0
	};
}
