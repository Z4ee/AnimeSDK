#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class IClippable; }
namespace UnityEngine::UI { class MaskableGraphic; }
namespace UnityEngine::UI { class RectangularVertexClipper; }

#define UNITYENGINE_UI_RECTMASK2D_ADDCLIPPABLE_OFFSET UNITYSDK_OFFSET(0x1EF352F0)
#define UNITYENGINE_UI_RECTMASK2D_GETSHOULDDISABLECULLING_OFFSET UNITYSDK_OFFSET(0x1EF33CB0)
#define UNITYENGINE_UI_RECTMASK2D_GET_CANVASRECT_OFFSET UNITYSDK_OFFSET(0x1EF32E90)
#define UNITYENGINE_UI_RECTMASK2D_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1EF32C00)
#define UNITYENGINE_UI_RECTMASK2D_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1EF32B10)
#define UNITYENGINE_UI_RECTMASK2D_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EF33010)
#define UNITYENGINE_UI_RECTMASK2D_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1EF337F0)
#define UNITYENGINE_UI_RECTMASK2D_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1EF32B80)
#define UNITYENGINE_UI_RECTMASK2D_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1EF33580)
#define UNITYENGINE_UI_RECTMASK2D_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EF357C0)
#define UNITYENGINE_UI_RECTMASK2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EF33410)
#define UNITYENGINE_UI_RECTMASK2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EF33390)
#define UNITYENGINE_UI_RECTMASK2D_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EF35750)
#define UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPINGIMPLDEFAULT_OFFSET UNITYSDK_OFFSET(0x1EF349B0)
#define UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPINGIMPLFAST_OFFSET UNITYSDK_OFFSET(0x1EF33FC0)
#define UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPING_OFFSET UNITYSDK_OFFSET(0x1EF33CF0)
#define UNITYENGINE_UI_RECTMASK2D_REMOVECLIPPABLE_OFFSET UNITYSDK_OFFSET(0x1EF35510)
#define UNITYENGINE_UI_RECTMASK2D_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1EF32B20)
#define UNITYENGINE_UI_RECTMASK2D_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1EF32B90)
#define UNITYENGINE_UI_RECTMASK2D_UPDATECLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1EF34FE0)
#define UNITYENGINE_UI_RECTMASK2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF35840)
#define UNITYENGINE_UI_RECTMASK2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF330F0)
#define UNITYENGINE_UI_RECTMASK2D___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EF35850)
#define UNITYENGINE_UI_RECTMASK2D___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EF358E0)
#define UNITYENGINE_UI_RECTMASK2D___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EF35970)
#define UNITYENGINE_UI_RECTMASK2D___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EF35A00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectMask2D_TypeDefinitionIndex = 19279;

	class RectMask2D : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_OptimizeClipping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RectMask2D_TypeDefinitionIndex)->GetStaticField(0x4410);
		}
		::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper; // 0x18
		::UnityEngine::RectTransform* m_RectTransform; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets; // 0x28
		::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* m_ClipTargets; // 0x30
		::System::Boolean m_ShouldRecalculateClipRects; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* m_Clippers; // 0x40
		::UnityEngine::Rect m_LastClipRectCanvasSpace; // 0x48
		::UnityEngine::Vector2Int m_LastSoftness; // 0x58
		::System::Boolean m_LastOptimizeClipping; // 0x60
		::System::Boolean m_ForceClip; // 0x61
		::UnityEngine::Vector4 m_Padding; // 0x64
		::UnityEngine::Vector2Int m_Softness; // 0x74
		::UnityEngine::Canvas* m_Canvas; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector4 get_padding()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_PADDING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int get_softness()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_softness(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_SOFTNESS_OFFSET))(this, value);
		}

		::UnityEngine::Canvas* get_Canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_CANVAS_OFFSET))(this);
		}

		::UnityEngine::Rect get_canvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_CANVASRECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera);
		}

		::UnityEngine::Rect get_rootCanvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_ROOTCANVASRECT_OFFSET))(this);
		}

		::System::Boolean GetShouldDisableCulling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GETSHOULDDISABLECULLING_OFFSET))(this);
		}

		::System::Void PerformClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPING_OFFSET))(this);
		}

		::System::Void PerformClippingImplFast(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPINGIMPLFAST_OFFSET))(this, clipRect, validRect);
		}

		::System::Void PerformClippingImplDefault(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPINGIMPLDEFAULT_OFFSET))(this, clipRect, validRect);
		}

		::System::Void UpdateClipSoftness()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_UPDATECLIPSOFTNESS_OFFSET))(this);
		}

		::System::Void AddClippable(::UnityEngine::UI::IClippable* clippable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::IClippable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ADDCLIPPABLE_OFFSET))(this, clippable);
		}

		::System::Void RemoveClippable(::UnityEngine::UI::IClippable* clippable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::IClippable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_REMOVECLIPPABLE_OFFSET))(this, clippable);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
