#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyTagParams.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_RubyPreferredHeightInput_TypeDefinitionIndex = 74237;

	struct alignas(8) RubyFeature_RubyPreferredHeightInput
	{
		::System::String* annotation; // 0x10
		::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams; // 0x18
		::System::Int32 lineIndex; // 0x40
		::System::Single baseWidth; // 0x44
	};
}
