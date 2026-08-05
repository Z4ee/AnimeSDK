#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Utf8Json/JsonReader.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace Utf8Json { class IJsonFormatterResolver; }

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AnonymousJsonDeserializeFunc_1_TypeDefinitionIndex = 95099;

	template <typename T>
	class AnonymousJsonDeserializeFunc_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
