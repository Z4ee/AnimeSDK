#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1B08B800)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_GET_INITROTATION_OFFSET UNITYSDK_OFFSET(0x1B08B820)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B08BCC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B08B830)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_RESETPOSANDROT_OFFSET UNITYSDK_OFFSET(0x1B08BD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_SETINITPOSROT_OFFSET UNITYSDK_OFFSET(0x1B08BB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B08BE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08BF30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OceanFloatObject_TypeDefinitionIndex = 29933;

	class OceanFloatObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single PositionIntensity; // 0x18
		::System::Single RotIntensity; // 0x1C
		::System::Single MoveForwardSpeed; // 0x20
		::UnityEngine::Vector3 initPosisiton; // 0x24
		::UnityEngine::Quaternion initRotation; // 0x30
		::UnityEngine::Vector3 initForward; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_InitPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_GET_INITPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_InitRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_GET_INITROTATION_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void SetInitPosRot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_SETINITPOSROT_OFFSET))(this, position, rotation);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void ResetPosAndRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFLOATOBJECT_RESETPOSANDROT_OFFSET))(this);
		}
	};
}
