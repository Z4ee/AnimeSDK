#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class InteractionRangeProcessorFloat; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA6840)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___C__DISPLAYCLASS3_0__GOTOVAL_B__0_OFFSET UNITYSDK_OFFSET(0x12AA6850)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___C__DISPLAYCLASS3_0__GOTOVAL_B__1_OFFSET UNITYSDK_OFFSET(0x12AA68C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorFloat___c__DisplayClass3_0_TypeDefinitionIndex = 57448;

	class InteractionRangeProcessorFloat___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::InteractionRangeProcessorFloat* __4__this; // 0x10
		::System::Single targetPos; // 0x18
		::System::Single curPos; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoToVal_b__0(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___C__DISPLAYCLASS3_0__GOTOVAL_B__0_OFFSET))(this, v);
		}

		::System::Void _GoToVal_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___C__DISPLAYCLASS3_0__GOTOVAL_B__1_OFFSET))(this);
		}
	};
}
