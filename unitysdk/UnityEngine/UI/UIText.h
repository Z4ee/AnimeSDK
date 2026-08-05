#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UILocalizationText.h"

#define UNITYENGINE_UI_UITEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1515A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UIText_TypeDefinitionIndex = 56429;

	class UIText : public ::UnityEngine::UI::Extension::UILocalizationText
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UITEXT__CTOR_OFFSET))(this);
		}
	};
}
