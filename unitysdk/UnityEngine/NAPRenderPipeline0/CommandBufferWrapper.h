#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EDynamicCacheMemoryPolicy.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Rendering/MetalFXUpScaleColorSpace.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class SRPCmdBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ADDCOLLECTTEXTURETRANSITION_OFFSET UNITYSDK_OFFSET(0xA51D70)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ADDTEXTURETRANSITION_OFFSET UNITYSDK_OFFSET(0xA51CE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_APPLYDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA53030)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xA52F90)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_BLIT_1_OFFSET UNITYSDK_OFFSET(0xA52E00)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_BLIT_OFFSET UNITYSDK_OFFSET(0xA52CA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA52B30)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DISPATCHCOMPUTE_1_OFFSET UNITYSDK_OFFSET(0xA53330)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0xA532C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0xA533E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0xA52020)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA520C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWPROCEDURAL_1_OFFSET UNITYSDK_OFFSET(0xA52240)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0xA52180)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xA52FE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEDLSSG_OFFSET UNITYSDK_OFFSET(0xA534F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEDLSS_OFFSET UNITYSDK_OFFSET(0xA53480)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEFSRFRAMEGEN_OFFSET UNITYSDK_OFFSET(0xA535D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEFSR_OFFSET UNITYSDK_OFFSET(0xA53560)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEMETALFXUPSCALE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA52320)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ISVALID_OFFSET UNITYSDK_OFFSET(0xA51C50)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_RECREATESWAPCHAIN_OFFSET UNITYSDK_OFFSET(0xA53640)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0xA52390)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0xA53250)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEFLOATPARAM_OFFSET UNITYSDK_OFFSET(0xA530C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEINTPARAM_OFFSET UNITYSDK_OFFSET(0xA53070)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA53180)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEVECTORPARAM_OFFSET UNITYSDK_OFFSET(0xA53110)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0xA53390)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA51EA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA51DF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0xA51F00)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA51C70)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA51F70)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA51E40)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETINTSHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0xA51FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETCOLORANDDEPTH_OFFSET UNITYSDK_OFFSET(0xA52830)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETCOLOR_1_OFFSET UNITYSDK_OFFSET(0xA52620)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETCOLOR_OFFSET UNITYSDK_OFFSET(0xA52460)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETMRT_OFFSET UNITYSDK_OFFSET(0xA52AD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETWITHBINDING_OFFSET UNITYSDK_OFFSET(0xA523E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0xA52C40)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETVIEWPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0xA52BA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA51C40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CommandBufferWrapper_TypeDefinitionIndex = 5997;

	struct alignas(8) CommandBufferWrapper
	{
		::UnityEngine::Rendering::CommandBuffer* CmdBuffer; // 0x10
		::UnityEngine::Rendering::SRPCmdBuffer* SRPBuffer; // 0x18

		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER__CTOR_OFFSET))(this, cmdBuffer);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ISVALID_OFFSET))(this);
		}

		/*
		::System::Void SetGlobalTexture(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rtid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALTEXTURE_OFFSET))(this, nameID, rtid);
		}
		*/

		/*
		::System::Void AddTextureTransition(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rtid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ADDTEXTURETRANSITION_OFFSET))(this, nameID, rtid);
		}
		*/

		/*
		::System::Void AddCollectTextureTransition(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rtid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ADDCOLLECTTEXTURETRANSITION_OFFSET))(this, nameID, rtid);
		}
		*/

		::System::Void SetGlobalFloat(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALFLOAT_OFFSET))(this, nameID, value);
		}

		/*
		::System::Void SetGlobalVector(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALVECTOR_OFFSET))(this, nameID, value);
		}
		*/

		/*
		::System::Void SetGlobalColor(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALCOLOR_OFFSET))(this, nameID, value);
		}
		*/

		/*
		::System::Void SetGlobalMatrix(::System::Int32 nameID, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALMATRIX_OFFSET))(this, nameID, matrix);
		}
		*/

		/*
		::System::Void SetGlobalVectorArray(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALVECTORARRAY_OFFSET))(this, nameID, array);
		}
		*/

		::System::Void SetIntShaderKeyword(::System::Int32 keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETINTSHADERKEYWORD_OFFSET))(this, keyword, enable);
		}

		/*
		::System::Void DrawMeshInstanced(::System::Int32 meshID, ::UnityEngine::Mesh* mesh, ::System::Int32 subMeshIndex, ::System::Int32 materialID, ::UnityEngine::Material* material, ::System::Int32 pass, ::System::Int32 count, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWMESHINSTANCED_OFFSET))(this, meshID, mesh, subMeshIndex, materialID, material, pass, count, matrices);
		}
		*/

		/*
		::System::Void DrawMesh(::System::Int32 meshID, ::UnityEngine::Mesh* mesh, ::System::Int32 subMeshIndex, ::UnityEngine::Matrix4x4& matrix, ::System::Int32 materialID, ::UnityEngine::Material* material, ::System::Int32 pass, ::UnityEngine::MaterialPropertyBlock* props)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWMESH_OFFSET))(this, meshID, mesh, subMeshIndex, matrix, materialID, material, pass, props);
		}
		*/

		/*
		::System::Void DrawProcedural(::UnityEngine::Matrix4x4& matrix, ::System::Int32 materialID, ::UnityEngine::Material* material, ::System::Int32 pass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWPROCEDURAL_OFFSET))(this, matrix, materialID, material, pass, topology, vertexCount, instanceCount);
		}
		*/

		/*
		::System::Void DrawProcedural_1(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* materialWrapper, ::System::Int32 pass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWPROCEDURAL_1_OFFSET))(this, matrix, materialWrapper, pass, topology, vertexCount, instanceCount);
		}
		*/

		/*
		::System::Void GetTemporaryRTWithDescriptor(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode filterMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET))(this, nameID, desc, filterMode);
		}
		*/

		::System::Void ReleaseTemporaryRT(::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_RELEASETEMPORARYRT_OFFSET))(this, nameID);
		}

		/*
		::System::Void SetRenderTargetWithBinding(::UnityEngine::Rendering::RenderTargetBinding& binding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBinding&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETWITHBINDING_OFFSET))(this, binding);
		}
		*/

		/*
		::System::Void SetRenderTargetColor(::UnityEngine::Rendering::RenderTargetIdentifier& rtid, ::UnityEngine::Rendering::RenderBufferLoadAction load, ::UnityEngine::Rendering::RenderBufferStoreAction store, ::System::Boolean forceLoadAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETCOLOR_OFFSET))(this, rtid, load, store, forceLoadAction);
		}
		*/

		/*
		::System::Void SetRenderTargetColor_1(::UnityEngine::Rendering::RenderTargetIdentifier& colorID, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoad, ::UnityEngine::Rendering::RenderBufferStoreAction colorStore, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy, ::System::Boolean forceLoadAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETCOLOR_1_OFFSET))(this, colorID, colorLoad, colorStore, depthLoad, depthStore, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy, forceLoadAction);
		}
		*/

		/*
		::System::Void SetRenderTargetColorAndDepth(::UnityEngine::Rendering::RenderTargetIdentifier& colorID, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoad, ::UnityEngine::Rendering::RenderBufferStoreAction colorStore, ::UnityEngine::Rendering::RenderTargetIdentifier& depthID, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore, ::System::Int32 dynamicCachecount, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* rtDynamicCache, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicMemoryPolicy, ::System::Boolean forceLoadAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETCOLORANDDEPTH_OFFSET))(this, colorID, colorLoad, colorStore, depthID, depthLoad, depthStore, dynamicCachecount, rtDynamicCache, dynamicMemoryPolicy, forceLoadAction);
		}
		*/

		/*
		::System::Void SetRenderTargetMRT(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier& depth)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETRENDERTARGETMRT_OFFSET))(this, colors, depth);
		}
		*/

		/*
		::System::Void ClearRenderTarget(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_CLEARRENDERTARGET_OFFSET))(this, clearDepth, clearColor, backgroundColor, depth);
		}
		*/

		/*
		::System::Void SetViewProjectionMatrices(::UnityEngine::Matrix4x4& view, ::UnityEngine::Matrix4x4& proj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETVIEWPROJECTIONMATRICES_OFFSET))(this, view, proj);
		}
		*/

		/*
		::System::Void SetViewport(::UnityEngine::Rect pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETVIEWPORT_OFFSET))(this, pixelRect);
		}
		*/

		/*
		::System::Void Blit(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::System::Int32 matID, ::UnityEngine::Material* material, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_BLIT_OFFSET))(this, source, destination, matID, material, pass);
		}
		*/

		/*
		::System::Void Blit_1(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* matWrapper, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_BLIT_1_OFFSET))(this, source, destination, matWrapper, pass);
		}
		*/

		::System::Void BeginSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_BEGINSAMPLE_OFFSET))(this, name);
		}

		::System::Void EndSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_ENDSAMPLE_OFFSET))(this, name);
		}

		::System::Void ApplyDynamicScale(::UnityEngine::RenderTexture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_APPLYDYNAMICSCALE_OFFSET))(this, tex);
		}

		::System::Void SetComputeIntParam(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEINTPARAM_OFFSET))(this, computeShaderID, computeShader, nameID, val);
		}

		::System::Void SetComputeFloatParam(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEFLOATPARAM_OFFSET))(this, computeShaderID, computeShader, nameID, val);
		}

		/*
		::System::Void SetComputeVectorParam(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEVECTORPARAM_OFFSET))(this, computeShaderID, computeShader, nameID, val);
		}
		*/

		/*
		::System::Void SetComputeTextureParam(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTETEXTUREPARAM_OFFSET))(this, computeShaderID, computeShader, kernelIndex, nameID, rt);
		}
		*/

		::System::Void SetComputeBufferParam(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETCOMPUTEBUFFERPARAM_OFFSET))(this, computeShaderID, computeShader, kernelIndex, nameID, buffer);
		}

		::System::Void DispatchCompute(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DISPATCHCOMPUTE_OFFSET))(this, computeShaderID, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void DispatchCompute_1(::System::Int32 computeShaderID, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, ::System::UInt32 argsOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DISPATCHCOMPUTE_1_OFFSET))(this, computeShaderID, computeShader, kernelIndex, indirectBuffer, argsOffset);
		}

		::System::Void SetGlobalBuffer(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_SETGLOBALBUFFER_OFFSET))(this, nameID, value);
		}

		::System::Void DrawMeshInstancedIndirect(::System::Int32 meshID, ::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::System::Int32 materialID, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, meshID, mesh, submeshIndex, materialID, material, shaderPass, bufferWithArgs);
		}

		/*
		::System::Void ExecuteDLSS(::UnityEngine::Rendering::DLSSContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSContext))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEDLSS_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void ExecuteDLSSG(::UnityEngine::Rendering::DLSSContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSContext))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEDLSSG_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void ExecuteFSR(::UnityEngine::Rendering::FSRContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEFSR_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void ExecuteFSRFrameGen(::UnityEngine::Rendering::FSRContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEFSRFRAMEGEN_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void RecreateSwapChain(::UnityEngine::Rendering::DLSSContext dlss, ::UnityEngine::Rendering::FSRContext fsr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSContext, ::UnityEngine::Rendering::FSRContext))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_RECREATESWAPCHAIN_OFFSET))(this, dlss, fsr);
		}
		*/

		/*
		::System::Void ExecuteMetalFXUpscale(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Rendering::MetalFXUpScaleColorSpace colorSpace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::MetalFXUpScaleColorSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERWRAPPER_EXECUTEMETALFXUPSCALE_OFFSET))(this, source, dest, colorSpace);
		}
		*/
	};
}
