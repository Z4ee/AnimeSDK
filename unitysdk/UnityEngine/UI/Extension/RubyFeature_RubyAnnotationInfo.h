#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyTagParams.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_RubyAnnotationInfo_TypeDefinitionIndex = 74238;

	struct alignas(8) RubyFeature_RubyAnnotationInfo
	{
		::System::String* annotation; // 0x10
		::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams; // 0x18
		::System::Int32 leftTagIndex; // 0x40
		::System::Int32 rightTagIndex; // 0x44
		::System::Int32 charBeginIndex; // 0x48
		::System::Int32 charEndIndex; // 0x4C
		::System::Int32 rawCharBeginIndex; // 0x50
		::System::Int32 rawCharEndIndex; // 0x54
	};
}
