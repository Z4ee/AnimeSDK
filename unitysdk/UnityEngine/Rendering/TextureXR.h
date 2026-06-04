#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class RTHandle; }

#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1B182900)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B182C30)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x1B182F60)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1B181C50)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B181BA0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B181990)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B181A40)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET UNITYSDK_OFFSET(0x1B181AF0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B181CB0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1B181910)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET UNITYSDK_OFFSET(0x1B181880)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET UNITYSDK_OFFSET(0x1B1818E0)
#define UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B181D60)
#define UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET UNITYSDK_OFFSET(0x1B181820)
#define UNITYENGINE_RENDERING_TEXTUREXR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B183180)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureXR_TypeDefinitionIndex = 33780;

	class TextureXR : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet_m_ClearTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD20);
		}
		static ::UnityEngine::Texture** StaticGet_m_BlackUIntTexture2DArray()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD28);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_MagentaTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD30);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackUIntTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD38);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD40);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_BlackTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD48);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_ClearTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD50);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_WhiteTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD58);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_ClearTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD60);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD68);
		}
		static ::UnityEngine::Texture** StaticGet_m_BlackUIntTexture()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD70);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_MagentaTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD78);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_WhiteTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD80);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_MagentaTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD88);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackUIntTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD90);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_MagentaTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4AD98);
		}
		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_ClearTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4ADA0);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_WhiteTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4ADA8);
		}
		static ::System::Int32* StaticGet_m_MaxViews()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0xE030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR__CCTOR_OFFSET))();
		}

		static ::System::Void set_maxViews(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET))(a1);
		}

		static ::System::Int32 get_slices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET))();
		}

		static ::System::Boolean get_useTexArray()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET))();
		}

		static ::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetBlackUIntTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetClearTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetMagentaTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetBlackTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetBlackTextureArray()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetWhiteTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET))();
		}

		static ::System::Void Initialize(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2DArray* CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Texture2DArray*(*)(::UnityEngine::Texture2D*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture* CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture* CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET))(a1, a2);
		}
	};
}
