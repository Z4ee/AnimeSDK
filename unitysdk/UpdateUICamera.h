#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define UPDATEUICAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C3FA1B0)
#define UPDATEUICAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3FA280)
#define UPDATEUICAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FA4C0)

inline static constexpr unsigned int UpdateUICamera_TypeDefinitionIndex = 57732;

class UpdateUICamera : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* parentCamera; // 0x18
	::UnityEngine::Camera* selfcamera; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATEUICAMERA__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATEUICAMERA_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATEUICAMERA_UPDATE_OFFSET))(this);
	}
};
