#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TermData_TypeDefinitionIndex = 69261;

	struct alignas(8) TermData
	{
		::System::String* displayText; // 0x10
		::System::String* color; // 0x18
		::System::Boolean hasUnderline; // 0x20
		::System::Boolean hasLink; // 0x21
		::System::String* interactiveNounsTitle; // 0x28
		::System::String* suffix; // 0x30
		::System::String* suffixColor; // 0x38
		::System::String* prompts; // 0x40
		::System::String* source; // 0x48
		::System::String* markColor; // 0x50
	};
}
