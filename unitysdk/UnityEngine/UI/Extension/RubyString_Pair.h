#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_RUBYSTRING_PAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x661970)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyString_Pair_TypeDefinitionIndex = 40567;

	struct alignas(8) RubyString_Pair
	{
		::System::String* Str; // 0x10
		::System::String* Ruby; // 0x18
		::System::Int32 StartIndex; // 0x20

		::System::Void _ctor(::System::String* str, ::System::String* ruby, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING_PAIR__CTOR_OFFSET))(this, str, ruby, startIndex);
		}
	};
}
