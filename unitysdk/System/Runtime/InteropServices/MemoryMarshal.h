#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x1851C7A0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MemoryMarshal_TypeDefinitionIndex = 4983;

	class MemoryMarshal : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetString(::System::ReadOnlyMemory_1<::System::Char> memory, ::System::String*& text, ::System::Int32& start, ::System::Int32& length)
		{
			return ((::System::Boolean(*)(::System::ReadOnlyMemory_1<::System::Char>, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET))(memory, text, start, length);
		}
	};
}
