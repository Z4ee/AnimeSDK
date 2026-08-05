#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_FLUSHDYNAMICLIGHTTRANSFORMJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x975B40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_FlushDynamicLightTransformJob_TypeDefinitionIndex = 27540;

	struct alignas(8) LightLodManager_FlushDynamicLightTransformJob
	{
		::Unity::Collections::NativeList_1<::UnityEngine::Vector3> lightPositions; // 0x10

		/*
		::System::Void Execute(::System::Int32 index, ::UnityEngine::Jobs::TransformAccess transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_FLUSHDYNAMICLIGHTTRANSFORMJOB_EXECUTE_OFFSET))(this, index, transform);
		}
		*/
	};
}
