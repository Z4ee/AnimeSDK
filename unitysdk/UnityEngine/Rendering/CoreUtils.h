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

#define UNITYENGINE_RENDERING_COREUTILS_AREANIMATEDMATERIALSENABLED_OFFSET UNITYSDK_OFFSET(0x1B0E3B20)
#define UNITYENGINE_RENDERING_COREUTILS_AREPOSTPROCESSESENABLED_OFFSET UNITYSDK_OFFSET(0x1B0E3B10)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1B0E2670)
#define UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B0DFE20)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1B0E33F0)
#define UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1B0E3360)
#define UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET UNITYSDK_OFFSET(0x1B0E3610)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1B0E3490)
#define UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B0E3480)
#define UNITYENGINE_RENDERING_COREUTILS_DEBUGPRINT_OFFSET UNITYSDK_OFFSET(0x1B0E4ED0)
#define UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B0E3570)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_1_OFFSET UNITYSDK_OFFSET(0x1B0E2B60)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_2_OFFSET UNITYSDK_OFFSET(0x1B0E2D40)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_3_OFFSET UNITYSDK_OFFSET(0x1B0E2FB0)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_4_OFFSET UNITYSDK_OFFSET(0x1B0E3150)
#define UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1B0E2A10)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_1_OFFSET UNITYSDK_OFFSET(0x1B0DFED0)
#define UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET UNITYSDK_OFFSET(0x1B0DFE90)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_1_OFFSET UNITYSDK_OFFSET(0x1B0E1D00)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_2_OFFSET UNITYSDK_OFFSET(0x1B0E1A60)
#define UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x1B0E1970)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_1_OFFSET UNITYSDK_OFFSET(0x1B0E2580)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_2_OFFSET UNITYSDK_OFFSET(0x1B0E1EE0)
#define UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET UNITYSDK_OFFSET(0x1B0E1DF0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKCUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B0DE1C0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_BLACKVOLUMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B0DFC20)
#define UNITYENGINE_RENDERING_COREUTILS_GET_EMPTYUAV_OFFSET UNITYSDK_OFFSET(0x1B0DFA60)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1B0DEEA0)
#define UNITYENGINE_RENDERING_COREUTILS_GET_MAGENTACUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B0DE830)
#define UNITYENGINE_RENDERING_COREUTILS_GET_WHITECUBETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B0DF3F0)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENELIGHTINGDISABLED_OFFSET UNITYSDK_OFFSET(0x1B0E3B30)
#define UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWFOGENABLED_OFFSET UNITYSDK_OFFSET(0x1B0E3B40)
#define UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET UNITYSDK_OFFSET(0x1B0E3590)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1B0E3530)
#define UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B0E34F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_10_OFFSET UNITYSDK_OFFSET(0x1B0E0B80)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_11_OFFSET UNITYSDK_OFFSET(0x1B0E0D70)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_12_OFFSET UNITYSDK_OFFSET(0x1B0D2290)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_13_OFFSET UNITYSDK_OFFSET(0x1B0CE590)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_14_OFFSET UNITYSDK_OFFSET(0x1B0CE490)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_15_OFFSET UNITYSDK_OFFSET(0x1B0E14A0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_16_OFFSET UNITYSDK_OFFSET(0x1B0E10F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_17_OFFSET UNITYSDK_OFFSET(0x1B0CE300)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_18_OFFSET UNITYSDK_OFFSET(0x1B0E15B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_19_OFFSET UNITYSDK_OFFSET(0x1B0E17F0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1B0DFFF0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1B0E0170)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1B0E0470)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1B0E0340)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_5_OFFSET UNITYSDK_OFFSET(0x1B0E0610)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_6_OFFSET UNITYSDK_OFFSET(0x1B0E07B0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_7_OFFSET UNITYSDK_OFFSET(0x1B0E06D0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_8_OFFSET UNITYSDK_OFFSET(0x1B0E08C0)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_9_OFFSET UNITYSDK_OFFSET(0x1B0E0A20)
#define UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B0DFEF0)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET UNITYSDK_OFFSET(0x1B0E0F60)
#define UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1B0E1070)
#define UNITYENGINE_RENDERING_COREUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0E4FB0)
#define UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINGEX_OFFSET UNITYSDK_OFFSET(0x1B0E3DB0)
#define UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINTSPACE_OFFSET UNITYSDK_OFFSET(0x1B0E3D50)
#define UNITYENGINE_RENDERING_COREUTILS__HASRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x1B0E3B50)
#define UNITYENGINE_RENDERING_COREUTILS__HASRELOAD_OFFSET UNITYSDK_OFFSET(0x1B0E3C90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUtils_TypeDefinitionIndex = 34162;

	class CoreUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Cubemap** StaticGet_m_WhiteCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BA0);
		}
		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>** StaticGet_m_AssemblyTypes()
		{
			return (::System::Collections::Generic::IEnumerable_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BA8);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_MagentaCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BB0);
		}
		static ::UnityEngine::Cubemap** StaticGet_m_BlackCubeTexture()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BB8);
		}
		static ::UnityEngine::Texture3D** StaticGet_m_BlackVolumeTexture()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BC0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_EmptyUAV()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BC8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_lookAtList()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BD0);
		}
		static ::UnityEngine::CubemapArray** StaticGet_m_MagentaCubeTextureArray()
		{
			return (::UnityEngine::CubemapArray**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BD8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_upVectorList()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtils_TypeDefinitionIndex)->GetStaticField(0x45BE0);
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

		static ::System::Void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::ClearFlag a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARRENDERTARGET_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FixupDepthSlice(::System::Int32 a1, ::UnityEngine::Rendering::RTHandle* a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_OFFSET))(a1, a2);
		}

		static ::System::Int32 FixupDepthSlice_1(::System::Int32 a1, ::UnityEngine::CubemapFace a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_FIXUPDEPTHSLICE_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::ClearFlag a3, ::UnityEngine::Color a4, ::System::Int32 a5, ::UnityEngine::CubemapFace a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::ClearFlag a3, ::System::Int32 a4, ::UnityEngine::CubemapFace a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetRenderTarget_2(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::System::Int32 a4, ::UnityEngine::CubemapFace a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetRenderTarget_3(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::UnityEngine::Rendering::ClearFlag a4, ::System::Int32 a5, ::UnityEngine::CubemapFace a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetRenderTarget_4(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::UnityEngine::Rendering::ClearFlag a4, ::UnityEngine::Color a5, ::System::Int32 a6, ::UnityEngine::CubemapFace a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SetRenderTarget_5(::UnityEngine::Rendering::CommandBuffer* a1, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetRenderTarget_6(::UnityEngine::Rendering::CommandBuffer* a1, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::UnityEngine::Rendering::ClearFlag a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetRenderTarget_7(::UnityEngine::Rendering::CommandBuffer* a1, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::UnityEngine::Rendering::ClearFlag a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetRenderTarget_8(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::ClearFlag a5, ::UnityEngine::Color a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_8_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetRenderTarget_9(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::ClearFlag a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_9_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetRenderTarget_10(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderTargetIdentifier a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7, ::UnityEngine::Rendering::ClearFlag a8, ::UnityEngine::Color a9)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_10_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void SetRenderTarget_11(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderTargetIdentifier a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7, ::UnityEngine::Rendering::ClearFlag a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_11_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2, ::UnityEngine::Rendering::ClearFlag a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORTANDCLEAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetRenderTarget_12(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2, ::UnityEngine::Rendering::ClearFlag a3, ::UnityEngine::Color a4, ::System::Int32 a5, ::UnityEngine::CubemapFace a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_12_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetRenderTarget_13(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2, ::UnityEngine::Rendering::ClearFlag a3, ::System::Int32 a4, ::UnityEngine::CubemapFace a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_13_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetRenderTarget_14(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2, ::UnityEngine::Rendering::RTHandle* a3, ::System::Int32 a4, ::UnityEngine::CubemapFace a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_14_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetRenderTarget_15(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2, ::UnityEngine::Rendering::RTHandle* a3, ::UnityEngine::Rendering::ClearFlag a4, ::System::Int32 a5, ::UnityEngine::CubemapFace a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_15_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetRenderTarget_16(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2, ::UnityEngine::Rendering::RTHandle* a3, ::UnityEngine::Rendering::ClearFlag a4, ::UnityEngine::Color a5, ::System::Int32 a6, ::UnityEngine::CubemapFace a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_16_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SetRenderTarget_17(::UnityEngine::Rendering::CommandBuffer* a1, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a2, ::UnityEngine::Rendering::RTHandle* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_17_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetRenderTarget_18(::UnityEngine::Rendering::CommandBuffer* a1, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a2, ::UnityEngine::Rendering::RTHandle* a3, ::UnityEngine::Rendering::ClearFlag a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_18_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetRenderTarget_19(::UnityEngine::Rendering::CommandBuffer* a1, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a2, ::UnityEngine::Rendering::RTHandle* a3, ::UnityEngine::Rendering::ClearFlag a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETRENDERTARGET_19_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetViewport(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::RTHandle* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETVIEWPORT_OFFSET))(a1, a2);
		}

		static ::System::String* GetRenderTargetAutoName(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7, ::UnityEngine::Rendering::MSAASamples a8)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* GetRenderTargetAutoName_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7, ::UnityEngine::Rendering::MSAASamples a8)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* GetRenderTargetAutoName_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7, ::UnityEngine::Rendering::MSAASamples a8)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETRENDERTARGETAUTONAME_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* GetTextureAutoName(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::UnityEngine::Rendering::TextureDimension a4, ::System::String* a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::UnityEngine::Rendering::TextureDimension, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* GetTextureAutoName_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::UnityEngine::Rendering::TextureDimension a4, ::System::String* a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* GetTextureAutoName_2(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::UnityEngine::Rendering::TextureDimension a4, ::System::String* a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::TextureDimension, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_GETTEXTUREAUTONAME_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ClearCubemap(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Color a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CLEARCUBEMAP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawFullScreen_1(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::UnityEngine::MaterialPropertyBlock* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawFullScreen_2(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Rendering::RenderTargetIdentifier a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4, ::UnityEngine::MaterialPropertyBlock* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawFullScreen_3(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Material* a2, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4, ::UnityEngine::MaterialPropertyBlock* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawFullScreen_4(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Material* a2, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a3, ::UnityEngine::MaterialPropertyBlock* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DRAWFULLSCREEN_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Color ConvertSRGBToActiveColorSpace(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CONVERTSRGBTOACTIVECOLORSPACE_OFFSET))(a1);
		}

		static ::UnityEngine::Color ConvertLinearToActiveColorSpace(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CONVERTLINEARTOACTIVECOLORSPACE_OFFSET))(a1);
		}

		static ::UnityEngine::Material* CreateEngineMaterial(::System::String* a1)
		{
			return ((::UnityEngine::Material*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Material* CreateEngineMaterial_1(::UnityEngine::Shader* a1)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATEENGINEMATERIAL_1_OFFSET))(a1);
		}

		static ::System::Void SetKeyword(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetKeyword_1(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SETKEYWORD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Destroy(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DESTROY_OFFSET))(a1);
		}

		static ::System::Void SafeRelease(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_SAFERELEASE_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* CreateCubeMesh(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_CREATECUBEMESH_OFFSET))(a1, a2);
		}

		static ::System::Boolean ArePostProcessesEnabled(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_AREPOSTPROCESSESENABLED_OFFSET))(a1);
		}

		static ::System::Boolean AreAnimatedMaterialsEnabled(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_AREANIMATEDMATERIALSENABLED_OFFSET))(a1);
		}

		static ::System::Boolean IsSceneLightingDisabled(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENELIGHTINGDISABLED_OFFSET))(a1);
		}

		static ::System::Boolean IsSceneViewFogEnabled(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_ISSCENEVIEWFOGENABLED_OFFSET))(a1);
		}

		static ::System::Boolean _HasReloadGroup(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__HASRELOADGROUP_OFFSET))(a1);
		}

		static ::System::Boolean _HasReload(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__HASRELOAD_OFFSET))(a1);
		}

		static ::System::Void _DebugPrintSpace(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINTSPACE_OFFSET))(a1, a2);
		}

		static ::System::Void _DebugPringEx(::System::Object* a1, ::Il2CppArray<::System::Reflection::FieldInfo*>* a2, ::System::Text::StringBuilder* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS__DEBUGPRINGEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DebugPrint(::System::Object* a1, ::System::Text::StringBuilder* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUTILS_DEBUGPRINT_OFFSET))(a1, a2, a3);
		}
	};
}
