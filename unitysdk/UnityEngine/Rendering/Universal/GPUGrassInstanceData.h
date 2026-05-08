#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EDF30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassInstanceData_TypeDefinitionIndex = 30239;

	struct alignas(4) GPUGrassInstanceData
	{
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x10
		::UnityEngine::Matrix4x4 worldToObjectMatrix; // 0x50
		::UnityEngine::Vector4 windParams; // 0x90
		::System::Single sideBend; // 0xA0
		::System::Single bounceValue; // 0xA4

		/*
		::System::Void _ctor(::UnityEngine::Matrix4x4 parentLocalToWorldMatrix, ::UnityEngine::Rendering::Universal::CachedGrassRenderItemData cachedData, ::UnityEngine::Vector2 windDir, ::System::Single bounce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::Universal::CachedGrassRenderItemData, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSINSTANCEDATA__CTOR_OFFSET))(this, parentLocalToWorldMatrix, cachedData, windDir, bounce);
		}
		*/
	};
}
