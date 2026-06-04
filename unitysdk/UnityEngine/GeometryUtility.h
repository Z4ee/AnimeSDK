#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_1_OFFSET UNITYSDK_OFFSET(0x1B298AF0)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_2_OFFSET UNITYSDK_OFFSET(0x1B298C70)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0x1B298960)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298D50)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET UNITYSDK_OFFSET(0x1B298D20)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298D40)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET UNITYSDK_OFFSET(0x1B298D30)

namespace UnityEngine
{
	inline static constexpr unsigned int GeometryUtility_TypeDefinitionIndex = 4063;

	class GeometryUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Plane>* CalculateFrustumPlanes(::UnityEngine::Camera* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET))(a1);
		}

		static ::System::Void CalculateFrustumPlanes_1(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_1_OFFSET))(a1, a2);
		}

		static ::System::Void CalculateFrustumPlanes_2(::UnityEngine::Matrix4x4 a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean TestPlanesAABB(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_ExtractPlanes(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET))(a1, a2);
		}

		static ::System::Boolean TestPlanesAABB_Injected(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Bounds& a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_ExtractPlanes_Injected(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET))(a1, a2);
		}
	};
}
