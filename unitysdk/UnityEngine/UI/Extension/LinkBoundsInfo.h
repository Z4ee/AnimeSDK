#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int LinkBoundsInfo_TypeDefinitionIndex = 85318;

	struct alignas(8) LinkBoundsInfo
	{
		::System::String* linkId; // 0x10
		::System::Int32 firstGlyphIndex; // 0x18
		::System::Int32 lastGlyphIndex; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* lineBounds; // 0x20
	};
}
