#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B409C0)
#define UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x18B3FE90)
#define UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B3FD50)
#define UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x18B3FDD0)
#define UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x18B40850)
#define UNITYENGINE_UI_MASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x18B3FF20)
#define UNITYENGINE_UI_MASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B40490)
#define UNITYENGINE_UI_MASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B3FFD0)
#define UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x18B3FFC0)
#define UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x18B3FDE0)
#define UNITYENGINE_UI_MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3FF10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Mask_TypeDefinitionIndex = 5659;

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
	};
}
