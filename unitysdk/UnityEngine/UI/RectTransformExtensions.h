#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_ANCHORALLOWEDOUTSIDEPARENT_OFFSET UNITYSDK_OFFSET(0x18C71580)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_ANCHOREDTOLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18C71BA0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_CALRECTWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0x18C6F510)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_CALSIZEWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0x18C6F020)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_FINDROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x18C6E030)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C6E7E0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETMINMAXBYWORLD_OFFSET UNITYSDK_OFFSET(0x18C6DCE0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETRECTREFERENCECORNER_OFFSET UNITYSDK_OFFSET(0x18C6FE70)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETSELFEDGEBYPOINT_OFFSET UNITYSDK_OFFSET(0x18C6E6A0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETSELFEDGE_1_OFFSET UNITYSDK_OFFSET(0x18C6E2A0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETSELFEDGE_OFFSET UNITYSDK_OFFSET(0x18C6DE30)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_LOCALPOSITIONTOANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x18C71770)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETANCHORSMART_1_OFFSET UNITYSDK_OFFSET(0x18C71490)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETANCHORSMART_2_OFFSET UNITYSDK_OFFSET(0x18C702D0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETANCHORSMART_OFFSET UNITYSDK_OFFSET(0x18C70200)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETPIVOTSMART_1_OFFSET UNITYSDK_OFFSET(0x18C6FC20)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETPIVOTSMART_OFFSET UNITYSDK_OFFSET(0x18C6FB70)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETSIZEANDPOSITIONWITHCURRENTANCHORSBYPOINT_OFFSET UNITYSDK_OFFSET(0x18C6F8D0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETSIZEANDPOSITIONWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0x18C6F640)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SHOULDDOINTSNAPPING_OFFSET UNITYSDK_OFFSET(0x18C715D0)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS__CALSIZEWITHCURRENTANCHORS_G__GETPARENTSIZE_7_0_OFFSET UNITYSDK_OFFSET(0x18C6F380)
#define UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C72050)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectTransformExtensions_TypeDefinitionIndex = 55300;

	class RectTransformExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__cacheFourCornersArray()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RectTransformExtensions_TypeDefinitionIndex)->GetStaticField(0x3B3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GetMinMaxByWorld(::UnityEngine::RectTransform* rectTransform, ::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETMINMAXBYWORLD_OFFSET))(rectTransform, fourCornersArray);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> GetSelfEdge(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETSELFEDGE_OFFSET))(rectTransform);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> GetSelfEdge_1(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Camera* camera)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETSELFEDGE_1_OFFSET))(rectTransform, camera);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> GetSelfEdgeByPoint(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Camera* camera)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETSELFEDGEBYPOINT_OFFSET))(rectTransform, camera);
		}

		static ::UnityEngine::Bounds GetBounds(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::RectTransform* parentRectTransform)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETBOUNDS_OFFSET))(rectTransform, parentRectTransform);
		}

		static ::UnityEngine::Canvas* FindRootCanvas(::UnityEngine::Transform* rectTransform)
		{
			return ((::UnityEngine::Canvas*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_FINDROOTCANVAS_OFFSET))(rectTransform);
		}

		static ::UnityEngine::Vector2 CalSizeWithCurrentAnchors(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::RectTransform_Axis axis, ::System::Single size)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform_Axis, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_CALSIZEWITHCURRENTANCHORS_OFFSET))(rectTransform, axis, size);
		}

		static ::UnityEngine::Rect CalRectWithCurrentAnchors(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 newSizeDelta)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_CALRECTWITHCURRENTANCHORS_OFFSET))(rectTransform, newSizeDelta);
		}

		static ::System::Void SetSizeAndPositionWithCurrentAnchors(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 rectMinByUgui, ::UnityEngine::Vector2 rectMaxByUgui)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETSIZEANDPOSITIONWITHCURRENTANCHORS_OFFSET))(rectTransform, rectMinByUgui, rectMaxByUgui);
		}

		static ::System::Void SetSizeAndPositionWithCurrentAnchorsByPoint(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 rectMinByPoint, ::UnityEngine::Vector2 rectMaxByPoint, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETSIZEANDPOSITIONWITHCURRENTANCHORSBYPOINT_OFFSET))(rectTransform, rectMinByPoint, rectMaxByPoint, camera);
		}

		static ::System::Void SetPivotSmart(::UnityEngine::RectTransform* rect, ::System::Single value, ::System::Int32 axis, ::System::Boolean smart)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETPIVOTSMART_OFFSET))(rect, value, axis, smart);
		}

		static ::System::Void SetPivotSmart_1(::UnityEngine::RectTransform* rect, ::System::Single value, ::System::Int32 axis, ::System::Boolean smart, ::System::Boolean parentSpace)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETPIVOTSMART_1_OFFSET))(rect, value, axis, smart, parentSpace);
		}

		static ::UnityEngine::Vector3 GetRectReferenceCorner(::UnityEngine::RectTransform* gui, ::System::Boolean worldSpace)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_GETRECTREFERENCECORNER_OFFSET))(gui, worldSpace);
		}

		static ::System::Void SetAnchorSmart(::UnityEngine::RectTransform* rect, ::System::Single value, ::System::Int32 axis, ::System::Boolean isMax, ::System::Boolean smart)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETANCHORSMART_OFFSET))(rect, value, axis, isMax, smart);
		}

		static ::System::Void SetAnchorSmart_1(::UnityEngine::RectTransform* rect, ::System::Single value, ::System::Int32 axis, ::System::Boolean isMax, ::System::Boolean smart, ::System::Boolean enforceExactValue)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETANCHORSMART_1_OFFSET))(rect, value, axis, isMax, smart, enforceExactValue);
		}

		static ::System::Void SetAnchorSmart_2(::UnityEngine::RectTransform* rect, ::System::Single value, ::System::Int32 axis, ::System::Boolean isMax, ::System::Boolean smart, ::System::Boolean enforceExactValue, ::System::Boolean enforceMinNoLargerThanMax)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SETANCHORSMART_2_OFFSET))(rect, value, axis, isMax, smart, enforceExactValue, enforceMinNoLargerThanMax);
		}

		static ::System::Boolean AnchorAllowedOutsideParent(::System::Int32 axis, ::System::Int32 minmax)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_ANCHORALLOWEDOUTSIDEPARENT_OFFSET))(axis, minmax);
		}

		static ::System::Boolean ShouldDoIntSnapping(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_SHOULDDOINTSNAPPING_OFFSET))(rect);
		}

		static ::UnityEngine::Vector2 LocalPositionToAnchoredPosition(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector2 localPosition2D)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_LOCALPOSITIONTOANCHOREDPOSITION_OFFSET))(transform, localPosition2D);
		}

		static ::UnityEngine::Vector2 AnchoredToLocalPosition(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector2 anchoredPosition)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS_ANCHOREDTOLOCALPOSITION_OFFSET))(transform, anchoredPosition);
		}

		static ::UnityEngine::Vector2 _CalSizeWithCurrentAnchors_g__GetParentSize_7_0(::UnityEngine::RectTransform* rectTransform_inner)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMEXTENSIONS__CALSIZEWITHCURRENTANCHORS_G__GETPARENTSIZE_7_0_OFFSET))(rectTransform_inner);
		}
	};
}
