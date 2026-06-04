#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class MaskableGraphic_CullStateChangedEvent; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class SmoothMask; }

#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET UNITYSDK_OFFSET(0x1B3CC640)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B3B3A20)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3CC630)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET UNITYSDK_OFFSET(0x1B3CC370)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3CC300)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1B3CC770)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_SMOOTHMASKABLE_OFFSET UNITYSDK_OFFSET(0x1B3CC5F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3AD080)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3ACB00)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3AC8C0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3CCFE0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_PARENTMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3CD080)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1B3CD270)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATEMASKING_OFFSET UNITYSDK_OFFSET(0x1B3CAAD0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATESMOOTHMASKING_OFFSET UNITYSDK_OFFSET(0x1B3CAEC0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x1B3CCE70)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1B3CCF40)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3C8B00)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET UNITYSDK_OFFSET(0x1B3CC380)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3CC360)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_SMOOTHMASKABLE_OFFSET UNITYSDK_OFFSET(0x1B3CC600)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3CD280)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECLIPPARENT_OFFSET UNITYSDK_OFFSET(0x1B3CC4A0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET UNITYSDK_OFFSET(0x1B3CCD10)
#define UNITYENGINE_UI_MASKABLEGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A4A30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_TypeDefinitionIndex = 5950;

	class MaskableGraphic : public ::UnityEngine::UI::Graphic
	{
	public:
		::System::Boolean m_ShouldRecalculateStencil; // 0xA0
		::UnityEngine::Material* m_MaskMaterial; // 0xA8
		::UnityEngine::UI::RectMask2D* m_ParentMask; // 0xB0
		::System::Boolean m_ShouldRecalculateSmoothMask; // 0xB8
		::UnityEngine::Material* m_SmoothMaskMaterial; // 0xC0
		::UnityEngine::UI::SmoothMask* m_SmoothMask; // 0xC8
		::System::Boolean m_Maskable; // 0xD0
		::System::Boolean m_SmoothMaskable; // 0xD1
		::System::Boolean m_IsMaskingGraphic; // 0xD2
		::System::Boolean m_IncludeForMasking; // 0xD3
		::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* m_OnCullStateChanged; // 0xD8
		::System::Boolean m_ShouldRecalculate; // 0xE0
		::System::Int32 m_StencilValue; // 0xE4
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* get_onCullStateChanged()
		{
			return ((::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ONCULLSTATECHANGED_OFFSET))(this);
		}

		::System::Void set_onCullStateChanged(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_maskable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET))(this);
		}

		::System::Void set_maskable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_smoothMaskable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_SMOOTHMASKABLE_OFFSET))(this);
		}

		::System::Void set_smoothMaskable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_SMOOTHMASKABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_isMaskingGraphic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET))(this);
		}

		::System::Void set_isMaskingGraphic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET))(this, a1);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void ParentMaskStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_PARENTMASKSTATECHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::UnityEngine::Rect get_rootCanvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ROOTCANVASRECT_OFFSET))(this);
		}

		::System::Void UpdateClipParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECLIPPARENT_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void RecalculateMasking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATEMASKING_OFFSET))(this);
		}

		::System::Void RecalculateSmoothMasking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATESMOOTHMASKING_OFFSET))(this);
		}

		::UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET))(this);
		}
	};
}
