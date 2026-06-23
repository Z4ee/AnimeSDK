#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_LightOptimizeConfigUnmanaged.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_LIGHTOPTIMIZECONFIGSUNMANAGED_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8C4AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_LIGHTOPTIMIZECONFIGSUNMANAGED_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8C4B00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_LightOptimizeConfigsUnmanaged_TypeDefinitionIndex = 27374;

	struct alignas(4) LightLodManager_LightOptimizeConfigsUnmanaged
	{
		::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged quality0; // 0x10
		::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged quality1; // 0x18
		::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged quality2; // 0x20
		::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged quality3; // 0x28

		::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_LIGHTOPTIMIZECONFIGSUNMANAGED_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigUnmanaged))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_LIGHTOPTIMIZECONFIGSUNMANAGED_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
