#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHTRANSFORMJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x927F30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_FlushTransformJob_TypeDefinitionIndex = 30015;

	struct alignas(8) LightLodJobManager_FlushTransformJob
	{
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> jobData; // 0x10

		/*
		::System::Void Execute(::System::Int32 index, ::UnityEngine::Jobs::TransformAccess transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHTRANSFORMJOB_EXECUTE_OFFSET))(this, index, transform);
		}
		*/
	};
}
