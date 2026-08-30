#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF50A0)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_OFFSET UNITYSDK_OFFSET(0x1EFF5090)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5080)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_OFFSET UNITYSDK_OFFSET(0x1EFF5070)

namespace UnityEngine
{
	inline static constexpr unsigned int CameraRaycastHelper_TypeDefinitionIndex = 5779;

	class CameraRaycastHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* RaycastTry(::UnityEngine::Camera* a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::GameObject* RaycastTry2D(::UnityEngine::Camera* a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::GameObject* RaycastTry_Injected(::UnityEngine::Camera* a1, ::UnityEngine::Ray& a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::GameObject* RaycastTry2D_Injected(::UnityEngine::Camera* a1, ::UnityEngine::Ray& a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
