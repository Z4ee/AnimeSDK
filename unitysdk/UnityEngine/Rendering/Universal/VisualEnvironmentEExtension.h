#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTEEXTENSION_GETLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C450760)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C450D70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentEExtension_TypeDefinitionIndex = 26440;

	class VisualEnvironmentEExtension : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean setAsStaticToD; // 0x18
		::System::Boolean setAsDynamicToD; // 0x19
		::System::Boolean lowImportance; // 0x1A
		::System::Boolean serveAsLightTrigger; // 0x1B
		::System::Boolean useNewVersionSunPathConfig; // 0x1C
		::Il2CppArray<::System::Single>* sunPath; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* sunPathPoint; // 0x28
		::UnityEngine::Matrix4x4 sunMatrix; // 0x30
		::Il2CppArray<::System::Single>* moonPath; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* moonPathPoint; // 0x78
		::UnityEngine::Matrix4x4 moonMatrix; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTEEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void GetLightDirection(::System::Int32 weatherIndex, ::System::Single lerpV, ::UnityEngine::Vector3& sunDirectionEuler, ::UnityEngine::Vector3& moonDirectionEuler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTEEXTENSION_GETLIGHTDIRECTION_OFFSET))(this, weatherIndex, lerpV, sunDirectionEuler, moonDirectionEuler);
		}
	};
}
