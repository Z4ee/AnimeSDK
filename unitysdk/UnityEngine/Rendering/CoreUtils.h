#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/ClearFlag.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class RTHandle; }

#define UNITYENGINE_RENDERING_COREUTILS_AREANIMATEDMATERIALSENABLED_OFFSET UNITYSDK_OFFSET(0x1A312C40)
#define UNITYENGINE_RENDERING_COREUTILS_AREPOSTPROCESSESENABLED_OFFSET UNITYSDK_OFFSET(0x1A312C30)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1A311510)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1A30ECF0)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1A312290)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1A312200)
#define UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET UNITYSDK_OFFSET(0x1A312490)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1A312330)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A312320)
#define UNITYENGINE_RENDERING_COREUTILS_DEBUGPRINT_OFFSET UNITYSDK_OFFSET(0x1A3138F0)
#define UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A312410)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_1_OFFSET UNITYSDK_OFFSET(0x1A3119F0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_2_OFFSET UNITYSDK_OFFSET(0x1A311BD0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_3_OFFSET UNITYSDK_OFFSET(0x1A311E40)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_4_OFFSET UNITYSDK_OFFSET(0x1A311FE0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1A3118A0)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_1_OFFSET UNITYSDK_OFFSET(0x1A30EDA0)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET UNITYSDK_OFFSET(0x1A30ED60)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_1_OFFSET UNITYSDK_OFFSET(0x1A310B90)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_2_OFFSET UNITYSDK_OFFSET(0x1A310950)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x1A310880)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_1_OFFSET UNITYSDK_OFFSET(0x1A311440)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_2_OFFSET UNITYSDK_OFFSET(0x1A310D30)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET UNITYSDK_OFFSET(0x1A310C60)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A30D080)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A30EAF0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET UNITYSDK_OFFSET(0x1A30E930)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1A30DD60)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A30D6F0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_WHITECUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A30E2C0)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENELIGHTINGDISABLED_OFFSET UNITYSDK_OFFSET(0x1A312C50)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWFOGENABLED_OFFSET UNITYSDK_OFFSET(0x1A312C60)
#define UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET UNITYSDK_OFFSET(0x1A312430)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1A3123D0)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A312390)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_10_OFFSET UNITYSDK_OFFSET(0x1A30FA50)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_11_OFFSET UNITYSDK_OFFSET(0x1A30FC40)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_12_OFFSET UNITYSDK_OFFSET(0x1A2FCED0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_13_OFFSET UNITYSDK_OFFSET(0x1A2F96A0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_14_OFFSET UNITYSDK_OFFSET(0x1A2F95A0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_15_OFFSET UNITYSDK_OFFSET(0x1A3103A0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_16_OFFSET UNITYSDK_OFFSET(0x1A30FFC0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_17_OFFSET UNITYSDK_OFFSET(0x1A2F93F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_18_OFFSET UNITYSDK_OFFSET(0x1A3104B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_19_OFFSET UNITYSDK_OFFSET(0x1A310700)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1A30EEC0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1A30F040)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1A30F340)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1A30F210)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_5_OFFSET UNITYSDK_OFFSET(0x1A30F4E0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_6_OFFSET UNITYSDK_OFFSET(0x1A30F680)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_7_OFFSET UNITYSDK_OFFSET(0x1A30F5A0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_8_OFFSET UNITYSDK_OFFSET(0x1A30F790)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_9_OFFSET UNITYSDK_OFFSET(0x1A30F8F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1A30EDC0)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET UNITYSDK_OFFSET(0x1A30FE30)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1A30FF40)
#define UNITYENGINE_RENDERING_COREUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A313970)
#define UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINGEX_OFFSET UNITYSDK_OFFSET(0x1A312DC0)
#define UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINTSPACE_OFFSET UNITYSDK_OFFSET(0x1A312D60)
#define UNITYENGINE_RENDERING_COREUTILS__HASRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x1A312C70)
#define UNITYENGINE_RENDERING_COREUTILS__HASRELOAD_OFFSET UNITYSDK_OFFSET(0x1A312CF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUtils_TypeDefinitionIndex = 33509;

	class CoreUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Cubemap** StaticGet_m_MagentaCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67350);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_EmptyUAV()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67358);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_BlackCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67360);
		}
		static ::UnityEngine::Texture3D** StaticGet_m_BlackVolumeTexture()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67368);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_lookAtList()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67370);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_upVectorList()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67378);
		}
		static ::UnityEngine::CubemapArray** StaticGet_m_MagentaCubeTextureArray()
		{
			return (::UnityEngine::CubemapArray**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67380);
		}
		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>** StaticGet_m_AssemblyTypes()
		{
			return (::System::Collections::Generic::IEnumerable_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67388);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_WhiteCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x67390);
		}
		// static const ::System::Int32 editMenuPriority1 = 0x140; // 0x0
		// static const ::System::Int32 editMenuPriority2 = 0x14B; // 0x0
		// static const ::System::Int32 editMenuPriority3 = 0x156; // 0x0
		// static const ::System::Int32 editMenuPriority4 = 0x161; // 0x0
		// static const ::System::Int32 assetCreateMenuPriority1 = 0xE6; // 0x0
		// static const ::System::Int32 assetCreateMenuPriority2 = 0xF1; // 0x0
		// static const ::System::Int32 assetCreateMenuPriority3 = 0x12C; // 0x0
		// static const ::System::Int32 gameObjectMenuPriority = 0xA; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Cubemap* get_blackCubeTexture()
		{
			return ((::UnityEngine::Cubemap*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCUBETEXTURE_OFFSET))();
		}

		static ::UnityEngine::Cubemap* get_magentaCubeTexture()
		{
			return ((::UnityEngine::Cubemap*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTURE_OFFSET))();
		}

		static ::UnityEngine::CubemapArray* get_magentaCubeTextureArray()
		{
			return ((::UnityEngine::CubemapArray*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTUREARRAY_OFFSET))();
		}

		static ::UnityEngine::Cubemap* get_whiteCubeTexture()
		{
			return ((::UnityEngine::Cubemap*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_WHITECUBETEXTURE_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* get_emptyUAV()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET))();
		}

		static ::UnityEngine::Texture3D* get_blackVolumeTexture()
		{
			return ((::UnityEngine::Texture3D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET))();
		}

		static ::System::Void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET))(cmd, clearFlag, clearColor);
		}

		static ::System::Int32 FixupDepthSlice(::System::Int32 depthSlice, ::UnityEngine::Rendering::RTHandle* buffer)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET))(depthSlice, buffer);
		}

		static ::System::Int32 FixupDepthSlice_1(::System::Int32 depthSlice, ::UnityEngine::CubemapFace cubemapFace)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_1_OFFSET))(depthSlice, cubemapFace);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_1_OFFSET))(cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_2_OFFSET))(cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_3_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_4(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_4_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_5(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_5_OFFSET))(cmd, colorBuffers, depthBuffer);
		}

		static ::System::Void SetRenderTarget_6(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_6_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag);
		}

		static ::System::Void SetRenderTarget_7(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_7_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_8(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_8_OFFSET))(cmd, buffer, loadAction, storeAction, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_9(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_9_OFFSET))(cmd, buffer, loadAction, storeAction, clearFlag);
		}

		static ::System::Void SetRenderTarget_10(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_10_OFFSET))(cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_11(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_11_OFFSET))(cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag);
		}

		static ::System::Void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET))(cmd, buffer, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_12(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_12_OFFSET))(cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_13(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_13_OFFSET))(cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_14(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_14_OFFSET))(cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_15(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_15_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_16(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_16_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_17(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RTHandle* depthBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_17_OFFSET))(cmd, colorBuffers, depthBuffer);
		}

		static ::System::Void SetRenderTarget_18(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_18_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag);
		}

		static ::System::Void SetRenderTarget_19(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_19_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
		}

		static ::System::Void SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET))(cmd, target);
		}

		static ::System::String* GetRenderTargetAutoName(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format, ::System::String* name, ::System::Boolean mips, ::System::Boolean enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET))(width, height, depth, format, name, mips, enableMSAA, msaaSamples);
		}

		static ::System::String* GetRenderTargetAutoName_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::String* name, ::System::Boolean mips, ::System::Boolean enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_1_OFFSET))(width, height, depth, format, name, mips, enableMSAA, msaaSamples);
		}

		static ::System::String* GetRenderTargetAutoName_2(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::System::String* format, ::System::String* name, ::System::Boolean mips, ::System::Boolean enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_2_OFFSET))(width, height, depth, format, name, mips, enableMSAA, msaaSamples);
		}

		static ::System::String* GetTextureAutoName(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::UnityEngine::Rendering::TextureDimension dim, ::System::String* name, ::System::Boolean mips, ::System::Int32 depth)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::UnityEngine::Rendering::TextureDimension, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET))(width, height, format, dim, name, mips, depth);
		}

		static ::System::String* GetTextureAutoName_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Rendering::TextureDimension dim, ::System::String* name, ::System::Boolean mips, ::System::Int32 depth)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_1_OFFSET))(width, height, format, dim, name, mips, depth);
		}

		static ::System::String* GetTextureAutoName_2(::System::Int32 width, ::System::Int32 height, ::System::String* format, ::UnityEngine::Rendering::TextureDimension dim, ::System::String* name, ::System::Boolean mips, ::System::Int32 depth)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::TextureDimension, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_2_OFFSET))(width, height, format, dim, name, mips, depth);
		}

		static ::System::Void ClearCubemap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Color clearColor, ::System::Boolean clearMips)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET))(cmd, renderTexture, clearColor, clearMips);
		}

		static ::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 shaderPassId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(commandBuffer, material, properties, shaderPassId);
		}

		static ::System::Void DrawFullScreen_1(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 shaderPassId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_1_OFFSET))(commandBuffer, material, colorBuffer, properties, shaderPassId);
		}

		static ::System::Void DrawFullScreen_2(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 shaderPassId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_2_OFFSET))(commandBuffer, material, colorBuffer, depthStencilBuffer, properties, shaderPassId);
		}

		static ::System::Void DrawFullScreen_3(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 shaderPassId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_3_OFFSET))(commandBuffer, material, colorBuffers, depthStencilBuffer, properties, shaderPassId);
		}

		static ::System::Void DrawFullScreen_4(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 shaderPassId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_4_OFFSET))(commandBuffer, material, colorBuffers, properties, shaderPassId);
		}

		static ::UnityEngine::Color ConvertSRGBToActiveColorSpace(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET))(color);
		}

		static ::UnityEngine::Color ConvertLinearToActiveColorSpace(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET))(color);
		}

		static ::UnityEngine::Material* CreateEngineMaterial(::System::String* shaderPath)
		{
			return ((::UnityEngine::Material*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET))(shaderPath);
		}

		static ::UnityEngine::Material* CreateEngineMaterial_1(::UnityEngine::Shader* shader)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_1_OFFSET))(shader);
		}

		static ::System::Void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* keyword, ::System::Boolean state)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET))(cmd, keyword, state);
		}

		static ::System::Void SetKeyword_1(::UnityEngine::Material* material, ::System::String* keyword, ::System::Boolean state)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_1_OFFSET))(material, keyword, state);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET))(obj);
		}

		static ::System::Void SafeRelease(::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET))(buffer);
		}

		static ::UnityEngine::Mesh* CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET))(min, max);
		}

		static ::System::Boolean ArePostProcessesEnabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_AREPOSTPROCESSESENABLED_OFFSET))(camera);
		}

		static ::System::Boolean AreAnimatedMaterialsEnabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_AREANIMATEDMATERIALSENABLED_OFFSET))(camera);
		}

		static ::System::Boolean IsSceneLightingDisabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENELIGHTINGDISABLED_OFFSET))(camera);
		}

		static ::System::Boolean IsSceneViewFogEnabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWFOGENABLED_OFFSET))(camera);
		}

		static ::System::Boolean _HasReloadGroup(::System::Reflection::FieldInfo* info)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__HASRELOADGROUP_OFFSET))(info);
		}

		static ::System::Boolean _HasReload(::System::Reflection::FieldInfo* info)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__HASRELOAD_OFFSET))(info);
		}

		static ::System::Void _DebugPrintSpace(::System::Text::StringBuilder* sb, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINTSPACE_OFFSET))(sb, depth);
		}

		static ::System::Void _DebugPringEx(::System::Object* container, ::Il2CppArray<::System::Reflection::FieldInfo*>* fields, ::System::Text::StringBuilder* sb, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINGEX_OFFSET))(container, fields, sb, depth);
		}

		static ::System::Void DebugPrint(::System::Object* container, ::System::Text::StringBuilder* sb, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DEBUGPRINT_OFFSET))(container, sb, depth);
		}
	};
}
