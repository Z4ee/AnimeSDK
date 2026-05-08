#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/TermID.h"

namespace System { class String; }

inline static constexpr unsigned int TermFeatureTestProvider_Entry_TypeDefinitionIndex = 40579;

struct alignas(8) TermFeatureTestProvider_Entry
{
	::UnityEngine::UI::Extension::TermID id; // 0x10
	::System::String* displayText; // 0x18
	::System::String* color; // 0x20
	::System::Boolean hasUnderline; // 0x28
	::System::Boolean hasLink; // 0x29
};
