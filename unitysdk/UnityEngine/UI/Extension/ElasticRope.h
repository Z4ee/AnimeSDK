#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_CALCULATEPOINTS_OFFSET UNITYSDK_OFFSET(0x1F4403C0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_CUBICBEZIER_OFFSET UNITYSDK_OFFSET(0x1F440290)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_CAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1F4401B0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F43F6D0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_POINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1F4400D0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_STARTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F43FC90)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F43FE60)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1F43FFA0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F4422C0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F442180)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F441030)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F441CF0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F442060)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_CAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1F4401C0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_POINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1F4400E0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_STARTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F43FCA0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F43FE70)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1F43FFB0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F4423E0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4426E0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F442750)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F4427B0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F442880)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F442920)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F442B00)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F442B10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ElasticRope_TypeDefinitionIndex = 19343;

	class ElasticRope : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::UnityEngine::Transform* m_StartTransform; // 0x100
		::UnityEngine::Transform* m_TargetTransform; // 0x108
		::System::Single m_Width; // 0x110
		::System::Single m_Aspect; // 0x114
		::System::Single m_Curve1; // 0x118
		::System::Single m_Curve2; // 0x11C
		::System::Int32 m_PointsPerSegment; // 0x120
		::System::Int32 m_CapVertices; // 0x124
		::Il2CppArray<::UnityEngine::Vector3>* m_Points; // 0x128
		::System::Int32 m_PointCount; // 0x130
		::System::Single m_Distance; // 0x134
		::System::Single m_LastDistance; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_StartTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_STARTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_StartTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_STARTTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_TARGETTRANSFORM_OFFSET))(this);
		}

		::System::Void set_TargetTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_TARGETTRANSFORM_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_PointsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_POINTSPERSEGMENT_OFFSET))(this);
		}

		::System::Void set_PointsPerSegment(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_POINTSPERSEGMENT_OFFSET))(this, value);
		}

		::System::Int32 get_CapVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_GET_CAPVERTICES_OFFSET))(this);
		}

		::System::Void set_CapVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_SET_CAPVERTICES_OFFSET))(this, value);
		}

		static ::UnityEngine::Vector2 CubicBezier(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_CUBICBEZIER_OFFSET))(p0, p1, p2, p3, t);
		}

		::System::Void CalculatePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_CALCULATEPOINTS_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPE___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
