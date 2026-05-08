#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EDynamicCacheMemoryPolicy.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/DLSSContext.h"
#include "unitysdk/UnityEngine/Rendering/FSRContext.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDCOLLECTTEXTUREBARRIER_IMPL_OFFSET UNITYSDK_OFFSET(0x1AFBD900)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDCOLLECTTEXTURETRANSITION_OFFSET UNITYSDK_OFFSET(0x1AFBE450)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDTEXTUREBARRIER_IMPL_OFFSET UNITYSDK_OFFSET(0x1AFBD8F0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDTEXTURETRANSITION_OFFSET UNITYSDK_OFFSET(0x1AFBE440)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_APPLYDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1AFBE020)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1AFBD910)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD7D0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_BLIT_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1AFBD780)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0x1AFBE3B0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD830)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1AFBD820)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPATCHCOMPUTE_1_OFFSET UNITYSDK_OFFSET(0x1AFBE350)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1AFBE340)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AFBE240)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFBE260)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1AFBE3A0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x1AFBE380)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1AFBE360)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1AFBE370)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1AFBD920)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEDLSSG_OFFSET UNITYSDK_OFFSET(0x1AFBD520)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEDLSS_OFFSET UNITYSDK_OFFSET(0x1AFBD4C0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEFSRFRAMEGEN_OFFSET UNITYSDK_OFFSET(0x1AFBD660)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEFSR_OFFSET UNITYSDK_OFFSET(0x1AFBD600)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AFBE1D0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AFBD800)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INITSRPCMDBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFBD6A0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_APPLYDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1AFBD930)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DISPATCHCOMPUTEINDIRECT_OFFSET UNITYSDK_OFFSET(0x1AFBD730)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1AFBD720)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1AFBD770)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x1AFBD760)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1AFBD740)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1AFBD750)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSSG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD510)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSSG_OFFSET UNITYSDK_OFFSET(0x1AFBD500)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD4B0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSS_OFFSET UNITYSDK_OFFSET(0x1AFBD4A0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSRFRAMEGEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD650)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSRFRAMEGEN_OFFSET UNITYSDK_OFFSET(0x1AFBD640)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD5F0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSR_OFFSET UNITYSDK_OFFSET(0x1AFBD5E0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_RECREATESWAPCHAIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD570)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_RECREATESWAPCHAIN_OFFSET UNITYSDK_OFFSET(0x1AFBD560)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1AFBD700)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_RECREATESWAPCHAIN_OFFSET UNITYSDK_OFFSET(0x1AFBD580)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_RELEASESRPCMDBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFBD6B0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1AFBD810)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0x1AFBD710)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x1AFBD6C0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEINTPARAM_OFFSET UNITYSDK_OFFSET(0x1AFBD6D0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1AFBE330)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD6F0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET UNITYSDK_OFFSET(0x1AFBD6E0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFBD8E0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD880)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1AFBD870)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1AFBD840)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1AFBD890)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET UNITYSDK_OFFSET(0x1AFBD8D0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AFBE430)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1AFBD8C0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD860)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFBD850)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETINTSHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1AFBD8A0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFBDAD0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFBDC40)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFBD9E0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1AFBD9F0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1AFBDAE0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1AFBDC50)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1AFBD940)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETVIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AFBD7F0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1AFBD7E0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0x1AFBD8B0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFBE1C0)
#define UNITYENGINE_RENDERING_SRPCMDBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBE310)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SRPCmdBuffer_TypeDefinitionIndex = 6135;

	class SRPCmdBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_ExecuteDLSS(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::DLSSContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::DLSSContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSS_OFFSET))(cmd, context);
		}

		::System::Void ExecuteDLSS(::UnityEngine::Rendering::DLSSContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEDLSS_OFFSET))(this, context);
		}

		static ::System::Void Internal_ExecuteDLSSG(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::DLSSContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::DLSSContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSSG_OFFSET))(cmd, context);
		}

		::System::Void ExecuteDLSSG(::UnityEngine::Rendering::DLSSContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEDLSSG_OFFSET))(this, context);
		}

		static ::System::Void Internal_RecreateSwapChain(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::DLSSContext dlss, ::UnityEngine::Rendering::FSRContext fsr)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::DLSSContext, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_RECREATESWAPCHAIN_OFFSET))(cmd, dlss, fsr);
		}

		::System::Void RecreateSwapChain(::UnityEngine::Rendering::DLSSContext dlss, ::UnityEngine::Rendering::FSRContext fsr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSContext, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_RECREATESWAPCHAIN_OFFSET))(this, dlss, fsr);
		}

		static ::System::Void Internal_ExecuteFSR(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::FSRContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSR_OFFSET))(cmd, context);
		}

		::System::Void ExecuteFSR(::UnityEngine::Rendering::FSRContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEFSR_OFFSET))(this, context);
		}

		static ::System::Void Internal_ExecuteFSRFrameGen(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::FSRContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSRFRAMEGEN_OFFSET))(cmd, context);
		}

		::System::Void ExecuteFSRFrameGen(::UnityEngine::Rendering::FSRContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_EXECUTEFSRFRAMEGEN_OFFSET))(this, context);
		}

		static ::System::IntPtr InitSRPCmdBuffer()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INITSRPCMDBUFFER_OFFSET))();
		}

		::System::Void ReleaseSRPCmdBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_RELEASESRPCMDBUFFER_OFFSET))(this);
		}

		::System::Void SetComputeFloatParam(::System::Int32 computeShaderID, ::System::Int32 nameID, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET))(this, computeShaderID, nameID, val);
		}

		::System::Void SetComputeIntParam(::System::Int32 computeShaderID, ::System::Int32 nameID, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEINTPARAM_OFFSET))(this, computeShaderID, nameID, val);
		}

		::System::Void SetComputeVectorParam(::System::Int32 computeShaderID, ::System::Int32 nameID, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET))(this, computeShaderID, nameID, val);
		}

		::System::Void Internal_SetComputeTextureParam(::System::Int32 computeShaderID, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::System::Int32 mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET))(this, computeShaderID, kernelIndex, nameID, rt, mipLevel, element);
		}

		::System::Void SetComputeBufferParam(::System::Int32 computeShader, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::ComputeBuffer* buffer, ::System::Boolean separateBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET))(this, computeShader, kernelIndex, nameID, buffer, separateBuffer);
		}

		::System::Void Internal_DispatchCompute(::System::Int32 computeShaderID, ::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET))(this, computeShaderID, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void Internal_DispatchComputeIndirect(::System::Int32 computeShaderID, ::System::Int32 kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, ::System::UInt32 argsOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DISPATCHCOMPUTEINDIRECT_OFFSET))(this, computeShaderID, kernelIndex, indirectBuffer, argsOffset);
		}

		::System::Void Internal_DrawMesh(::System::Int32 meshID, ::UnityEngine::Matrix4x4& matrix, ::System::Int32 materialID, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWMESH_OFFSET))(this, meshID, matrix, materialID, submeshIndex, shaderPass, properties);
		}

		::System::Void Internal_DrawProcedural(::UnityEngine::Matrix4x4& matrix, ::System::Int32 materialID, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET))(this, matrix, materialID, shaderPass, topology, vertexCount, instanceCount, properties);
		}

		::System::Void Internal_DrawMeshInstanced(::System::Int32 meshID, ::System::Int32 submeshIndex, ::System::Int32 materialID, ::System::Int32 shaderPass, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWMESHINSTANCED_OFFSET))(this, meshID, submeshIndex, materialID, shaderPass, matrices, count, properties);
		}

		::System::Void Internal_DrawMeshInstancedIndirect(::System::Int32 meshID, ::System::Int32 submeshIndex, ::System::Int32 materialID, ::System::Int32 shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, meshID, submeshIndex, materialID, shaderPass, bufferWithArgs, argsOffset, properties);
		}

		::System::Void Blit_Identifier(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::System::Int32 matId, ::System::Int32 pass, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, ::System::Int32 sourceDepthSlice, ::System::Int32 destDepthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_BLIT_IDENTIFIER_OFFSET))(this, source, dest, matId, pass, scale, offset, sourceDepthSlice, destDepthSlice);
		}

		::System::Void SetViewport(::UnityEngine::Rect pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETVIEWPORT_OFFSET))(this, pixelRect);
		}

		::System::Void GetTemporaryRTWithDescriptor(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET))(this, nameID, desc, filter);
		}

		::System::Void ReleaseTemporaryRT(::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_RELEASETEMPORARYRT_OFFSET))(this, nameID);
		}

		::System::Void ClearRenderTarget(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_CLEARRENDERTARGET_OFFSET))(this, clearDepth, clearColor, backgroundColor, depth);
		}

		::System::Void SetGlobalFloat(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALFLOAT_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalVector(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALVECTOR_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalColor(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALCOLOR_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalMatrix(::System::Int32 nameID, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALMATRIX_OFFSET))(this, nameID, value);
		}

		::System::Void SetIntShaderKeyword(::System::Int32 keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETINTSHADERKEYWORD_OFFSET))(this, keyword, enable);
		}

		::System::Void SetViewProjectionMatrices(::UnityEngine::Matrix4x4& view, ::UnityEngine::Matrix4x4& proj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET))(this, view, proj);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALVECTORARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetGlobalTexture_Impl(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET))(this, nameID, rt, element);
		}

		::System::Void SetGlobalBuffer(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALBUFFER_OFFSET))(this, nameID, buffer);
		}

		::System::Void AddTextureBarrier_Impl(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::System::UInt32 barrierStages)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDTEXTUREBARRIER_IMPL_OFFSET))(this, nameID, rt, barrierStages);
		}

		::System::Void AddCollectTextureBarrier_Impl(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDCOLLECTTEXTUREBARRIER_IMPL_OFFSET))(this, nameID, rt);
		}

		::System::Void BeginSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_BEGINSAMPLE_OFFSET))(this, name);
		}

		::System::Void EndSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_ENDSAMPLE_OFFSET))(this, name);
		}

		::System::Void Internal_ApplyDynamicResolution(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_APPLYDYNAMICRESOLUTION_OFFSET))(this, rt);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy);
		}

		::System::Void SetRenderTarget_1(::UnityEngine::Rendering::RenderTargetIdentifier& color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_1_OFFSET))(this, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy);
		}

		::System::Void SetRenderTarget_2(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier& depth)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_2_OFFSET))(this, colors, depth);
		}

		::System::Void SetRenderTarget_3(::UnityEngine::Rendering::RenderTargetBinding& binding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBinding&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGET_3_OFFSET))(this, binding);
		}

		::System::Void ApplyDynamicResolution(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_APPLYDYNAMICRESOLUTION_OFFSET))(this, rt);
		}

		::System::Void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy);
		}

		::System::Void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier& color, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET))(this, color, depth, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy);
		}

		::System::Void SetRenderTargetMulti_Internal(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET))(this, colors, depth, colorLoadActions, colorStoreActions, depthLoadAction, depthStoreAction, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SET_NAME_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void SetComputeTextureParam(::System::Int32 computeShaderID, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::System::Int32 mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET))(this, computeShaderID, kernelIndex, nameID, rt, mipLevel, element);
		}

		::System::Void DispatchCompute(::System::Int32 computeShaderID, ::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPATCHCOMPUTE_OFFSET))(this, computeShaderID, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void DispatchCompute_1(::System::Int32 computeShaderID, ::System::Int32 kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, ::System::UInt32 argsOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DISPATCHCOMPUTE_1_OFFSET))(this, computeShaderID, kernelIndex, indirectBuffer, argsOffset);
		}

		::System::Void DrawMesh(::System::Int32 meshID, ::UnityEngine::Matrix4x4& matrix, ::System::Int32 materialID, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWMESH_OFFSET))(this, meshID, matrix, materialID, submeshIndex, shaderPass, properties);
		}

		::System::Void DrawProcedural(::UnityEngine::Matrix4x4& matrix, ::System::Int32 materialID, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWPROCEDURAL_OFFSET))(this, matrix, materialID, shaderPass, topology, vertexCount, instanceCount, properties);
		}

		::System::Void DrawMeshInstanced(::System::Int32 meshID, ::System::Int32 submeshIndex, ::System::Int32 materialID, ::System::Int32 shaderPass, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWMESHINSTANCED_OFFSET))(this, meshID, submeshIndex, materialID, shaderPass, matrices, count, properties);
		}

		::System::Void DrawMeshInstancedIndirect(::System::Int32 meshID, ::System::Int32 submeshIndex, ::System::Int32 materialID, ::System::Int32 shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, meshID, submeshIndex, materialID, shaderPass, bufferWithArgs, argsOffset, properties);
		}

		::System::Void Blit(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::System::Int32 matId, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_BLIT_OFFSET))(this, source, dest, matId, pass);
		}

		::System::Void SetGlobalTexture(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALTEXTURE_OFFSET))(this, nameID, value, element);
		}

		::System::Void AddTextureTransition(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::System::UInt32 barrierStages)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDTEXTURETRANSITION_OFFSET))(this, nameID, value, barrierStages);
		}

		::System::Void AddCollectTextureTransition(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_ADDCOLLECTTEXTURETRANSITION_OFFSET))(this, nameID, value);
		}

		static ::System::Void Internal_ExecuteDLSS_Injected(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::DLSSContext& context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::DLSSContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSS_INJECTED_OFFSET))(cmd, context);
		}

		static ::System::Void Internal_ExecuteDLSSG_Injected(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::DLSSContext& context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::DLSSContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEDLSSG_INJECTED_OFFSET))(cmd, context);
		}

		static ::System::Void Internal_RecreateSwapChain_Injected(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::DLSSContext& dlss, ::UnityEngine::Rendering::FSRContext& fsr)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::DLSSContext&, ::UnityEngine::Rendering::FSRContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_RECREATESWAPCHAIN_INJECTED_OFFSET))(cmd, dlss, fsr);
		}

		static ::System::Void Internal_ExecuteFSR_Injected(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::FSRContext& context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::FSRContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSR_INJECTED_OFFSET))(cmd, context);
		}

		static ::System::Void Internal_ExecuteFSRFrameGen_Injected(::UnityEngine::Rendering::SRPCmdBuffer* cmd, ::UnityEngine::Rendering::FSRContext& context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SRPCmdBuffer*, ::UnityEngine::Rendering::FSRContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_INTERNAL_EXECUTEFSRFRAMEGEN_INJECTED_OFFSET))(cmd, context);
		}

		::System::Void SetComputeVectorParam_Injected(::System::Int32 computeShaderID, ::System::Int32 nameID, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET))(this, computeShaderID, nameID, val);
		}

		::System::Void Blit_Identifier_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::System::Int32 matId, ::System::Int32 pass, ::UnityEngine::Vector2& scale, ::UnityEngine::Vector2& offset, ::System::Int32 sourceDepthSlice, ::System::Int32 destDepthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET))(this, source, dest, matId, pass, scale, offset, sourceDepthSlice, destDepthSlice);
		}

		::System::Void SetViewport_Injected(::UnityEngine::Rect& pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETVIEWPORT_INJECTED_OFFSET))(this, pixelRect);
		}

		::System::Void ClearRenderTarget_Injected(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color& backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET))(this, clearDepth, clearColor, backgroundColor, depth);
		}

		::System::Void SetGlobalVector_Injected(::System::Int32 nameID, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalColor_Injected(::System::Int32 nameID, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SRPCMDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET))(this, nameID, value);
		}
	};
}
