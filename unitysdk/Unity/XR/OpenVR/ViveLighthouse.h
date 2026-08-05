#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

#define UNITY_XR_OPENVR_VIVELIGHTHOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DB9E0)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveLighthouse_TypeDefinitionIndex = 32126;

	class ViveLighthouse : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVELIGHTHOUSE__CTOR_OFFSET))(this);
		}
	};
}
