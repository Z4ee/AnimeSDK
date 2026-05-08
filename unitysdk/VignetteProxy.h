#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Rendering::Universal { class Vignette; }

#define VIGNETTEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x19F65130)
#define VIGNETTEPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x19F65500)
#define VIGNETTEPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x19F65740)
#define VIGNETTEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x19F656F0)
#define VIGNETTEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19F65B10)

inline static constexpr unsigned int VignetteProxy_TypeDefinitionIndex = 66623;

class VignetteProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color color; // 0x18
	::UnityEngine::Vector2 center; // 0x28
	::System::Single intensity; // 0x30
	::System::Single smoothness; // 0x34
	::System::Boolean rounded; // 0x38
	::UnityEngine::Rendering::Universal::Vignette* _vignette; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIGNETTEPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIGNETTEPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIGNETTEPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIGNETTEPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIGNETTEPROXY_SETVALUETO_OFFSET))(this);
	}
};
