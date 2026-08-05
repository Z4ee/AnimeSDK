#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class RayTracingResources; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E949B10)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E949160)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_GET_RTXRES_OFFSET UNITYSDK_OFFSET(0x1E949150)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_LOAD_OFFSET UNITYSDK_OFFSET(0x1E9491D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_SETRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E949850)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E949B60)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9491C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int BlueNoiseSampler_TypeDefinitionIndex = 5792;

	class BlueNoiseSampler : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__RankingTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlueNoiseSampler_TypeDefinitionIndex)->GetStaticField(0x2DB0);
		}
		static ::System::Int32* StaticGet__Sobol()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlueNoiseSampler_TypeDefinitionIndex)->GetStaticField(0x2DB4);
		}
		static ::System::Int32* StaticGet__Slice()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlueNoiseSampler_TypeDefinitionIndex)->GetStaticField(0x2DB8);
		}
		static ::System::Int32* StaticGet__ScramblingTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlueNoiseSampler_TypeDefinitionIndex)->GetStaticField(0x2DBC);
		}
		static ::System::Int32* StaticGet__Data()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlueNoiseSampler_TypeDefinitionIndex)->GetStaticField(0x2DC0);
		}
		::UnityEngine::ComputeBuffer* dataBuffer0; // 0x10
		::UnityEngine::ComputeBuffer* dataBuffer1; // 0x18
		::UnityEngine::ComputeBuffer* dataBuffer2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RayTracingResources* get_rtxRes()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RayTracingResources*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_GET_RTXRES_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::BlueNoiseSampler* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::BlueNoiseSampler*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_LOAD_OFFSET))(this);
		}

		static ::System::Void SetResources(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_SETRESOURCES_OFFSET))(cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_DISPOSE_OFFSET))(this);
		}
	};
}
