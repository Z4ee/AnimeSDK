#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/XR/InputTrackingState.h"

#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA14850)
#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA14860)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int PoseState_TypeDefinitionIndex = 31712;

	struct alignas(4) PoseState
	{
		// static const ::System::Int32 kSizeInBytes = 0x3C; // 0x0
		::System::Boolean isTracked; // 0x10
		::UnityEngine::XR::InputTrackingState trackingState; // 0x14
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Quaternion rotation; // 0x24
		::UnityEngine::Vector3 velocity; // 0x34
		::UnityEngine::Vector3 angularVelocity; // 0x40

		::System::Void _ctor(::System::Boolean isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::XR::InputTrackingState, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE__CTOR_OFFSET))(this, isTracked, trackingState, position, rotation, velocity, angularVelocity);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_GET_FORMAT_OFFSET))(this);
		}
		*/
	};
}
