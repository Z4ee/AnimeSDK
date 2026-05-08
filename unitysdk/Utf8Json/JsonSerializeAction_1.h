#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializeAction_1_TypeDefinitionIndex = 85493;

	template <typename T>
	class JsonSerializeAction_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
