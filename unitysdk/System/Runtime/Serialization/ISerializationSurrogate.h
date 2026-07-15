#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ISerializationSurrogate_TypeDefinitionIndex = 1098;

	class ISerializationSurrogate
	{
	public:
	};
}
