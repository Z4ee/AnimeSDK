#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Internal_DrawTextureArguments.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderBuffer.h"
#include "unitysdk/UnityEngine/RenderTargetSetup.h"
#include "unitysdk/UnityEngine/Rendering/ComputeQueueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsTier.h"
#include "unitysdk/UnityEngine/Rendering/LightProbeUsage.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class LightProbeProxyVolume; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_GRAPHICS_BLIT_1_OFFSET UNITYSDK_OFFSET(0x1D6F2350)
#define UNITYENGINE_GRAPHICS_BLIT_OFFSET UNITYSDK_OFFSET(0x1D6F22D0)
#define UNITYENGINE_GRAPHICS_CHECKLOADACTIONVALID_OFFSET UNITYSDK_OFFSET(0x1D6EFF70)
#define UNITYENGINE_GRAPHICS_CHECKSTOREACTIONVALID_OFFSET UNITYSDK_OFFSET(0x1D6F0020)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D6F0970)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1D6F09F0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1D6F0A70)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_FULL_OFFSET UNITYSDK_OFFSET(0x1D6EFB50)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D6F0900)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET UNITYSDK_OFFSET(0x1D6EFB80)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_ALLMIPS_OFFSET UNITYSDK_OFFSET(0x1D6EFB60)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET UNITYSDK_OFFSET(0x1D6EFB70)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1D6F2750)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x1D6F2850)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1D6F1C70)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x1D6F16E0)
#define UNITYENGINE_GRAPHICS_DRAWMESHNOW_1_OFFSET UNITYSDK_OFFSET(0x1D6F0FF0)
#define UNITYENGINE_GRAPHICS_DRAWMESHNOW_2_OFFSET UNITYSDK_OFFSET(0x1D6F1220)
#define UNITYENGINE_GRAPHICS_DRAWMESHNOW_3_OFFSET UNITYSDK_OFFSET(0x1D6F12C0)
#define UNITYENGINE_GRAPHICS_DRAWMESHNOW_OFFSET UNITYSDK_OFFSET(0x1D6F0DD0)
#define UNITYENGINE_GRAPHICS_DRAWMESH_1_OFFSET UNITYSDK_OFFSET(0x1D6F2410)
#define UNITYENGINE_GRAPHICS_DRAWMESH_2_OFFSET UNITYSDK_OFFSET(0x1D6F25E0)
#define UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1D6F1380)
#define UNITYENGINE_GRAPHICS_DRAWPROCEDURALNOW_OFFSET UNITYSDK_OFFSET(0x1D6F2260)
#define UNITYENGINE_GRAPHICS_DRAWTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1D6F0AF0)
#define UNITYENGINE_GRAPHICS_DRAWTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D6F2990)
#define UNITYENGINE_GRAPHICS_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D6F0C40)
#define UNITYENGINE_GRAPHICS_ENABLEEXECUTEASYNC_OFFSET UNITYSDK_OFFSET(0x1D6EFE90)
#define UNITYENGINE_GRAPHICS_ENABLEMETALHEAPOPT_OFFSET UNITYSDK_OFFSET(0x1D6EFF50)
#define UNITYENGINE_GRAPHICS_ENABLEMETALSHADERMEMOPT_OFFSET UNITYSDK_OFFSET(0x1D6EFEC0)
#define UNITYENGINE_GRAPHICS_ENABLEPERIODICFREEBUFFERTRIMMING_OFFSET UNITYSDK_OFFSET(0x1D6EFF20)
#define UNITYENGINE_GRAPHICS_ENABLEPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1D6EFF00)
#define UNITYENGINE_GRAPHICS_ENABLESHADERWARMUPBYJOB_OFFSET UNITYSDK_OFFSET(0x1D6EFF10)
#define UNITYENGINE_GRAPHICS_ENABLESRPINSTANCING_OFFSET UNITYSDK_OFFSET(0x1D6EFED0)
#define UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x1D6EFE10)
#define UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1D6EFE00)
#define UNITYENGINE_GRAPHICS_GETDRAWSTATSDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x1D6EFE20)
#define UNITYENGINE_GRAPHICS_GETDRAWSTATSSETPASSCALLS_OFFSET UNITYSDK_OFFSET(0x1D6EFE30)
#define UNITYENGINE_GRAPHICS_GETDRAWSTATSTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D6EFE50)
#define UNITYENGINE_GRAPHICS_GETDRAWSTATSVERTICES_OFFSET UNITYSDK_OFFSET(0x1D6EFE40)
#define UNITYENGINE_GRAPHICS_GETLIFETIMEIDFROMNAMEID_OFFSET UNITYSDK_OFFSET(0x1D6EFF40)
#define UNITYENGINE_GRAPHICS_GETLIFETIMEIDFROMNAME_OFFSET UNITYSDK_OFFSET(0x1D6EFF30)
#define UNITYENGINE_GRAPHICS_GETPRESERVEFRAMEBUFFERALPHA_OFFSET UNITYSDK_OFFSET(0x1D6EF9B0)
#define UNITYENGINE_GRAPHICS_GETSHADERCOMPILESTAMP_OFFSET UNITYSDK_OFFSET(0x1D6EFEA0)
#define UNITYENGINE_GRAPHICS_GET_ACTIVETIER_OFFSET UNITYSDK_OFFSET(0x1D6EF990)
#define UNITYENGINE_GRAPHICS_GET_PRESERVEFRAMEBUFFERALPHA_OFFSET UNITYSDK_OFFSET(0x1D6EF9C0)
#define UNITYENGINE_GRAPHICS_GET_USEDRAWSTATSBETWEENPASS_OFFSET UNITYSDK_OFFSET(0x1D6EFE60)
#define UNITYENGINE_GRAPHICS_INITIALIZENAPPVSHANDLES_OFFSET UNITYSDK_OFFSET(0x1D6EFE80)
#define UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET UNITYSDK_OFFSET(0x1D6EFDF0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EFDD0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1D6EFD50)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x1D6EFD40)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EFC10)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW1_OFFSET UNITYSDK_OFFSET(0x1D6EFB90)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EFC90)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_OFFSET UNITYSDK_OFFSET(0x1D6EFC20)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EFD30)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1D6EFCB0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURALNOW_OFFSET UNITYSDK_OFFSET(0x1D6EFDE0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D6EFCA0)
#define UNITYENGINE_GRAPHICS_INTERNAL_GETMAXDRAWMESHINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1D6EF980)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETMRTFULLSETUP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EFB40)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETMRTFULLSETUP_OFFSET UNITYSDK_OFFSET(0x1D6EFAC0)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET UNITYSDK_OFFSET(0x1D6EFA20)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EFAB0)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET UNITYSDK_OFFSET(0x1D6EFA30)
#define UNITYENGINE_GRAPHICS_ISENABLEDYNAMICCACHE_OFFSET UNITYSDK_OFFSET(0x1D6EFEF0)
#define UNITYENGINE_GRAPHICS_ISPIPELINCACHEVALID_OFFSET UNITYSDK_OFFSET(0x1D6EFEE0)
#define UNITYENGINE_GRAPHICS_SETENABLEFORCEMETALTEXTURESWAPPABLE_OFFSET UNITYSDK_OFFSET(0x1D6EFF60)
#define UNITYENGINE_GRAPHICS_SETGPUMEMOPTPARAMS_OFFSET UNITYSDK_OFFSET(0x1D6EFEB0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_1_OFFSET UNITYSDK_OFFSET(0x1D6F0450)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_2_OFFSET UNITYSDK_OFFSET(0x1D6F0540)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x1D6F00D0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1D6F0850)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1D6F2A80)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1D6F2B30)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1D6F07E0)
#define UNITYENGINE_GRAPHICS_SET_ACTIVETIER_OFFSET UNITYSDK_OFFSET(0x1D6EF9A0)
#define UNITYENGINE_GRAPHICS_SET_USEDRAWSTATSBETWEENPASS_OFFSET UNITYSDK_OFFSET(0x1D6EFE70)
#define UNITYENGINE_GRAPHICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6F2BF0)
#define UNITYENGINE_GRAPHICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F2BE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Graphics_TypeDefinitionIndex = 5180;

	class Graphics : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_kMaxDrawMeshInstanceCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Graphics_TypeDefinitionIndex)->GetStaticField(0x2600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS__CCTOR_OFFSET))();
		}

		static ::System::Int32 Internal_GetMaxDrawMeshInstanceCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_GETMAXDRAWMESHINSTANCECOUNT_OFFSET))();
		}

		static ::UnityEngine::Rendering::GraphicsTier get_activeTier()
		{
			return ((::UnityEngine::Rendering::GraphicsTier(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GET_ACTIVETIER_OFFSET))();
		}

		static ::System::Void set_activeTier(::UnityEngine::Rendering::GraphicsTier value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::GraphicsTier))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SET_ACTIVETIER_OFFSET))(value);
		}

		static ::System::Boolean GetPreserveFramebufferAlpha()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETPRESERVEFRAMEBUFFERALPHA_OFFSET))();
		}

		static ::System::Boolean get_preserveFramebufferAlpha()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GET_PRESERVEFRAMEBUFFERALPHA_OFFSET))();
		}

		static ::System::Void Internal_SetNullRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET))();
		}

		static ::System::Void Internal_SetRTSimple(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET))(color, depth, mip, face, depthSlice);
		}

		static ::System::Void Internal_SetMRTFullSetup(::Il2CppArray<::UnityEngine::RenderBuffer>* color, ::UnityEngine::RenderBuffer depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLA, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction depthSA)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RenderBuffer>*, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETMRTFULLSETUP_OFFSET))(color, depth, mip, face, depthSlice, colorLA, colorSA, depthLA, depthSA);
		}

		static ::System::Void CopyTexture_Full(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_FULL_OFFSET))(src, dst);
		}

		static ::System::Void CopyTexture_Slice_AllMips(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::UnityEngine::Texture* dst, ::System::Int32 dstElement)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_ALLMIPS_OFFSET))(src, srcElement, dst, dstElement);
		}

		static ::System::Void CopyTexture_Slice(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::UnityEngine::Texture* dst, ::System::Int32 dstElement, ::System::Int32 dstMip)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET))(src, srcElement, srcMip, dst, dstElement, dstMip);
		}

		static ::System::Void CopyTexture_Region(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 srcX, ::System::Int32 srcY, ::System::Int32 srcWidth, ::System::Int32 srcHeight, ::UnityEngine::Texture* dst, ::System::Int32 dstElement, ::System::Int32 dstMip, ::System::Int32 dstX, ::System::Int32 dstY)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET))(src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
		}

		static ::System::Void Internal_DrawMeshNow1(::UnityEngine::Mesh* mesh, ::System::Int32 subsetIndex, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW1_OFFSET))(mesh, subsetIndex, position, rotation);
		}

		static ::System::Void Internal_DrawMeshNow2(::UnityEngine::Mesh* mesh, ::System::Int32 subsetIndex, ::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_OFFSET))(mesh, subsetIndex, matrix);
		}

		static ::System::Void Internal_DrawTexture(::UnityEngine::Internal_DrawTextureArguments& args)
		{
			return ((::System::Void(*)(::UnityEngine::Internal_DrawTextureArguments&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET))(args);
		}

		static ::System::Void Internal_DrawMesh(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET))(mesh, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void Internal_DrawProceduralNow(::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount)
		{
			return ((::System::Void(*)(::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURALNOW_OFFSET))(topology, vertexCount, instanceCount);
		}

		static ::System::Void Internal_BlitMaterial5(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, ::System::Int32 pass, ::System::Boolean setRT)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET))(source, dest, mat, pass, setRT);
		}

		static ::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET))(buffer);
		}

		static ::System::Void ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFERASYNC_OFFSET))(buffer, queueType);
		}

		static ::System::UInt64 GetDrawStatsDrawCalls()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETDRAWSTATSDRAWCALLS_OFFSET))();
		}

		static ::System::UInt64 GetDrawStatsSetPassCalls()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETDRAWSTATSSETPASSCALLS_OFFSET))();
		}

		static ::System::UInt64 GetDrawStatsVertices()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETDRAWSTATSVERTICES_OFFSET))();
		}

		static ::System::UInt64 GetDrawStatsTriangles()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETDRAWSTATSTRIANGLES_OFFSET))();
		}

		static ::System::Int32 get_UseDrawStatsBetweenPass()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GET_USEDRAWSTATSBETWEENPASS_OFFSET))();
		}

		static ::System::Void set_UseDrawStatsBetweenPass(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SET_USEDRAWSTATSBETWEENPASS_OFFSET))(value);
		}

		static ::System::Boolean InitializeNapPVSHandles(::Il2CppArray<::System::Int32>* instance2PVSHandleMap)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INITIALIZENAPPVSHANDLES_OFFSET))(instance2PVSHandleMap);
		}

		static ::System::Void EnableExecuteAsync(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLEEXECUTEASYNC_OFFSET))(enable);
		}

		static ::System::UInt64 GetShaderCompileStamp()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETSHADERCOMPILESTAMP_OFFSET))();
		}

		static ::System::Void SetGpuMemOptParams(::Il2CppArray<::System::Int32>* parameters)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETGPUMEMOPTPARAMS_OFFSET))(parameters);
		}

		static ::System::Void EnableMetalShaderMemOpt(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLEMETALSHADERMEMOPT_OFFSET))(enable);
		}

		static ::System::Void EnableSRPInstancing(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLESRPINSTANCING_OFFSET))(enable);
		}

		static ::System::Boolean IsPipelinCacheValid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ISPIPELINCACHEVALID_OFFSET))();
		}

		static ::System::Boolean IsEnableDynamicCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ISENABLEDYNAMICCACHE_OFFSET))();
		}

		static ::System::Void EnablePSOWarmup(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLEPSOWARMUP_OFFSET))(enable);
		}

		static ::System::Void EnableShaderWarmupByJob(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLESHADERWARMUPBYJOB_OFFSET))(enable);
		}

		static ::System::Void EnablePeriodicFreeBufferTrimming(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLEPERIODICFREEBUFFERTRIMMING_OFFSET))(enable);
		}

		static ::System::UInt32 GetLifeTimeIdFromName(::System::String* name)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETLIFETIMEIDFROMNAME_OFFSET))(name);
		}

		static ::System::UInt32 GetLifeTimeIdFromNameId(::System::Int32 nameID)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_GETLIFETIMEIDFROMNAMEID_OFFSET))(nameID);
		}

		static ::System::Void EnableMetalHeapOpt(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_ENABLEMETALHEAPOPT_OFFSET))(enable);
		}

		static ::System::Void SetEnableForceMetalTextureSwappable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETENABLEFORCEMETALTEXTURESWAPPABLE_OFFSET))(enable);
		}

		static ::System::Void CheckLoadActionValid(::UnityEngine::Rendering::RenderBufferLoadAction load, ::System::String* bufferType)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderBufferLoadAction, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_CHECKLOADACTIONVALID_OFFSET))(load, bufferType);
		}

		static ::System::Void CheckStoreActionValid(::UnityEngine::Rendering::RenderBufferStoreAction store, ::System::String* bufferType)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderBufferStoreAction, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_CHECKSTOREACTIONVALID_OFFSET))(store, bufferType);
		}

		static ::System::Void SetRenderTargetImpl(::UnityEngine::RenderTargetSetup setup)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTargetSetup))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET))(setup);
		}

		static ::System::Void SetRenderTargetImpl_1(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_1_OFFSET))(colorBuffer, depthBuffer, mipLevel, face, depthSlice);
		}

		static ::System::Void SetRenderTargetImpl_2(::UnityEngine::RenderTexture* rt, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_2_OFFSET))(rt, mipLevel, face, depthSlice);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::RenderTexture* rt, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET))(rt, mipLevel, face, depthSlice);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::RenderTargetSetup setup)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTargetSetup))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_1_OFFSET))(setup);
		}

		static ::System::Void CopyTexture(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET))(src, dst);
		}

		static ::System::Void CopyTexture_1(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::UnityEngine::Texture* dst, ::System::Int32 dstElement)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_1_OFFSET))(src, srcElement, dst, dstElement);
		}

		static ::System::Void CopyTexture_2(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::UnityEngine::Texture* dst, ::System::Int32 dstElement, ::System::Int32 dstMip)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_2_OFFSET))(src, srcElement, srcMip, dst, dstElement, dstMip);
		}

		static ::System::Void CopyTexture_3(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 srcX, ::System::Int32 srcY, ::System::Int32 srcWidth, ::System::Int32 srcHeight, ::UnityEngine::Texture* dst, ::System::Int32 dstElement, ::System::Int32 dstMip, ::System::Int32 dstX, ::System::Int32 dstY)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_3_OFFSET))(src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
		}

		static ::System::Void DrawTextureImpl(::UnityEngine::Rect screenRect, ::UnityEngine::Texture* texture, ::UnityEngine::Rect sourceRect, ::System::Int32 leftBorder, ::System::Int32 rightBorder, ::System::Int32 topBorder, ::System::Int32 bottomBorder, ::UnityEngine::Color color, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWTEXTUREIMPL_OFFSET))(screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
		}

		static ::System::Void DrawTexture(::UnityEngine::Rect screenRect, ::UnityEngine::Texture* texture, ::UnityEngine::Rect sourceRect, ::System::Int32 leftBorder, ::System::Int32 rightBorder, ::System::Int32 topBorder, ::System::Int32 bottomBorder, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWTEXTURE_OFFSET))(screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, mat, pass);
		}

		static ::System::Void DrawMeshNow(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHNOW_OFFSET))(mesh, position, rotation, materialIndex);
		}

		static ::System::Void DrawMeshNow_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHNOW_1_OFFSET))(mesh, matrix, materialIndex);
		}

		static ::System::Void DrawMeshNow_2(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHNOW_2_OFFSET))(mesh, position, rotation);
		}

		static ::System::Void DrawMeshNow_3(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHNOW_3_OFFSET))(mesh, matrix);
		}

		static ::System::Void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::System::Int32 submeshIndex, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET))(mesh, matrix, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void DrawMeshInstanced(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void DrawProceduralNow(::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount)
		{
			return ((::System::Void(*)(::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWPROCEDURALNOW_OFFSET))(topology, vertexCount, instanceCount);
		}

		static ::System::Void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_OFFSET))(source, dest, mat, pass);
		}

		static ::System::Void Blit_1(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_1_OFFSET))(source, dest, mat);
		}

		static ::System::Void DrawMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::System::Int32 submeshIndex, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_1_OFFSET))(mesh, matrix, material, layer, camera, submeshIndex, properties);
		}

		static ::System::Void DrawMesh_2(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::System::Int32 submeshIndex, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::System::Boolean useLightProbes)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_2_OFFSET))(mesh, matrix, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, probeAnchor, useLightProbes);
		}

		static ::System::Void DrawMeshInstancedIndirect_1(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_1_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs);
		}

		static ::System::Void DrawMeshInstancedIndirect_2(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_2_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void DrawTexture_1(::UnityEngine::Rect screenRect, ::UnityEngine::Texture* texture, ::UnityEngine::Rect sourceRect, ::System::Int32 leftBorder, ::System::Int32 rightBorder, ::System::Int32 topBorder, ::System::Int32 bottomBorder, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWTEXTURE_1_OFFSET))(screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, mat);
		}

		static ::System::Void SetRenderTarget_2(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_2_OFFSET))(rt);
		}

		static ::System::Void SetRenderTarget_3(::UnityEngine::RenderTexture* rt, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_3_OFFSET))(rt, mipLevel);
		}

		static ::System::Void Internal_SetRTSimple_Injected(::UnityEngine::RenderBuffer& color, ::UnityEngine::RenderBuffer& depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer&, ::UnityEngine::RenderBuffer&, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET))(color, depth, mip, face, depthSlice);
		}

		static ::System::Void Internal_SetMRTFullSetup_Injected(::Il2CppArray<::UnityEngine::RenderBuffer>* color, ::UnityEngine::RenderBuffer& depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLA, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction depthSA)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RenderBuffer>*, ::UnityEngine::RenderBuffer&, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETMRTFULLSETUP_INJECTED_OFFSET))(color, depth, mip, face, depthSlice, colorLA, colorSA, depthLA, depthSA);
		}

		static ::System::Void Internal_DrawMeshNow1_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 subsetIndex, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW1_INJECTED_OFFSET))(mesh, subsetIndex, position, rotation);
		}

		static ::System::Void Internal_DrawMeshNow2_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 subsetIndex, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_INJECTED_OFFSET))(mesh, subsetIndex, matrix);
		}

		static ::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET))(mesh, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds& bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_INJECTED_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
		}
	};
}
