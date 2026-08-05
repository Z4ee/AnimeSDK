#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ClearFlag.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::NAPRenderPipeline0 { class BaseCachedConstantBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1CA6F170)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1CA6CEC0)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1CA705A0)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1CA70480)
#define UNITYENGINE_RENDERING_COREUTILS_CREATE2DQUADMESH_OFFSET UNITYSDK_OFFSET(0x1CA713F0)
#define UNITYENGINE_RENDERING_COREUTILS_CREATECLOUDQUADMESH_OFFSET UNITYSDK_OFFSET(0x1CA71790)
#define UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET UNITYSDK_OFFSET(0x1CA71BE0)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEDUMMYMATERIALWRAPPER_OFFSET UNITYSDK_OFFSET(0x1CA70B10)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1CA708F0)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CA706C0)
#define UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CA712E0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_1_OFFSET UNITYSDK_OFFSET(0x1CA6FBA0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_2_OFFSET UNITYSDK_OFFSET(0x1CA6FF60)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_3_OFFSET UNITYSDK_OFFSET(0x1CA701D0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_4_OFFSET UNITYSDK_OFFSET(0x1CA70340)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1CA6FAD0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWQUAD_1_OFFSET UNITYSDK_OFFSET(0x1CA6FDF0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWQUAD_OFFSET UNITYSDK_OFFSET(0x1CA6FD20)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_1_OFFSET UNITYSDK_OFFSET(0x1CA6D040)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET UNITYSDK_OFFSET(0x1CA6CFC0)
#define UNITYENGINE_RENDERING_COREUTILS_GETDYNAMICRESOLUTIONCOMPATIBLERTSIZE_OFFSET UNITYSDK_OFFSET(0x1CA70CC0)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERERMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA71180)
#define UNITYENGINE_RENDERING_COREUTILS_GETSHAREDMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1CA70DB0)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_1_OFFSET UNITYSDK_OFFSET(0x1CA6F030)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_2_OFFSET UNITYSDK_OFFSET(0x1CA6E8C0)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET UNITYSDK_OFFSET(0x1CA6E780)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKALPHATEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA6C100)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCLEARTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA6C560)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA694C0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA6CBC0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET UNITYSDK_OFFSET(0x1CA6C960)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1CA6A380)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA69C20)
#define UNITYENGINE_RENDERING_COREUTILS_GET_SAMPLECMPCOMPATIBLETEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA6B130)
#define UNITYENGINE_RENDERING_COREUTILS_GET_TEXTURECURVEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CA6BB20)
#define UNITYENGINE_RENDERING_COREUTILS_GET_TEXTURECURVEHALF_OFFSET UNITYSDK_OFFSET(0x1CA6B5E0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_WHITECUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA6A9D0)
#define UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET UNITYSDK_OFFSET(0x1CA71360)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1CA70C40)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1CA70BC0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERERSHAREDMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1CA70F20)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_10_OFFSET UNITYSDK_OFFSET(0x1CA5BD10)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_11_OFFSET UNITYSDK_OFFSET(0x1CA6E330)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_12_OFFSET UNITYSDK_OFFSET(0x1CA6E070)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_13_OFFSET UNITYSDK_OFFSET(0x1CA5BBA0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_14_OFFSET UNITYSDK_OFFSET(0x1CA6E4B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_15_OFFSET UNITYSDK_OFFSET(0x1CA6E620)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1CA6D220)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1CA6D480)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1CA6D720)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1CA6D5B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_5_OFFSET UNITYSDK_OFFSET(0x1CA6D860)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_6_OFFSET UNITYSDK_OFFSET(0x1CA6D9C0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_7_OFFSET UNITYSDK_OFFSET(0x1CA6DCC0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_8_OFFSET UNITYSDK_OFFSET(0x1CA5F3C0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_9_OFFSET UNITYSDK_OFFSET(0x1CA5BE90)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1CA6D0A0)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET UNITYSDK_OFFSET(0x1CA6DEF0)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1CA6DFC0)
#define UNITYENGINE_RENDERING_COREUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA71CF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUtils_TypeDefinitionIndex = 18732;

	class CoreUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_isCloudGaming()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7AE0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_upVectorList()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7AE8);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_BlackClearTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7AF0);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_SampleCmpCompatibleTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7AF8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_lookAtList()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B00);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_BlackAlphaTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B08);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_TextureCurveWhite()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B10);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_TextureCurveDefault()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B18);
		}
		static ::UnityEngine::Texture3D** StaticGet_m_BlackVolumeTexture()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B20);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_MagentaCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B28);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_BlackCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B30);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_EmptyUAV()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B38);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_WhiteCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B40);
		}
		static ::UnityEngine::CubemapArray** StaticGet_m_MagentaCubeTextureArray()
		{
			return (::UnityEngine::CubemapArray**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x7B48);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_identityMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x40D0);
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

		static ::UnityEngine::Texture2D* get_SampleCmpCompatibleTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_SAMPLECMPCOMPATIBLETEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_textureCurveHalf()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_TEXTURECURVEHALF_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_textureCurveDefault()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_TEXTURECURVEDEFAULT_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_blackAlphaTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKALPHATEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_blackClearTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCLEARTEXTURE_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* get_emptyUAV()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET))();
		}

		static ::UnityEngine::Texture3D* get_blackVolumeTexture()
		{
			return ((::UnityEngine::Texture3D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET))();
		}

		static ::System::Void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET))(cmd, clearFlag, clearColor);
		}

		static ::System::Int32 FixupDepthSlice(::System::Int32 depthSlice, ::UnityEngine::NAPRenderPipeline0::RTHandle* buffer)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET))(depthSlice, buffer);
		}

		static ::System::Int32 FixupDepthSlice_1(::System::Int32 depthSlice, ::UnityEngine::CubemapFace cubemapFace)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_1_OFFSET))(depthSlice, cubemapFace);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_1_OFFSET))(cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_2_OFFSET))(cmd, colorBuffers, depthBuffer);
		}

		static ::System::Void SetRenderTarget_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_3_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag);
		}

		static ::System::Void SetRenderTarget_4(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_4_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_5(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_5_OFFSET))(cmd, buffer, loadAction, storeAction, clearFlag);
		}

		static ::System::Void SetRenderTarget_6(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_6_OFFSET))(cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_7(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_7_OFFSET))(cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag);
		}

		static ::System::Void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* buffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET))(cmd, buffer, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_8(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* buffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_8_OFFSET))(cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_9(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* buffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_9_OFFSET))(cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_10(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* colorBuffer, ::UnityEngine::NAPRenderPipeline0::RTHandle* depthBuffer, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_10_OFFSET))(cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_11(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* colorBuffer, ::UnityEngine::NAPRenderPipeline0::RTHandle* depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_11_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_12(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* colorBuffer, ::UnityEngine::NAPRenderPipeline0::RTHandle* depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_12_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_13(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::NAPRenderPipeline0::RTHandle* depthBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_13_OFFSET))(cmd, colorBuffers, depthBuffer);
		}

		static ::System::Void SetRenderTarget_14(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::NAPRenderPipeline0::RTHandle* depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_14_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag);
		}

		static ::System::Void SetRenderTarget_15(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, ::UnityEngine::NAPRenderPipeline0::RTHandle* depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_15_OFFSET))(cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
		}

		static ::System::Void SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RTHandle* target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET))(cmd, target);
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

		static ::System::Void DrawQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWQUAD_OFFSET))(cmd, material, shaderPass);
		}

		static ::System::Void DrawQuad_1(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* material, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWQUAD_1_OFFSET))(cmdWrapper, material, shaderPass);
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

		static ::UnityEngine::Material* CreateEngineMaterial_1(::UnityEngine::Shader* shader, ::System::String* name)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_1_OFFSET))(shader, name);
		}

		static ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* CreateDummyMaterialWrapper(::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>* cbs)
		{
			return ((::UnityEngine::NAPRenderPipeline0::MaterialWrapper*(*)(::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEDUMMYMATERIALWRAPPER_OFFSET))(cbs);
		}

		static ::System::Void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 keyword, ::System::Boolean state)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET))(cmd, keyword, state);
		}

		static ::System::Void SetKeyword_1(::UnityEngine::Material* material, ::System::String* keyword, ::System::Boolean state)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_1_OFFSET))(material, keyword, state);
		}

		static ::System::Int32 GetDynamicResolutionCompatibleRTSize(::System::Single inputSize)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETDYNAMICRESOLUTIONCOMPATIBLERTSIZE_OFFSET))(inputSize);
		}

		static ::UnityEngine::Material* GetSharedMaterialWithIndex(::UnityEngine::Renderer* renderer, ::System::UInt32 index)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Renderer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETSHAREDMATERIALWITHINDEX_OFFSET))(renderer, index);
		}

		static ::System::Void SetRendererSharedMaterialWithIndex(::UnityEngine::Renderer* renderer, ::System::UInt32 index, ::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::UInt32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERERSHAREDMATERIALWITHINDEX_OFFSET))(renderer, index, m);
		}

		static ::System::Int32 GetRendererMaterialCount(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERERMATERIALCOUNT_OFFSET))(renderer);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET))(obj);
		}

		static ::System::Void SafeRelease(::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET))(buffer);
		}

		static ::UnityEngine::Mesh* Create2DQuadMesh(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATE2DQUADMESH_OFFSET))(min, max);
		}

		static ::UnityEngine::Mesh* CreateCloudQuadMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATECLOUDQUADMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET))(min, max);
		}
	};
}
