#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C43B0)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_OFFSET UNITYSDK_OFFSET(0x1A4C43A0)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4390)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_OFFSET UNITYSDK_OFFSET(0x1A4C4380)

namespace UnityEngine
{
	inline static constexpr unsigned int CameraRaycastHelper_TypeDefinitionIndex = 5165;

	class CameraRaycastHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* RaycastTry(::UnityEngine::Camera* cam, ::UnityEngine::Ray ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_OFFSET))(cam, ray, distance, layerMask);
		}

		static ::UnityEngine::GameObject* RaycastTry2D(::UnityEngine::Camera* cam, ::UnityEngine::Ray ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_OFFSET))(cam, ray, distance, layerMask);
		}

		static ::UnityEngine::GameObject* RaycastTry_Injected(::UnityEngine::Camera* cam, ::UnityEngine::Ray& ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_INJECTED_OFFSET))(cam, ray, distance, layerMask);
		}

		static ::UnityEngine::GameObject* RaycastTry2D_Injected(::UnityEngine::Camera* cam, ::UnityEngine::Ray& ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_INJECTED_OFFSET))(cam, ray, distance, layerMask);
		}
	};
}
