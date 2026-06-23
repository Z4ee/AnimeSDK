#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/HorizontalOrVerticalLayoutGroup.h"

#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E7693B0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E769A70)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E769AC0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E76A7E0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E769370)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E76A830)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalLayoutGroup_TypeDefinitionIndex = 18904;

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

		::System::Void __base_CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}
	};
}
