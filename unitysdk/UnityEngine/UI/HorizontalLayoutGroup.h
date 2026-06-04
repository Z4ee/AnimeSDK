#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/HorizontalOrVerticalLayoutGroup.h"

#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3A2060)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3A24F0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3A2500)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3A3040)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A1F00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalLayoutGroup_TypeDefinitionIndex = 5930;

	class HorizontalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}
	};
}
