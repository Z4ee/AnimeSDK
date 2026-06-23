#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int LinkClickInfo_TypeDefinitionIndex = 77696;

	struct alignas(8) LinkClickInfo
	{
		::System::String* LinkId; // 0x10
		::UnityEngine::UI::Extension::UILocalizationText* Text; // 0x18
		::System::Int32 LinkIndex; // 0x20
		::System::String* SourceText; // 0x28
	};
}
