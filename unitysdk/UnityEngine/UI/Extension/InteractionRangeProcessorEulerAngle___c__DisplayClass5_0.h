#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class InteractionRangeProcessorEulerAngle; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE6010)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___C__DISPLAYCLASS5_0__GOTOVAL_B__0_OFFSET UNITYSDK_OFFSET(0x18AE6020)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___C__DISPLAYCLASS5_0__GOTOVAL_B__1_OFFSET UNITYSDK_OFFSET(0x18AE6110)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorEulerAngle___c__DisplayClass5_0_TypeDefinitionIndex = 78038;

	class InteractionRangeProcessorEulerAngle___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::InteractionRangeProcessorEulerAngle* __4__this; // 0x10
		::System::Single curRotAngle; // 0x18
		::System::Single targetAngle; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoToVal_b__0(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___C__DISPLAYCLASS5_0__GOTOVAL_B__0_OFFSET))(this, v);
		}

		::System::Void _GoToVal_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___C__DISPLAYCLASS5_0__GOTOVAL_B__1_OFFSET))(this);
		}
	};
}
