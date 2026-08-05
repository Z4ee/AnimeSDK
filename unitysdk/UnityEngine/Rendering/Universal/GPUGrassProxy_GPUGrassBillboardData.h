#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GPUGRASSBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x975960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassProxy_GPUGrassBillboardData_TypeDefinitionIndex = 27266;

	struct alignas(4) GPUGrassProxy_GPUGrassBillboardData
	{
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x10
		::UnityEngine::Vector3 surfaceNormalWS; // 0x50

		::System::Void _ctor(::UnityEngine::Matrix4x4 localToWorldMatrix, ::UnityEngine::Vector3 surfaceNormalWS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GPUGRASSBILLBOARDDATA__CTOR_OFFSET))(this, localToWorldMatrix, surfaceNormalWS);
		}
	};
}
