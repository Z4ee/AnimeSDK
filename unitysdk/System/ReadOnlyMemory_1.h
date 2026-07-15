#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace System
{
	inline static constexpr unsigned int ReadOnlyMemory_1_TypeDefinitionIndex = 4956;

	template <typename T>
	struct ReadOnlyMemory_1
	{
		::System::Object* _object; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
	};
}
