#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_912E0458D58825D3_Class_1_E23FBD37533CCEFB.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgTextIconUtils_EIconType.h"

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR_ADDICON_OFFSET UNITYSDK_OFFSET(0x1C14D280)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14D380)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils_Generator_TypeDefinitionIndex = 41165;

	class UIImgTextIconUtils_Generator : public ::Class_1_912E0458D58825D3_Class_1_E23FBD37533CCEFB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void AddIcon(::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType type, ::System::Char wildcardEnd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR_ADDICON_OFFSET))(this, type, wildcardEnd);
		}
	};
}
