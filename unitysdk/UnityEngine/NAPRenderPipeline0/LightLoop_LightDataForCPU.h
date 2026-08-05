#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTDATAFORCPU_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1E6059D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTDATAFORCPU__CTOR_OFFSET UNITYSDK_OFFSET(0x1E605A40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_LightDataForCPU_TypeDefinitionIndex = 6005;

	class LightLoop_LightDataForCPU : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::NapLightData>* lights; // 0x10
		::System::Int32 punctualLightCount; // 0x18
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::NapLightData>* lightsForChar; // 0x20
		::System::Int32 punctualLightCountForChar; // 0x28
		::System::Int32 envLightCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTDATAFORCPU__CTOR_OFFSET))(this);
		}

		::System::Void Allocate(::System::Int32 MaxPunctualLightsOnScreen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTDATAFORCPU_ALLOCATE_OFFSET))(this, MaxPunctualLightsOnScreen);
		}
	};
}
