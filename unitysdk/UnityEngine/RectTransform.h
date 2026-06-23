#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/UnityEngine/RectTransform_Edge.h"
#include "unitysdk/UnityEngine/Transform.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform_ReapplyDrivenProperties; }

#define UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D676BC0)
#define UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1D677640)
#define UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6776B0)
#define UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x1D677650)
#define UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x1D6776C0)
#define UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET UNITYSDK_OFFSET(0x1D678340)
#define UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET UNITYSDK_OFFSET(0x1D6784E0)
#define UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1D677810)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0x1D676FA0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676E80)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1D676E50)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676E10)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0x1D676DE0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676DA0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0x1D676D70)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0x1D677370)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0x1D6770E0)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676F60)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1D676F30)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676D60)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1D676D20)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676EF0)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0x1D676EC0)
#define UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D676C70)
#define UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D6784C0)
#define UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET UNITYSDK_OFFSET(0x1D677D60)
#define UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0x1D6780B0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0x1D677060)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676EB0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1D676E90)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676E40)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0x1D676E20)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676DD0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0x1D676DB0)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0x1D677470)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0x1D6771A0)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676F90)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1D676F70)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D676F20)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0x1D676F00)
#define UNITYENGINE_RECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D678990)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_TypeDefinitionIndex = 5409;

	class RectTransform : public ::UnityEngine::Transform
	{
	public:
		static ::UnityEngine::RectTransform_ReapplyDrivenProperties** StaticGet_reapplyDrivenProperties()
		{
			return (::UnityEngine::RectTransform_ReapplyDrivenProperties**)Il2CppClass::FromTypeDefinitionIndex(RectTransform_TypeDefinitionIndex)->GetStaticField(0x5740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void add_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform_ReapplyDrivenProperties*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET))(value);
		}

		static ::System::Void remove_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform_ReapplyDrivenProperties*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET))(value);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_anchorMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET))(this);
		}

		::System::Void set_anchorMin(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_anchorMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET))(this);
		}

		::System::Void set_anchorMax(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_anchoredPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET))(this);
		}

		::System::Void set_anchoredPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_sizeDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET))(this);
		}

		::System::Void set_sizeDelta(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_pivot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_anchoredPosition3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET))(this);
		}

		::System::Void set_anchoredPosition3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_offsetMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET))(this);
		}

		::System::Void set_offsetMin(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_offsetMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET))(this);
		}

		::System::Void set_offsetMax(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET))(this, value);
		}

		::System::Void ForceUpdateRectTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetCanvasToClipMatrix(::UnityEngine::RectTransform* canvasTransform)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_OFFSET))(this, canvasTransform);
		}

		::System::Void GetLocalCorners(::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET))(this, fourCornersArray);
		}

		::System::Void GetWorldCorners(::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET))(this, fourCornersArray);
		}

		::System::Void SetInsetAndSizeFromParentEdge(::UnityEngine::RectTransform_Edge edge, ::System::Single inset, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Edge, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET))(this, edge, inset, size);
		}

		::System::Void SetSizeWithCurrentAnchors(::UnityEngine::RectTransform_Axis axis, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Axis, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET))(this, axis, size);
		}

		static ::System::Void SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET))(driven);
		}

		::UnityEngine::Rect GetRectInParentSpace()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetParentSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET))(this);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_anchorMin_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchorMin_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_anchorMax_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchorMax_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_anchoredPosition_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchoredPosition_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_sizeDelta_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_sizeDelta_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET))(this, value);
		}

		::System::Void GetCanvasToClipMatrix_Injected(::UnityEngine::RectTransform* canvasTransform, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_INJECTED_OFFSET))(this, canvasTransform, ret);
		}
	};
}
