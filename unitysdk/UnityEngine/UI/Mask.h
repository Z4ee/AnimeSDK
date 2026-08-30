#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1772C450)
#define UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1772B870)
#define UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1772B6B0)
#define UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1772B750)
#define UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1772C2B0)
#define UNITYENGINE_UI_MASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0x1772B900)
#define UNITYENGINE_UI_MASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1772BE90)
#define UNITYENGINE_UI_MASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1772B9B0)
#define UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x1772B9A0)
#define UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1772B760)
#define UNITYENGINE_UI_MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1772B8F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Mask_TypeDefinitionIndex = 6783;

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

		::System::Void set_showMaskGraphic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET))(this, a1);
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

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}
	};
}
