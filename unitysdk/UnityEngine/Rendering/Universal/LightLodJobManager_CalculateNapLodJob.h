#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataCullChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataEnableChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataShadowChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataShadowStrengthChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CALCULATENAPLODJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8AE710)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_CalculateNapLodJob_TypeDefinitionIndex = 30016;

	struct alignas(8) LightLodJobManager_CalculateNapLodJob
	{
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> jobData; // 0x10
		::Unity::Collections::NativeQueue_1_ParallelWriter<::UnityEngine::Rendering::Universal::LightDataShadowStrengthChange> shadowStrengthChangeQueue; // 0x20
		::Unity::Collections::NativeQueue_1_ParallelWriter<::UnityEngine::Rendering::Universal::LightDataShadowChange> shadowChangeQueue; // 0x38
		::Unity::Collections::NativeQueue_1_ParallelWriter<::UnityEngine::Rendering::Universal::LightDataEnableChange> enableChangeQueue; // 0x50
		::Unity::Collections::NativeQueue_1_ParallelWriter<::UnityEngine::Rendering::Universal::LightDataCullChange> cullChangeQueue; // 0x68
		::System::Int32 frameCount; // 0x80
		::UnityEngine::Vector3 triggerPosition; // 0x84

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CALCULATENAPLODJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
