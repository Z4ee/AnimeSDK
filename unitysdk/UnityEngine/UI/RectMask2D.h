#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/RectMask2D_SoftType.h"
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

#define UNITYENGINE_UI_RECTMASK2D_ADDCLIPPABLE_OFFSET UNITYSDK_OFFSET(0x1A57F300)
#define UNITYENGINE_UI_RECTMASK2D_GET_CANVASRECT_OFFSET UNITYSDK_OFFSET(0x1A5883E0)
#define UNITYENGINE_UI_RECTMASK2D_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1A5882F0)
#define UNITYENGINE_UI_RECTMASK2D_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A5880F0)
#define UNITYENGINE_UI_RECTMASK2D_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A5884A0)
#define UNITYENGINE_UI_RECTMASK2D_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1A5892E0)
#define UNITYENGINE_UI_RECTMASK2D_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1A588110)
#define UNITYENGINE_UI_RECTMASK2D_GET_SOFTTYPE_OFFSET UNITYSDK_OFFSET(0x1A5882D0)
#define UNITYENGINE_UI_RECTMASK2D_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1A5891A0)
#define UNITYENGINE_UI_RECTMASK2D_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A58B320)
#define UNITYENGINE_UI_RECTMASK2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A588EB0)
#define UNITYENGINE_UI_RECTMASK2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A588E20)
#define UNITYENGINE_UI_RECTMASK2D_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A58B310)
#define UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPING_OFFSET UNITYSDK_OFFSET(0x1A5896E0)
#define UNITYENGINE_UI_RECTMASK2D_REMOVECLIPPABLE_OFFSET UNITYSDK_OFFSET(0x1A57F1E0)
#define UNITYENGINE_UI_RECTMASK2D_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A588100)
#define UNITYENGINE_UI_RECTMASK2D_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1A588160)
#define UNITYENGINE_UI_RECTMASK2D_SET_SOFTTYPE_OFFSET UNITYSDK_OFFSET(0x1A5882E0)
#define UNITYENGINE_UI_RECTMASK2D_UPDATECLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1A58AF80)
#define UNITYENGINE_UI_RECTMASK2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A588C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectMask2D_TypeDefinitionIndex = 5686;

	class RectMask2D : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper; // 0x18
		::UnityEngine::RectTransform* m_RectTransform; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets; // 0x28
		::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* m_ClipTargets; // 0x30
		::System::Boolean m_ShouldRecalculateClipRects; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* m_Clippers; // 0x40
		::UnityEngine::Rect m_LastClipRectCanvasSpace; // 0x48
		::System::Boolean m_ForceClip; // 0x58
		::UnityEngine::Vector4 m_Padding; // 0x5C
		::UnityEngine::Vector2Int m_Softness; // 0x6C
		::UnityEngine::UI::RectMask2D_SoftType m_SoftType; // 0x74
		::UnityEngine::Canvas* m_Canvas; // 0x78
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_padding()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_PADDING_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_softness()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_softness(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_SOFTNESS_OFFSET))(this, value);
		}

		::UnityEngine::UI::RectMask2D_SoftType get_softType()
		{
			return ((::UnityEngine::UI::RectMask2D_SoftType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_SOFTTYPE_OFFSET))(this);
		}

		::System::Void set_softType(::UnityEngine::UI::RectMask2D_SoftType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RectMask2D_SoftType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_SOFTTYPE_OFFSET))(this, value);
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

		::System::Void PerformClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPING_OFFSET))(this);
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
	};
}
