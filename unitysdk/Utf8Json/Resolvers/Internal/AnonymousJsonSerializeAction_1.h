#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AnonymousJsonSerializeAction_1_TypeDefinitionIndex = 85591;

	template <typename T>
	class AnonymousJsonSerializeAction_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
