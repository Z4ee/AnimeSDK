#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyMeasureResult.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyTagParams.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_RubyAnnotationRuntimeData_TypeDefinitionIndex = 74239;

	struct alignas(8) RubyFeature_RubyAnnotationRuntimeData
	{
		::System::String* annotation; // 0x10
		::System::Int32 charBeginIndex; // 0x18
		::System::Int32 charEndIndex; // 0x1C
		::System::Int32 glyphBegin; // 0x20
		::System::Int32 glyphEnd; // 0x24
		::System::Int32 lineIndex; // 0x28
		::System::Single baseWidth; // 0x2C
		::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams; // 0x30
		::UnityEngine::UI::Extension::RubyFeature_RubyMeasureResult measure; // 0x58
		::UnityEngine::Color32 color; // 0x78
		::System::Single finalBaseLeft; // 0x7C
		::System::Single finalBaseRight; // 0x80
		::System::Single finalBaseBottom; // 0x84
		::System::Single finalBaseTop; // 0x88
		::System::Boolean hasRenderAnchor; // 0x8C
	};
}
