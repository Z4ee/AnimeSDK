#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x1ADCC670)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SequenceMarshal_TypeDefinitionIndex = 4966;

	class SequenceMarshal : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetString(::System::Buffers::ReadOnlySequence_1<::System::Char> a1, ::System::String*& a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::Buffers::ReadOnlySequence_1<::System::Char>, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET))(a1, a2, a3, a4);
		}
	};
}
