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

#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET UNITYSDK_OFFSET(0x1A57E750)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A567530)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1A57E740)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET UNITYSDK_OFFSET(0x1A57E460)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A57E3F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1A57E880)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_SMOOTHMASKABLE_OFFSET UNITYSDK_OFFSET(0x1A57E6F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A560730)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A5601C0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A55FF80)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A57F130)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_PARENTMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A57F1D0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1A57F3B0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATEMASKING_OFFSET UNITYSDK_OFFSET(0x1A57D2F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATESMOOTHMASKING_OFFSET UNITYSDK_OFFSET(0x1A57D4C0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x1A57EFC0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1A57F090)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1A57BAD0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET UNITYSDK_OFFSET(0x1A57E470)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A57E450)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_SMOOTHMASKABLE_OFFSET UNITYSDK_OFFSET(0x1A57E700)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A57F3C0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECLIPPARENT_OFFSET UNITYSDK_OFFSET(0x1A57E5A0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET UNITYSDK_OFFSET(0x1A57EE50)
#define UNITYENGINE_UI_MASKABLEGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A558010)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_TypeDefinitionIndex = 5673;

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

		::System::Void set_onCullStateChanged(::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_maskable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET))(this);
		}

		::System::Void set_maskable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET))(this, value);
		}

		::System::Boolean get_smoothMaskable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_SMOOTHMASKABLE_OFFSET))(this);
		}

		::System::Void set_smoothMaskable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_SMOOTHMASKABLE_OFFSET))(this, value);
		}

		::System::Boolean get_isMaskingGraphic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET))(this);
		}

		::System::Void set_isMaskingGraphic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET))(this, value);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET))(this, clipRect, validRect);
		}

		::System::Void UpdateCull(::System::Boolean cull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET))(this, cull);
		}

		::System::Void SetClipRect(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET))(this, clipRect, validRect);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector4 clipSoftness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET))(this, clipSoftness);
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
