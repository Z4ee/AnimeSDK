#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CALCULATENAPLODJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x953260)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_CalculateNapLodJob_TypeDefinitionIndex = 26406;

	struct alignas(8) LightLodJobManager_CalculateNapLodJob
	{
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> jobData; // 0x10
		::System::Int32 totalCount; // 0x20
		::System::Int32 updateCount; // 0x24
		::System::Int32 lastUpdateIndex; // 0x28

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CALCULATENAPLODJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
