#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x1BA1E580)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SequenceMarshal_TypeDefinitionIndex = 7559;

	class SequenceMarshal : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetString(::System::Buffers::ReadOnlySequence_1<::System::Char> sequence, ::System::String*& text, ::System::Int32& start, ::System::Int32& length)
		{
			return ((::System::Boolean(*)(::System::Buffers::ReadOnlySequence_1<::System::Char>, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET))(sequence, text, start, length);
		}
	};
}
