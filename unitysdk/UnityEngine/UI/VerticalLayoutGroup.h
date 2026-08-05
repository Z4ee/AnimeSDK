#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/HorizontalOrVerticalLayoutGroup.h"

#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E6C9EC0)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E6CA010)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E6CA160)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E6CA2B0)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C9EA0)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E6CA400)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VerticalLayoutGroup_TypeDefinitionIndex = 19265;

	class VerticalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void __base_CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}
	};
}
