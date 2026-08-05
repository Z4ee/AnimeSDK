#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/UIText.h"

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E832690)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgText_TypeDefinitionIndex = 80702;

	class UIImgText : public ::UnityEngine::UI::UIText
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__CTOR_OFFSET))(this);
		}
	};
}
