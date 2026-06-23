#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/FormatUsage.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class UnityException; }

#define UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D6AD9E0)
#define UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D6AD420)
#define UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET UNITYSDK_OFFSET(0x1D6AD410)
#define UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET UNITYSDK_OFFSET(0x1D6AD430)
#define UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0x1D6AD610)
#define UNITYENGINE_TEXTURE_GET_DESIREDTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x1D6AD6A0)
#define UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1D6AD500)
#define UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0x1D6AD5F0)
#define UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1D6AD4A0)
#define UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1D6AD560)
#define UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6AD400)
#define UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x1D6AD6B0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x1D6AD6C0)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6AD670)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET UNITYSDK_OFFSET(0x1D6AD640)
#define UNITYENGINE_TEXTURE_GET_TOTALTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x1D6AD690)
#define UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x1D6AD680)
#define UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1D6AD440)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0x1D6AD590)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0x1D6AD5B0)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0x1D6AD5D0)
#define UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1D6AD570)
#define UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0x1D6AD620)
#define UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1D6AD510)
#define UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0x1D6AD600)
#define UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1D6AD4B0)
#define UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1D6AD630)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREKEEPDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D6AD6D0)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREUSEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1D6AD6E0)
#define UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1D6AD450)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0x1D6AD5A0)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0x1D6AD5C0)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0x1D6AD5E0)
#define UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1D6AD580)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1D6AD890)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0x1D6AD6F0)
#define UNITYENGINE_TEXTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADB50)
#define UNITYENGINE_TEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD3B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture_TypeDefinitionIndex = 5269;

	class Texture : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_GenerateAllMips()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Texture_TypeDefinitionIndex)->GetStaticField(0x1490);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE__CCTOR_OFFSET))();
		}

		::System::Int32 get_mipmapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET))(this);
		}

		::System::Int32 GetDataWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET))(this);
		}

		::System::Int32 GetDataHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Rendering::TextureDimension GetDimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureDimension))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET))(this, value);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET))(this);
		}

		::UnityEngine::TextureWrapMode get_wrapMode()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::TextureWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET))(this, value);
		}

		::UnityEngine::TextureWrapMode get_wrapModeU()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET))(this);
		}

		::System::Void set_wrapModeU(::UnityEngine::TextureWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET))(this, value);
		}

		::UnityEngine::TextureWrapMode get_wrapModeV()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET))(this);
		}

		::System::Void set_wrapModeV(::UnityEngine::TextureWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET))(this, value);
		}

		::UnityEngine::TextureWrapMode get_wrapModeW()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET))(this);
		}

		::System::Void set_wrapModeW(::UnityEngine::TextureWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET))(this, value);
		}

		::UnityEngine::FilterMode get_filterMode()
		{
			return ((::UnityEngine::FilterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET))(this);
		}

		::System::Void set_filterMode(::UnityEngine::FilterMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET))(this, value);
		}

		::System::Int32 get_anisoLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET))(this);
		}

		::System::Void set_anisoLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET))(this, value);
		}

		::System::Void set_mipMapBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_texelSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET))(this);
		}

		::System::UInt32 get_updateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET))(this);
		}

		static ::System::UInt64 get_totalTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TOTALTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_desiredTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_DESIREDTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_nonStreamingTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTUREMEMORY_OFFSET))();
		}

		static ::System::Boolean get_streamingTextureDiscardUnusedMips()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET))();
		}

		static ::System::Void set_streamingTextureKeepDistance(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREKEEPDISTANCE_OFFSET))(value);
		}

		static ::System::Void set_streamingTextureUseVisibility(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREUSEVISIBILITY_OFFSET))(value);
		}

		::System::Boolean ValidateFormat(::UnityEngine::TextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET))(this, format);
		}

		::System::Boolean ValidateFormat_1(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_1_OFFSET))(this, format, usage);
		}

		::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* t)
		{
			return ((::UnityEngine::UnityException*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET))(this, t);
		}

		::System::Void get_texelSize_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET))(this, ret);
		}
	};
}
