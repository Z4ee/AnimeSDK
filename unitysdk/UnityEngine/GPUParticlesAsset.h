#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"
#include "unitysdk/UnityEngine/GPUParticlesPass_DispatchMode.h"

namespace System { class String; }

#define UNITYENGINE_GPUPARTICLESASSET_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A446F00)
#define UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_1_OFFSET UNITYSDK_OFFSET(0x1A447020)
#define UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1A446FD0)
#define UNITYENGINE_GPUPARTICLESASSET_GET_NUMMAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A446EA0)
#define UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_1_OFFSET UNITYSDK_OFFSET(0x1A446F60)
#define UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_OFFSET UNITYSDK_OFFSET(0x1A446F10)
#define UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_1_OFFSET UNITYSDK_OFFSET(0x1A446FC0)
#define UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_OFFSET UNITYSDK_OFFSET(0x1A446F70)
#define UNITYENGINE_GPUPARTICLESASSET_SET_NUMMAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A446EB0)
#define UNITYENGINE_GPUPARTICLESASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A446EC0)

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesAsset_TypeDefinitionIndex = 3926;

	class GPUParticlesAsset : public ::UnityEngine::ComputeShaderAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_numMaxParticles()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_GET_NUMMAXPARTICLES_OFFSET))(this);
		}

		::System::Void set_numMaxParticles(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SET_NUMMAXPARTICLES_OFFSET))(this, value);
		}

		::System::Void SetDispatchMode(::System::String* kernelName, ::UnityEngine::GPUParticlesPass_DispatchMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GPUParticlesPass_DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_OFFSET))(this, kernelName, mode);
		}

		::System::Void SetDispatchMode_1(::System::Int32 kernelID, ::UnityEngine::GPUParticlesPass_DispatchMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GPUParticlesPass_DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_1_OFFSET))(this, kernelID, mode);
		}

		::System::Void SetNumKernels(::System::String* kernelName, ::System::Int32 numKernels)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_OFFSET))(this, kernelName, numKernels);
		}

		::System::Void SetNumKernels_1(::System::Int32 kernelID, ::System::Int32 numKernels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_1_OFFSET))(this, kernelID, numKernels);
		}

		::System::Void DispatchFromScript(::System::String* kernelName, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_OFFSET))(this, kernelName, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void DispatchFromScript_1(::System::Int32 kernelID, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_1_OFFSET))(this, kernelID, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		static ::System::Void Create_Internal(::UnityEngine::GPUParticlesAsset* asset, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::GPUParticlesAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_CREATE_INTERNAL_OFFSET))(asset, name);
		}
	};
}
