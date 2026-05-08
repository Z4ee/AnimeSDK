#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B96A4A0)
#define UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B968C50)
#define UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B9687F0)
#define UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B9688D0)
#define UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1B96A2E0)
#define UNITYENGINE_UI_MASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x1B968D80)
#define UNITYENGINE_UI_MASK_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1B96B710)
#define UNITYENGINE_UI_MASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B969A80)
#define UNITYENGINE_UI_MASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B969060)
#define UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x1B969020)
#define UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B9688E0)
#define UNITYENGINE_UI_MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B968D30)
#define UNITYENGINE_UI_MASK___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B96B760)
#define UNITYENGINE_UI_MASK___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B96B7F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Mask_TypeDefinitionIndex = 8416;

	class Mask : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* m_RectTransform; // 0x18
		::System::Boolean m_ShowMaskGraphic; // 0x20
		::UnityEngine::UI::Graphic* m_Graphic; // 0x28
		::UnityEngine::Material* m_MaskMaterial; // 0x30
		::UnityEngine::Material* m_UnmaskMaterial; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_showMaskGraphic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET))(this);
		}

		::System::Void set_showMaskGraphic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET))(this, value);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Boolean MaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_MASKENABLED_OFFSET))(this);
		}

		::System::Void OnSiblingGraphicEnabledDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
