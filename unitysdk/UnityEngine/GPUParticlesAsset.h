#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"
#include "unitysdk/UnityEngine/GPUParticlesPass_DispatchMode.h"

namespace System { class String; }

#define UNITYENGINE_GPUPARTICLESASSET_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED26C50)
#define UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_1_OFFSET UNITYSDK_OFFSET(0x1ED26D70)
#define UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1ED26D20)
#define UNITYENGINE_GPUPARTICLESASSET_GET_NUMMAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1ED26BF0)
#define UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_1_OFFSET UNITYSDK_OFFSET(0x1ED26CB0)
#define UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_OFFSET UNITYSDK_OFFSET(0x1ED26C60)
#define UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_1_OFFSET UNITYSDK_OFFSET(0x1ED26D10)
#define UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_OFFSET UNITYSDK_OFFSET(0x1ED26CC0)
#define UNITYENGINE_GPUPARTICLESASSET_SET_NUMMAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1ED26C00)
#define UNITYENGINE_GPUPARTICLESASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED26C10)

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesAsset_TypeDefinitionIndex = 4115;

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

		::System::Void set_numMaxParticles(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SET_NUMMAXPARTICLES_OFFSET))(this, a1);
		}

		::System::Void SetDispatchMode(::System::String* a1, ::UnityEngine::GPUParticlesPass_DispatchMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GPUParticlesPass_DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetDispatchMode_1(::System::Int32 a1, ::UnityEngine::GPUParticlesPass_DispatchMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GPUParticlesPass_DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETDISPATCHMODE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetNumKernels(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_OFFSET))(this, a1, a2);
		}

		::System::Void SetNumKernels_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_SETNUMKERNELS_1_OFFSET))(this, a1, a2);
		}

		::System::Void DispatchFromScript(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DispatchFromScript_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_DISPATCHFROMSCRIPT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Create_Internal(::UnityEngine::GPUParticlesAsset* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GPUParticlesAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESASSET_CREATE_INTERNAL_OFFSET))(a1, a2);
		}
	};
}
