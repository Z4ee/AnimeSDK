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

#define UNITYENGINE_GRAPHICS_BLIT2_OFFSET UNITYSDK_OFFSET(0x1B2996B0)
#define UNITYENGINE_GRAPHICS_BLIT4_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B299710)
#define UNITYENGINE_GRAPHICS_BLIT4_OFFSET UNITYSDK_OFFSET(0x1B2996C0)
#define UNITYENGINE_GRAPHICS_BLIT_1_OFFSET UNITYSDK_OFFSET(0x1B29B430)
#define UNITYENGINE_GRAPHICS_BLIT_2_OFFSET UNITYSDK_OFFSET(0x1B29B4B0)
#define UNITYENGINE_GRAPHICS_BLIT_3_OFFSET UNITYSDK_OFFSET(0x1B29B500)
#define UNITYENGINE_GRAPHICS_BLIT_OFFSET UNITYSDK_OFFSET(0x1B29B3F0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1B299A00)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1B299A50)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1B299AA0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_FULL_OFFSET UNITYSDK_OFFSET(0x1B299400)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B2999C0)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET UNITYSDK_OFFSET(0x1B299430)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_ALLMIPS_OFFSET UNITYSDK_OFFSET(0x1B299410)
#define UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET UNITYSDK_OFFSET(0x1B299420)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1B29AD70)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x1B29B100)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_3_OFFSET UNITYSDK_OFFSET(0x1B29BDC0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_4_OFFSET UNITYSDK_OFFSET(0x1B29BED0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_5_OFFSET UNITYSDK_OFFSET(0x1B29BFF0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_6_OFFSET UNITYSDK_OFFSET(0x1B29C120)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1B29AA90)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B29A7F0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_10_OFFSET UNITYSDK_OFFSET(0x1B29BCB0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_11_OFFSET UNITYSDK_OFFSET(0x1B29BD30)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_1_OFFSET UNITYSDK_OFFSET(0x1B29A2B0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_2_OFFSET UNITYSDK_OFFSET(0x1B29A370)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_3_OFFSET UNITYSDK_OFFSET(0x1B29A4C0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_4_OFFSET UNITYSDK_OFFSET(0x1B29B8E0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_5_OFFSET UNITYSDK_OFFSET(0x1B29BA70)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_6_OFFSET UNITYSDK_OFFSET(0x1B29BB10)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_7_OFFSET UNITYSDK_OFFSET(0x1B29B9A0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_8_OFFSET UNITYSDK_OFFSET(0x1B29BBC0)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_9_OFFSET UNITYSDK_OFFSET(0x1B29BC30)
#define UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x1B299FC0)
#define UNITYENGINE_GRAPHICS_DRAWMESHNOW_OFFSET UNITYSDK_OFFSET(0x1B299AF0)
#define UNITYENGINE_GRAPHICS_DRAWMESH_1_OFFSET UNITYSDK_OFFSET(0x1B299E60)
#define UNITYENGINE_GRAPHICS_DRAWMESH_2_OFFSET UNITYSDK_OFFSET(0x1B29B560)
#define UNITYENGINE_GRAPHICS_DRAWMESH_3_OFFSET UNITYSDK_OFFSET(0x1B29B710)
#define UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1B299C40)
#define UNITYENGINE_GRAPHICS_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B29B210)
#define UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_1_OFFSET UNITYSDK_OFFSET(0x1B29B3A0)
#define UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x1B29B350)
#define UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1B299720)
#define UNITYENGINE_GRAPHICS_GET_ACTIVETIER_OFFSET UNITYSDK_OFFSET(0x1B299390)
#define UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET UNITYSDK_OFFSET(0x1B2996A0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C340)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_OFFSET UNITYSDK_OFFSET(0x1B2995E0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C330)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1B299590)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C320)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B299540)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_1_OFFSET UNITYSDK_OFFSET(0x1B2994F0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C310)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0x1B2994E0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C2F0)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_OFFSET UNITYSDK_OFFSET(0x1B299440)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C300)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1B299490)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C350)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B299630)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH1_OFFSET UNITYSDK_OFFSET(0x1B299690)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x1B299680)
#define UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B299480)
#define UNITYENGINE_GRAPHICS_INTERNAL_GETMAXDRAWMESHINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1B299380)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETNULLRT_OFFSET UNITYSDK_OFFSET(0x1B2993A0)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29C2E0)
#define UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET UNITYSDK_OFFSET(0x1B2993B0)
#define UNITYENGINE_GRAPHICS_SETGLCLIPCONTROL_OFFSET UNITYSDK_OFFSET(0x1B299740)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_1_OFFSET UNITYSDK_OFFSET(0x1B2997F0)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET UNITYSDK_OFFSET(0x1B299750)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1B29C270)
#define UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B299970)
#define UNITYENGINE_GRAPHICS_SETUSESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1B299730)
#define UNITYENGINE_GRAPHICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B29C2C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Graphics_TypeDefinitionIndex = 4106;

	class Graphics : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_kMaxDrawMeshInstanceCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Graphics_TypeDefinitionIndex)->GetStaticField(0x9F30);
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

		static ::System::Void Internal_SetRTSimple(::UnityEngine::RenderBuffer a1, ::UnityEngine::RenderBuffer a2, ::System::Int32 a3, ::UnityEngine::CubemapFace a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CopyTexture_Full(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_FULL_OFFSET))(a1, a2);
		}

		static ::System::Void CopyTexture_Slice_AllMips(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_ALLMIPS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CopyTexture_Slice(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Texture* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_SLICE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CopyTexture_Region(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::Texture* a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_REGION_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void Internal_DrawMeshNow2(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Internal_DrawTexture(::UnityEngine::Internal_DrawTextureArguments& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Internal_DrawTextureArguments&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWTEXTURE_OFFSET))(a1);
		}

		static ::System::Void Internal_DrawMesh(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::System::UInt32 a6, ::UnityEngine::Camera* a7, ::UnityEngine::MaterialPropertyBlock* a8, ::UnityEngine::Rendering::ShadowCastingMode a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Internal_DrawMeshInstanced(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::System::UInt32 a10, ::UnityEngine::Camera* a11)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void Internal_DrawMeshInstanced_1(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::Il2CppArray<::UnityEngine::Matrix4x4>* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10, ::System::UInt32 a11, ::UnityEngine::Camera* a12)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void Internal_DrawMeshInstancedProcedural(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::UnityEngine::Camera* a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10, ::System::UInt32 a11, ::UnityEngine::Camera* a12)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect1(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Material* a4, ::UnityEngine::Bounds a5, ::UnityEngine::ComputeBuffer* a6, ::System::Int32 a7, ::UnityEngine::MaterialPropertyBlock* a8, ::UnityEngine::Rendering::ShadowCastingMode a9, ::System::Boolean a10, ::System::Int32 a11, ::System::UInt32 a12, ::UnityEngine::Camera* a13)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void Internal_DrawProcedural(::UnityEngine::Material* a1, ::UnityEngine::Bounds a2, ::UnityEngine::MeshTopology a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Camera* a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Internal_DrawSkinnedMesh(::UnityEngine::SkinnedMeshRenderer* a1, ::Il2CppArray<::UnityEngine::Material*>* a2, ::UnityEngine::Camera* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Internal_DrawSkinnedMesh1(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Camera* a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWSKINNEDMESH1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Internal_BlitMaterial5(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_BLITMATERIAL5_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Blit2(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT2_OFFSET))(a1, a2);
		}

		static ::System::Void Blit4(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_EXECUTECOMMANDBUFFER_OFFSET))(a1);
		}

		static ::System::Void SetUsesReversedZBuffer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETUSESREVERSEDZBUFFER_OFFSET))(a1);
		}

		static ::System::Void SetGLClipControl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETGLCLIPCONTROL_OFFSET))(a1);
		}

		static ::System::Void SetRenderTargetImpl(::UnityEngine::RenderBuffer a1, ::UnityEngine::RenderBuffer a2, ::System::Int32 a3, ::UnityEngine::CubemapFace a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetRenderTargetImpl_1(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::UnityEngine::CubemapFace a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGETIMPL_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::UnityEngine::CubemapFace a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CopyTexture(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_OFFSET))(a1, a2);
		}

		static ::System::Void CopyTexture_1(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CopyTexture_2(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Texture* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CopyTexture_3(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::Texture* a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_COPYTEXTURE_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void DrawMeshNow(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHNOW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::UInt32 a5, ::UnityEngine::Camera* a6, ::System::Int32 a7, ::UnityEngine::MaterialPropertyBlock* a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void DrawMesh_1(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::UInt32 a5, ::UnityEngine::Camera* a6, ::System::Int32 a7, ::UnityEngine::MaterialPropertyBlock* a8, ::UnityEngine::Rendering::ShadowCastingMode a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DrawMeshInstanced(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::System::UInt32 a10, ::UnityEngine::Camera* a11)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void DrawMeshInstanced_1(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::UnityEngine::Camera* a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DrawMeshInstanced_2(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a4, ::UnityEngine::MaterialPropertyBlock* a5, ::UnityEngine::Rendering::ShadowCastingMode a6, ::System::Boolean a7, ::System::Int32 a8, ::UnityEngine::Camera* a9)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void DrawMeshInstanced_3(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::System::UInt32 a10, ::UnityEngine::Camera* a11)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void DrawMeshInstancedProcedural(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::UnityEngine::Camera* a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDPROCEDURAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DrawMeshInstancedIndirect(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10, ::System::UInt32 a11, ::UnityEngine::Camera* a12)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void DrawMeshInstancedIndirect_1(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Material* a4, ::UnityEngine::Bounds a5, ::UnityEngine::ComputeBuffer* a6, ::System::Int32 a7, ::UnityEngine::MaterialPropertyBlock* a8, ::UnityEngine::Rendering::ShadowCastingMode a9, ::System::Boolean a10, ::System::Int32 a11, ::System::UInt32 a12, ::UnityEngine::Camera* a13)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void DrawMeshInstancedIndirect_2(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10, ::UnityEngine::Camera* a11)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void DrawProcedural(::UnityEngine::Material* a1, ::UnityEngine::Bounds a2, ::UnityEngine::MeshTopology a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Camera* a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWPROCEDURAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DrawSkinnedMesh(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Camera* a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawSkinnedMesh_1(::UnityEngine::SkinnedMeshRenderer* a1, ::Il2CppArray<::UnityEngine::Material*>* a2, ::UnityEngine::Camera* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::SkinnedMeshRenderer*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWSKINNEDMESH_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Blit(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_OFFSET))(a1, a2);
		}

		static ::System::Void Blit_1(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Blit_2(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Material* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Blit_3(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawMesh_2(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawMesh_3(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::Camera* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESH_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawMeshInstanced_4(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawMeshInstanced_5(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_5_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawMeshInstanced_6(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void DrawMeshInstanced_7(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::Il2CppArray<::UnityEngine::Matrix4x4>* a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void DrawMeshInstanced_8(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_8_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawMeshInstanced_9(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a4, ::UnityEngine::MaterialPropertyBlock* a5)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_9_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawMeshInstanced_10(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a4, ::UnityEngine::MaterialPropertyBlock* a5, ::UnityEngine::Rendering::ShadowCastingMode a6)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_10_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawMeshInstanced_11(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a4, ::UnityEngine::MaterialPropertyBlock* a5, ::UnityEngine::Rendering::ShadowCastingMode a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCED_11_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawMeshInstancedIndirect_3(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawMeshInstancedIndirect_4(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void DrawMeshInstancedIndirect_5(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawMeshInstancedIndirect_6(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_DRAWMESHINSTANCEDINDIRECT_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_SETRENDERTARGET_1_OFFSET))(a1);
		}

		static ::System::Void Internal_SetRTSimple_Injected(::UnityEngine::RenderBuffer& a1, ::UnityEngine::RenderBuffer& a2, ::System::Int32 a3, ::UnityEngine::CubemapFace a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::RenderBuffer&, ::UnityEngine::RenderBuffer&, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_SETRTSIMPLE_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Internal_DrawMeshNow2_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHNOW2_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::System::UInt32 a6, ::UnityEngine::Camera* a7, ::UnityEngine::MaterialPropertyBlock* a8, ::UnityEngine::Rendering::ShadowCastingMode a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESH_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Internal_DrawMeshInstanced_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds& a4, ::Il2CppArray<::UnityEngine::Matrix4x4>* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10, ::System::UInt32 a11, ::UnityEngine::Camera* a12)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCED_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void Internal_DrawMeshInstancedProcedural_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds& a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::UnityEngine::Rendering::ShadowCastingMode a7, ::System::Boolean a8, ::System::Int32 a9, ::UnityEngine::Camera* a10)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDPROCEDURAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::UnityEngine::Bounds& a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10, ::System::UInt32 a11, ::UnityEngine::Camera* a12)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void Internal_DrawMeshInstancedIndirect1_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3, ::UnityEngine::Material* a4, ::UnityEngine::Bounds& a5, ::UnityEngine::ComputeBuffer* a6, ::System::Int32 a7, ::UnityEngine::MaterialPropertyBlock* a8, ::UnityEngine::Rendering::ShadowCastingMode a9, ::System::Boolean a10, ::System::Int32 a11, ::System::UInt32 a12, ::UnityEngine::Camera* a13)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32, ::System::UInt32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWMESHINSTANCEDINDIRECT1_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void Internal_DrawProcedural_Injected(::UnityEngine::Material* a1, ::UnityEngine::Bounds& a2, ::UnityEngine::MeshTopology a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Camera* a6, ::UnityEngine::MaterialPropertyBlock* a7, ::UnityEngine::Rendering::ShadowCastingMode a8, ::System::Boolean a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Bounds&, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Blit4_Injected(::UnityEngine::Texture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector2& a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICS_BLIT4_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
