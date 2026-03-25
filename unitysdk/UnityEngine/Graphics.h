#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Internal_DrawTextureArguments.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/RenderBuffer.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsTier.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_GRAPHICS_BLIT2_OFFSET UNITYSDK_OFFSET(0x18A0E920)
#define UNITYENGINE_GRAPHICS_BLIT4_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0E980)
#define UNITYENGINE_GRAPHICS_BLIT4_OFFSET UNITYSDK_OFFSET(0x18A0E930)
#define UNITYENGINE_GRAPHICS_BLIT_1_OFFSET UNITYSDK_OFFSET(0x18A105F0)
#define UNITYENGINE_GRAPHICS_BLIT_2_OFFSET UNITYSDK_OFFSET(0x18A10670)
#define UNITYENGINE_GRAPHICS_BLIT_3_OFFSET UNITYSDK_OFFSET(0x18A106C0)
#define UNITYENGINE_GRAPHICS_BLIT_OFFSET UNITYSDK_OFFSET(0x18A105B0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18A0EC80)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x18A0ECD0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A0EC30)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET UNITYSDK_OFFSET(0x18A0E6A0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_ALLMIPS_OFFSET UNITYSDK_OFFSET(0x18A0E680)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET UNITYSDK_OFFSET(0x18A0E690)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x18A0FF30)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x18A102C0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_3_OFFSET UNITYSDK_OFFSET(0x18A10F80)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_4_OFFSET UNITYSDK_OFFSET(0x18A11090)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_5_OFFSET UNITYSDK_OFFSET(0x18A111B0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_6_OFFSET UNITYSDK_OFFSET(0x18A112E0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x18A0FC90)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x18A0F9F0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_10_OFFSET UNITYSDK_OFFSET(0x18A10E70)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_11_OFFSET UNITYSDK_OFFSET(0x18A10EF0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_1_OFFSET UNITYSDK_OFFSET(0x18A0F4A0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_2_OFFSET UNITYSDK_OFFSET(0x18A0F560)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_3_OFFSET UNITYSDK_OFFSET(0x18A0F6B0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_4_OFFSET UNITYSDK_OFFSET(0x18A10AA0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_5_OFFSET UNITYSDK_OFFSET(0x18A10C30)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_6_OFFSET UNITYSDK_OFFSET(0x18A10CD0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_7_OFFSET UNITYSDK_OFFSET(0x18A10B60)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_8_OFFSET UNITYSDK_OFFSET(0x18A10D80)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_9_OFFSET UNITYSDK_OFFSET(0x18A10DF0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x18A0F1F0)
#define UNITYENGINE_GRAPHICS_DRAWMESHNOW_OFFSET UNITYSDK_OFFSET(0x18A0ED20)
#define UNITYENGINE_GRAPHICS_DRAWMESH_1_OFFSET UNITYSDK_OFFSET(0x18A0F090)
#define UNITYENGINE_GRAPHICS_DRAWMESH_2_OFFSET UNITYSDK_OFFSET(0x18A10720)
#define UNITYENGINE_GRAPHICS_DRAWMESH_3_OFFSET UNITYSDK_OFFSET(0x18A108D0)
#define UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x18A0EE70)
#define UNITYENGINE_GRAPHICS_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x18A103D0)
#define UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_1_OFFSET UNITYSDK_OFFSET(0x18A10560)
#define UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x18A10510)
#define UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x18A0E990)
#define UNITYENGINE_GRAPHICS_GET_ACTIVETIER_OFFSET UNITYSDK_OFFSET(0x18A0E610)
#define UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET UNITYSDK_OFFSET(0x18A0E910)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A11500)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_OFFSET UNITYSDK_OFFSET(0x18A0E850)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A114F0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x18A0E800)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A114E0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x18A0E7B0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_1_OFFSET UNITYSDK_OFFSET(0x18A0E760)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A114D0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x18A0E750)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A114B0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_OFFSET UNITYSDK_OFFSET(0x18A0E6B0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A114C0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x18A0E700)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A11510)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x18A0E8A0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH1_OFFSET UNITYSDK_OFFSET(0x18A0E900)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x18A0E8F0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A0E6F0)
#define UNITYENGINE_GRAPHICS_INTERNAL_GETMAXDRAWMESHINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x18A0E600)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET UNITYSDK_OFFSET(0x18A0E620)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A114A0)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET UNITYSDK_OFFSET(0x18A0E630)
#define UNITYENGINE_GRAPHICS_SETGLCLIPCONTROL_OFFSET UNITYSDK_OFFSET(0x18A0E9B0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_1_OFFSET UNITYSDK_OFFSET(0x18A0EA60)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x18A0E9C0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x18A11430)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x18A0EBE0)
#define UNITYENGINE_GRAPHICS_SETUSESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x18A0E9A0)
#define UNITYENGINE_GRAPHICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A11480)

namespace UnityEngine
{
	inline static constexpr unsigned int Graphics_TypeDefinitionIndex = 3930;

	class Graphics : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_kMaxDrawMeshInstanceCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Graphics_TypeDefinitionIndex)->GetStaticField(0x5870);
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

		static ::System::Void Internal_SetNullRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET))();
		}

		static ::System::Void Internal_SetRTSimple(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET))(color, depth, mip, face, depthSlice);
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

		static ::System::Void Internal_DrawMeshNow2(::UnityEngine::Mesh* mesh, ::System::Int32 subsetIndex, ::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_OFFSET))(mesh, subsetIndex, matrix);
		}

		static ::System::Void Internal_DrawTexture(::UnityEngine::Internal_DrawTextureArguments& args)
		{
			return ((::System::Void(*)(::UnityEngine::Internal_DrawTextureArguments&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET))(args);
		}

		static ::System::Void Internal_DrawMesh(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET))(mesh, submeshIndex, matrix, material, layer, renderingLayerMask, camera, properties, castShadows, receiveShadows);
		}

		static ::System::Void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawMeshInstanced_1(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_1_OFFSET))(mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_OFFSET))(mesh, submeshIndex, material, bounds, count, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect1(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_OFFSET))(mesh, submeshIndex, matrix, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawProcedural(::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_OFFSET))(material, bounds, topology, vertexCount, instanceCount, camera, properties, castShadows, receiveShadows, layer);
		}

		static ::System::Void Internal_DrawSkinnedMesh(::UnityEngine::SkinnedMeshRenderer* renderer, ::Il2CppArray<::UnityEngine::Material*>* materials, ::UnityEngine::Camera* camera, ::System::UInt32 renderingLayerMask)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH_OFFSET))(renderer, materials, camera, renderingLayerMask);
		}

		static ::System::Void Internal_DrawSkinnedMesh1(::UnityEngine::SkinnedMeshRenderer* renderer, ::UnityEngine::Material* material, ::UnityEngine::Camera* camera, ::System::UInt32 renderingLayerMask, ::System::Int32 submeshIndex)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH1_OFFSET))(renderer, material, camera, renderingLayerMask, submeshIndex);
		}

		static ::System::Void Internal_BlitMaterial5(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, ::System::Int32 pass, ::System::Boolean setRT)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET))(source, dest, mat, pass, setRT);
		}

		static ::System::Void Blit2(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT2_OFFSET))(source, dest);
		}

		static ::System::Void Blit4(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT4_OFFSET))(source, dest, scale, offset);
		}

		static ::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET))(buffer);
		}

		static ::System::Void SetUsesReversedZBuffer(::System::Boolean useReverseZ)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETUSESREVERSEDZBUFFER_OFFSET))(useReverseZ);
		}

		static ::System::Void SetGLClipControl(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETGLCLIPCONTROL_OFFSET))(enable);
		}

		static ::System::Void SetRenderTargetImpl(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET))(colorBuffer, depthBuffer, mipLevel, face, depthSlice);
		}

		static ::System::Void SetRenderTargetImpl_1(::UnityEngine::RenderTexture* rt, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_1_OFFSET))(rt, mipLevel, face, depthSlice);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::RenderTexture* rt, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET))(rt, mipLevel, face, depthSlice);
		}

		static ::System::Void CopyTexture(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::UnityEngine::Texture* dst, ::System::Int32 dstElement)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET))(src, srcElement, dst, dstElement);
		}

		static ::System::Void CopyTexture_1(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::UnityEngine::Texture* dst, ::System::Int32 dstElement, ::System::Int32 dstMip)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_1_OFFSET))(src, srcElement, srcMip, dst, dstElement, dstMip);
		}

		static ::System::Void CopyTexture_2(::UnityEngine::Texture* src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 srcX, ::System::Int32 srcY, ::System::Int32 srcWidth, ::System::Int32 srcHeight, ::UnityEngine::Texture* dst, ::System::Int32 dstElement, ::System::Int32 dstMip, ::System::Int32 dstX, ::System::Int32 dstY)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_2_OFFSET))(src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
		}

		static ::System::Void DrawMeshNow(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHNOW_OFFSET))(mesh, matrix, materialIndex);
		}

		static ::System::Void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera, ::System::Int32 submeshIndex, ::UnityEngine::MaterialPropertyBlock* properties, ::System::Boolean castShadows, ::System::Boolean receiveShadows, ::System::Boolean useLightProbesNotUsed)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET))(mesh, matrix, material, layer, renderingLayerMask, camera, submeshIndex, properties, castShadows, receiveShadows, useLightProbesNotUsed);
		}

		static ::System::Void DrawMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera, ::System::Int32 submeshIndex, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_1_OFFSET))(mesh, matrix, material, layer, renderingLayerMask, camera, submeshIndex, properties, castShadows, receiveShadows);
		}

		static ::System::Void DrawMeshInstanced(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void DrawMeshInstanced_1(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_1_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void DrawMeshInstanced_2(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_2_OFFSET))(mesh, submeshIndex, material, matrices, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void DrawMeshInstanced_3(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_3_OFFSET))(mesh, submeshIndex, material, bounds, matrices, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDPROCEDURAL_OFFSET))(mesh, submeshIndex, material, bounds, count, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void DrawMeshInstancedIndirect_1(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_1_OFFSET))(mesh, submeshIndex, matrix, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void DrawMeshInstancedIndirect_2(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_2_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void DrawProcedural(::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWPROCEDURAL_OFFSET))(material, bounds, topology, vertexCount, instanceCount, camera, properties, castShadows, receiveShadows, layer);
		}

		static ::System::Void DrawSkinnedMesh(::UnityEngine::SkinnedMeshRenderer* renderer, ::UnityEngine::Material* material, ::UnityEngine::Camera* camera, ::System::UInt32 renderingLayerMask, ::System::Int32 submeshIndex)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_OFFSET))(renderer, material, camera, renderingLayerMask, submeshIndex);
		}

		static ::System::Void DrawSkinnedMesh_1(::UnityEngine::SkinnedMeshRenderer* renderer, ::Il2CppArray<::UnityEngine::Material*>* materials, ::UnityEngine::Camera* camera, ::System::UInt32 renderingLayerMask)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_1_OFFSET))(renderer, materials, camera, renderingLayerMask);
		}

		static ::System::Void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_OFFSET))(source, dest);
		}

		static ::System::Void Blit_1(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_1_OFFSET))(source, dest, scale, offset);
		}

		static ::System::Void Blit_2(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_2_OFFSET))(source, dest, mat, pass);
		}

		static ::System::Void Blit_3(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_3_OFFSET))(source, dest, mat);
		}

		static ::System::Void DrawMesh_2(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_2_OFFSET))(mesh, matrix, material, layer);
		}

		static ::System::Void DrawMesh_3(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::System::Int32 submeshIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_3_OFFSET))(mesh, matrix, material, layer, camera, submeshIndex);
		}

		static ::System::Void DrawMeshInstanced_4(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_4_OFFSET))(mesh, submeshIndex, material, matrices);
		}

		static ::System::Void DrawMeshInstanced_5(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_5_OFFSET))(mesh, submeshIndex, material, matrices, count, properties);
		}

		static ::System::Void DrawMeshInstanced_6(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_6_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows);
		}

		static ::System::Void DrawMeshInstanced_7(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_7_OFFSET))(mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer);
		}

		static ::System::Void DrawMeshInstanced_8(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_8_OFFSET))(mesh, submeshIndex, material, matrices);
		}

		static ::System::Void DrawMeshInstanced_9(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_9_OFFSET))(mesh, submeshIndex, material, matrices, properties);
		}

		static ::System::Void DrawMeshInstanced_10(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_10_OFFSET))(mesh, submeshIndex, material, matrices, properties, castShadows);
		}

		static ::System::Void DrawMeshInstanced_11(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_11_OFFSET))(mesh, submeshIndex, material, matrices, properties, castShadows, receiveShadows, layer);
		}

		static ::System::Void DrawMeshInstancedIndirect_3(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_3_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs);
		}

		static ::System::Void DrawMeshInstancedIndirect_4(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_4_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties);
		}

		static ::System::Void DrawMeshInstancedIndirect_5(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_5_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows);
		}

		static ::System::Void DrawMeshInstancedIndirect_6(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_6_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_1_OFFSET))(rt);
		}

		static ::System::Void Internal_SetRTSimple_Injected(::UnityEngine::RenderBuffer& color, ::UnityEngine::RenderBuffer& depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer&, ::UnityEngine::RenderBuffer&, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET))(color, depth, mip, face, depthSlice);
		}

		static ::System::Void Internal_DrawMeshNow2_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 subsetIndex, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_INJECTED_OFFSET))(mesh, subsetIndex, matrix);
		}

		static ::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET))(mesh, submeshIndex, matrix, material, layer, renderingLayerMask, camera, properties, castShadows, receiveShadows);
		}

		static ::System::Void Internal_DrawMeshInstanced_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds& bounds, ::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_INJECTED_OFFSET))(mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawMeshInstancedProcedural_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds& bounds, ::System::Int32 count, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_INJECTED_OFFSET))(mesh, submeshIndex, material, bounds, count, properties, castShadows, receiveShadows, layer, camera);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds& bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_INJECTED_OFFSET))(mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect1_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::UnityEngine::Bounds& bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer, ::System::UInt32 renderingLayerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_INJECTED_OFFSET))(mesh, submeshIndex, matrix, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, renderingLayerMask, camera);
		}

		static ::System::Void Internal_DrawProcedural_Injected(::UnityEngine::Material* material, ::UnityEngine::Bounds& bounds, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET))(material, bounds, topology, vertexCount, instanceCount, camera, properties, castShadows, receiveShadows, layer);
		}

		static ::System::Void Blit4_Injected(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2& scale, ::UnityEngine::Vector2& offset)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT4_INJECTED_OFFSET))(source, dest, scale, offset);
		}
	};
}
