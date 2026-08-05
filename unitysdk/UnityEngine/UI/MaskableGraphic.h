#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class MaskableGraphic_CullStateChangedEvent; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class SmoothMask; }

#define UNITYENGINE_UI_MASKABLEGRAPHIC_COPYMATERIALMASKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1EAF93F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET UNITYSDK_OFFSET(0x1EAF9C50)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EAE7BB0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_INVERTMASK_OFFSET UNITYSDK_OFFSET(0x1EAF92A0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EAF9330)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET UNITYSDK_OFFSET(0x1EAF9210)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1EAF91F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1EAF9DF0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1EAF93A0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EAFACA0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EAFAAD0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EAFA6A0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EAFABE0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_PARENTMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1EAFAC60)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1EAFAD20)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATEMASKING_OFFSET UNITYSDK_OFFSET(0x1EAFAD70)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATESMOOTHMASKING_OFFSET UNITYSDK_OFFSET(0x1EAFAE20)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x1EAFA590)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1EAFA630)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_INVERTMASK_OFFSET UNITYSDK_OFFSET(0x1EAF92B0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EAF9340)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET UNITYSDK_OFFSET(0x1EAF9220)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1EAF9200)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAFAF30)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECLIPPARENT_OFFSET UNITYSDK_OFFSET(0x1EAFA720)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET UNITYSDK_OFFSET(0x1EAFA490)
#define UNITYENGINE_UI_MASKABLEGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFAE80)
#define UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EAFAF80)
#define UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EAFAFA0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EAFAFB0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EAFAF90)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_TypeDefinitionIndex = 19268;

	class MaskableGraphic : public ::UnityEngine::UI::Graphic
	{
	public:
		::System::Boolean m_ShouldRecalculateStencil; // 0xA8
		::UnityEngine::Material* m_MaskMaterial; // 0xB0
		::System::Boolean m_ShouldRecalculateSmoothMask; // 0xB8
		::UnityEngine::Material* m_SmoothMaskMaterial; // 0xC0
		::UnityEngine::UI::SmoothMask* m_SmoothMask; // 0xC8
		::UnityEngine::UI::RectMask2D* m_ParentMask; // 0xD0
		::System::Boolean m_Maskable; // 0xD8
		::System::Boolean m_InvertMask; // 0xD9
		::System::Boolean m_IsMaskingGraphic; // 0xDA
		::System::Boolean m_IncludeForMasking; // 0xDB
		::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* m_OnCullStateChanged; // 0xE0
		::System::Boolean m_ShouldRecalculate; // 0xE8
		::System::Int32 m_StencilValue; // 0xEC
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0xF0

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

		::System::Boolean get_invertMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_INVERTMASK_OFFSET))(this);
		}

		::System::Void set_invertMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_INVERTMASK_OFFSET))(this, value);
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

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void CopyMaterialMaskParameters(::UnityEngine::Material* from, ::UnityEngine::Material* to)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_COPYMATERIALMASKPARAMETERS_OFFSET))(this, from, to);
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

		::System::Void SetClipSoftness(::UnityEngine::Vector2 clipSoftness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET))(this, clipSoftness);
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

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
