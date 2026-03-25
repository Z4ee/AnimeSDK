#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_1_OFFSET UNITYSDK_OFFSET(0x18A0DD80)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_2_OFFSET UNITYSDK_OFFSET(0x18A0DF00)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0x18A0DBF0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0DFE0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET UNITYSDK_OFFSET(0x18A0DFB0)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0DFD0)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET UNITYSDK_OFFSET(0x18A0DFC0)

namespace UnityEngine
{
	inline static constexpr unsigned int GeometryUtility_TypeDefinitionIndex = 3887;

	class GeometryUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Plane>* CalculateFrustumPlanes(::UnityEngine::Camera* camera)
		{
			return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET))(camera);
		}

		static ::System::Void CalculateFrustumPlanes_1(::UnityEngine::Camera* camera, ::Il2CppArray<::UnityEngine::Plane>* planes)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_1_OFFSET))(camera, planes);
		}

		static ::System::Void CalculateFrustumPlanes_2(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::Il2CppArray<::UnityEngine::Plane>* planes)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_2_OFFSET))(worldToProjectionMatrix, planes);
		}

		static ::System::Boolean TestPlanesAABB(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET))(planes, bounds);
		}

		static ::System::Void Internal_ExtractPlanes(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Matrix4x4 worldToProjectionMatrix)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET))(planes, worldToProjectionMatrix);
		}

		static ::System::Boolean TestPlanesAABB_Injected(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET))(planes, bounds);
		}

		static ::System::Void Internal_ExtractPlanes_Injected(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Matrix4x4& worldToProjectionMatrix)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET))(planes, worldToProjectionMatrix);
		}
	};
}
