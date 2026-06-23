#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_CLEARCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0xF7A4860)
#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_CLEARRWTEXTURE3DFLOAT_OFFSET UNITYSDK_OFFSET(0xF7A4EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_CLEARRWTEXTURE3D_OFFSET UNITYSDK_OFFSET(0xF7A4AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_DISPATCHCOMPUTE_1_OFFSET UNITYSDK_OFFSET(0xF7A5410)
#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0xF7A52F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_GET_CLEARCS_OFFSET UNITYSDK_OFFSET(0xF7A4840)
#define UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_SET_CLEARCS_OFFSET UNITYSDK_OFFSET(0xF7A4850)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LyraUtils_TypeDefinitionIndex = 27091;

	class LyraUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::ComputeShader** StaticGet__ClearCS_k__BackingField()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(LyraUtils_TypeDefinitionIndex)->GetStaticField(0x223C0);
		}

		static ::UnityEngine::ComputeShader* get_ClearCS()
		{
			return ((::UnityEngine::ComputeShader*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_GET_CLEARCS_OFFSET))();
		}

		static ::System::Void set_ClearCS(::UnityEngine::ComputeShader* value)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_SET_CLEARCS_OFFSET))(value);
		}

		static ::System::Void ClearComputeBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeBuffer* buffer, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_CLEARCOMPUTEBUFFER_OFFSET))(cmd, buffer, count);
		}

		static ::System::Void ClearRWTexture3D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* rwTex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_CLEARRWTEXTURE3D_OFFSET))(cmd, rwTex);
		}

		static ::System::Void ClearRWTexture3DFloat(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* rwTex, ::System::Single clearVal)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_CLEARRWTEXTURE3DFLOAT_OFFSET))(cmd, rwTex, clearVal);
		}

		static ::System::Void DispatchCompute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernel, ::System::UInt32 X, ::System::UInt32 Y, ::System::UInt32 Z)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_DISPATCHCOMPUTE_OFFSET))(cmd, computeShader, kernel, X, Y, Z);
		}

		static ::System::Void DispatchCompute_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler* sampler, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernel, ::System::UInt32 X, ::System::UInt32 Y, ::System::UInt32 Z)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LYRAUTILS_DISPATCHCOMPUTE_1_OFFSET))(cmd, sampler, computeShader, kernel, X, Y, Z);
		}
	};
}
