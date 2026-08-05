#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_GENERATE_OFFSET UNITYSDK_OFFSET(0x1C5B2D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5B5400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C5B5600)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C5B2CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_TRYFINDINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1C5B54D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B6050)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CustomLineRenderGuideLine_TypeDefinitionIndex = 27293;

	class CustomLineRenderGuideLine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean useWayPath; // 0x18
		::System::Single yOffset; // 0x1C
		::System::Single m_CirlceRadius; // 0x20
		::System::Single m_Width; // 0x24
		::Il2CppArray<::UnityEngine::Vector3>* pointList; // 0x28
		::System::Boolean debugViewOn; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* elbowCenters; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* xAxis; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* xAxisStart; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* xAxisEnd; // 0x50
		::System::Collections::Generic::List_1<::System::Single>* angle; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_ONDISABLE_OFFSET))(this);
		}

		static ::System::Boolean TryFindIntersection(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 v2, ::UnityEngine::Vector2& intersection)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_TRYFINDINTERSECTION_OFFSET))(p1, v1, p2, v2, intersection);
		}

		::System::Void Generate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_GENERATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CUSTOMLINERENDERGUIDELINE_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
