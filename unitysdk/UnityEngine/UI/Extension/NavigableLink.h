#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NavigableLink_TypeDefinitionIndex = 65704;

	struct alignas(8) NavigableLink
	{
		::UnityEngine::UI::Extension::UILocalizationText* text; // 0x10
		::System::Int32 linkIndex; // 0x18
		::System::String* linkId; // 0x20
		::UnityEngine::Rect firstBound; // 0x28
		::UnityEngine::Rect lastBound; // 0x38
		::UnityEngine::Rect worldRect; // 0x48
		::System::Int32 dataIndex; // 0x58
	};
}
