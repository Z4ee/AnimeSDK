#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_WHEELCOLLIDER_GETWORLDPOSE_OFFSET UNITYSDK_OFFSET(0x1C561530)
#define UNITYENGINE_WHEELCOLLIDER_SET_MOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1C561510)
#define UNITYENGINE_WHEELCOLLIDER_SET_STEERANGLE_OFFSET UNITYSDK_OFFSET(0x1C561520)
#define UNITYENGINE_WHEELCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C561540)

namespace UnityEngine
{
	inline static constexpr unsigned int WheelCollider_TypeDefinitionIndex = 30957;

	class WheelCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WHEELCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void set_motorTorque(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WHEELCOLLIDER_SET_MOTORTORQUE_OFFSET))(this, value);
		}

		::System::Void set_steerAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WHEELCOLLIDER_SET_STEERANGLE_OFFSET))(this, value);
		}

		::System::Void GetWorldPose(::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& quat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_WHEELCOLLIDER_GETWORLDPOSE_OFFSET))(this, pos, quat);
		}
	};
}
