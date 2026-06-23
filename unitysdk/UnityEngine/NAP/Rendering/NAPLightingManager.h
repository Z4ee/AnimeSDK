#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAP/Rendering/PrepareLightingDataParameter.h"
#include "unitysdk/UnityEngine/NAP/Rendering/PrepareLightingDataResults.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAP_RENDERING_NAPLIGHTINGMANAGER_INTERNAL_PREPARELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1D84C0A0)
#define UNITYENGINE_NAP_RENDERING_NAPLIGHTINGMANAGER_PREPARELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1D84C0B0)
#define UNITYENGINE_NAP_RENDERING_NAPLIGHTINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84C110)

namespace UnityEngine::NAP::Rendering
{
	inline static constexpr unsigned int NAPLightingManager_TypeDefinitionIndex = 6132;

	class NAPLightingManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAP_RENDERING_NAPLIGHTINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Internal_PrepareLightingData(::UnityEngine::NAP::Rendering::PrepareLightingDataResults& result, ::UnityEngine::NAP::Rendering::PrepareLightingDataParameter& parameter, ::Il2CppArray<::System::Int32>* shadow, ::System::Int32 lightShadowsLength, ::System::IntPtr lightDataPtr, ::System::IntPtr cpuLightForCharPtr, ::System::IntPtr cullResults, ::UnityEngine::ComputeBuffer* lightBuffer, ::UnityEngine::ComputeBuffer* envLightBuffer, ::UnityEngine::ComputeBuffer* lightVolumeBuffer, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::System::Boolean processWorldLight)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAP::Rendering::PrepareLightingDataResults&, ::UnityEngine::NAP::Rendering::PrepareLightingDataParameter&, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAP_RENDERING_NAPLIGHTINGMANAGER_INTERNAL_PREPARELIGHTINGDATA_OFFSET))(result, parameter, shadow, lightShadowsLength, lightDataPtr, cpuLightForCharPtr, cullResults, lightBuffer, envLightBuffer, lightVolumeBuffer, cmdBuffer, processWorldLight);
		}

		static ::System::Boolean PrepareLightingData(::UnityEngine::NAP::Rendering::PrepareLightingDataResults& result, ::UnityEngine::NAP::Rendering::PrepareLightingDataParameter& parameter, ::Il2CppArray<::System::Int32>* lightShadows, ::System::Int32 lightShadowsLength, ::System::IntPtr cpuLightDataPtr, ::System::IntPtr cpuLightForCharPtr, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::ComputeBuffer* lightBuffer, ::UnityEngine::ComputeBuffer* envLightBuffer, ::UnityEngine::ComputeBuffer* lightVolumeBuffer, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::System::Boolean processWorldLight)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAP::Rendering::PrepareLightingDataResults&, ::UnityEngine::NAP::Rendering::PrepareLightingDataParameter&, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAP_RENDERING_NAPLIGHTINGMANAGER_PREPARELIGHTINGDATA_OFFSET))(result, parameter, lightShadows, lightShadowsLength, cpuLightDataPtr, cpuLightForCharPtr, cullResults, lightBuffer, envLightBuffer, lightVolumeBuffer, cmdBuffer, processWorldLight);
		}
	};
}
