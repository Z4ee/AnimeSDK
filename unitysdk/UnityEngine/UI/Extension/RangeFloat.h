#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/Range_1.h"

#define UNITYENGINE_UI_EXTENSION_RANGEFLOAT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE4B8F0)
#define UNITYENGINE_UI_EXTENSION_RANGEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4B8B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RangeFloat_TypeDefinitionIndex = 63284;

	class RangeFloat : public ::UnityEngine::UI::Extension::Range_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RANGEFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single start, ::System::Single end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RANGEFLOAT__CTOR_1_OFFSET))(this, start, end);
		}
	};
}
