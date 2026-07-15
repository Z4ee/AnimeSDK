#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class MemoryManager_1; }

namespace System
{
	inline static constexpr unsigned int Memory_1_TypeDefinitionIndex = 4948;

	template <typename T>
	struct Memory_1
	{
		::System::Object* _object; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
	};
}
