#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_CALCULATEPOINTS_OFFSET UNITYSDK_OFFSET(0x1E4B0BE0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_CUBICBEZIER_OFFSET UNITYSDK_OFFSET(0x1E4B06C0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E4AFD70)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_STARTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E4B01C0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_TARGETANCHOR_OFFSET UNITYSDK_OFFSET(0x1E4B0440)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E4B0300)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B0590)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4B07F0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B25C0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4B24D0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E4B1990)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E4B2300)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B23B0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_STARTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E4B01D0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_TARGETANCHOR_OFFSET UNITYSDK_OFFSET(0x1E4B0450)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E4B0310)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B05A0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E4B26E0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B29E0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E4B2A60)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E4B2AC0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B2B50)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4B2C20)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E4B2CC0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E4B2CD0)
#define UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B2CE0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ElasticRopeFixed_TypeDefinitionIndex = 19000;

	class ElasticRopeFixed : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Sprite* m_Sprite; // 0xF8
		::System::Single m_Aspect; // 0x100
		::UnityEngine::Transform* m_StartTransform; // 0x108
		::UnityEngine::Transform* m_TargetTransform; // 0x110
		::System::Single m_TargetAnchor; // 0x118
		::System::Single m_Width; // 0x11C
		::System::Int32 m_Segments; // 0x120
		::System::Single m_MinSegmentLength; // 0x124
		::System::Single m_Curve1; // 0x128
		::System::Single m_Curve2; // 0x12C
		::System::Single m_Gravity; // 0x130
		::Il2CppArray<::UnityEngine::Vector3>* m_Points; // 0x138
		::System::Int32 m_PointCount; // 0x140
		::System::Single m_LastDistance; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_StartTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_STARTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_StartTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_STARTTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_TARGETTRANSFORM_OFFSET))(this);
		}

		::System::Void set_TargetTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_TARGETTRANSFORM_OFFSET))(this, value);
		}

		::System::Single get_TargetAnchor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_TARGETANCHOR_OFFSET))(this);
		}

		::System::Void set_TargetAnchor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_TARGETANCHOR_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_SET_WIDTH_OFFSET))(this, value);
		}

		static ::UnityEngine::Vector2 CubicBezier(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_CUBICBEZIER_OFFSET))(p0, p1, p2, p3, t);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ISACTIVE_OFFSET))(this);
		}

		::System::Void CalculatePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_CALCULATEPOINTS_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ELASTICROPEFIXED___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
