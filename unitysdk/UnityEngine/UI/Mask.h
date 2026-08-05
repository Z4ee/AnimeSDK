#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F100870)
#define UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F0FF030)
#define UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F0FEBD0)
#define UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F0FECB0)
#define UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1F1006B0)
#define UNITYENGINE_UI_MASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x1F0FF160)
#define UNITYENGINE_UI_MASK_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1F101A40)
#define UNITYENGINE_UI_MASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F0FFE50)
#define UNITYENGINE_UI_MASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F0FF440)
#define UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x1F0FF400)
#define UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F0FECC0)
#define UNITYENGINE_UI_MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FF110)
#define UNITYENGINE_UI_MASK___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F101A90)
#define UNITYENGINE_UI_MASK___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F101B20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Mask_TypeDefinitionIndex = 19266;

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
