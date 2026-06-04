#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/UnityEngine/RectTransform_Edge.h"
#include "unitysdk/UnityEngine/Transform.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform_ReapplyDrivenProperties; }

#define UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2BDC80)
#define UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1B2BE6A0)
#define UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BF4A0)
#define UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2BF440)
#define UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x1B2BE6B0)
#define UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET UNITYSDK_OFFSET(0x1B2BF0F0)
#define UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET UNITYSDK_OFFSET(0x1B2BF180)
#define UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1B2BE7E0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0x1B2BE020)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDF00)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2BDED0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDE90)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0x1B2BDE60)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDE20)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0x1B2BDDF0)
#define UNITYENGINE_RECTTRANSFORM_GET_DRIVENBYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2BE660)
#define UNITYENGINE_RECTTRANSFORM_GET_DRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2BE680)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0x1B2BE390)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0x1B2BE100)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDFE0)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1B2BDFB0)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDDE0)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1B2BDDA0)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDF70)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0x1B2BDF40)
#define UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2BDD10)
#define UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2BF140)
#define UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET UNITYSDK_OFFSET(0x1B2BECF0)
#define UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0x1B2BEF40)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0x1B2BE090)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDF30)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2BDF10)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDEC0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0x1B2BDEA0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDE50)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0x1B2BDE30)
#define UNITYENGINE_RECTTRANSFORM_SET_DRIVENBYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2BE670)
#define UNITYENGINE_RECTTRANSFORM_SET_DRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2BE690)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0x1B2BE490)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0x1B2BE1C0)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BE010)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1B2BDFF0)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDFA0)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0x1B2BDF80)
#define UNITYENGINE_RECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BF4B0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_TypeDefinitionIndex = 4385;

	class RectTransform : public ::UnityEngine::Transform
	{
	public:
		static ::UnityEngine::RectTransform_ReapplyDrivenProperties** StaticGet_reapplyDrivenProperties()
		{
			return (::UnityEngine::RectTransform_ReapplyDrivenProperties**)Il2CppClass::FromTypeDefinitionIndex(RectTransform_TypeDefinitionIndex)->GetStaticField(0x33800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void add_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform_ReapplyDrivenProperties*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET))(a1);
		}

		static ::System::Void remove_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform_ReapplyDrivenProperties*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET))(a1);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_anchorMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET))(this);
		}

		::System::Void set_anchorMin(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_anchorMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET))(this);
		}

		::System::Void set_anchorMax(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_anchoredPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET))(this);
		}

		::System::Void set_anchoredPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_sizeDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET))(this);
		}

		::System::Void set_sizeDelta(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_pivot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_anchoredPosition3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET))(this);
		}

		::System::Void set_anchoredPosition3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_offsetMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET))(this);
		}

		::System::Void set_offsetMin(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_offsetMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET))(this);
		}

		::System::Void set_offsetMax(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_drivenByObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_DRIVENBYOBJECT_OFFSET))(this);
		}

		::System::Void set_drivenByObject(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_DRIVENBYOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::DrivenTransformProperties get_drivenProperties()
		{
			return ((::UnityEngine::DrivenTransformProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_DRIVENPROPERTIES_OFFSET))(this);
		}

		::System::Void set_drivenProperties(::UnityEngine::DrivenTransformProperties a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_DRIVENPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void ForceUpdateRectTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET))(this);
		}

		::System::Void GetLocalCorners(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET))(this, a1);
		}

		::System::Void GetWorldCorners(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET))(this, a1);
		}

		::System::Void SetInsetAndSizeFromParentEdge(::UnityEngine::RectTransform_Edge a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Edge, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetSizeWithCurrentAnchors(::UnityEngine::RectTransform_Axis a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Axis, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET))(this, a1, a2);
		}

		static ::System::Void SendReapplyDrivenProperties(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET))(a1);
		}

		::UnityEngine::Rect GetRectInParentSpace()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetParentSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetCanvasToClipMatrix(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_OFFSET))(this, a1);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_anchorMin_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_anchorMin_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_anchorMax_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_anchorMax_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_anchoredPosition_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_anchoredPosition_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_sizeDelta_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_sizeDelta_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetCanvasToClipMatrix_Injected(::UnityEngine::RectTransform* a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
