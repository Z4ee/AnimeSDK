#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnisotropicFiltering.h"
#include "unitysdk/UnityEngine/ColorSpace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/FormatUsage.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class UnityException; }

#define UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A543C0)
#define UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET UNITYSDK_OFFSET(0x18A53AC0)
#define UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET UNITYSDK_OFFSET(0x18A53AB0)
#define UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET UNITYSDK_OFFSET(0x18A53AD0)
#define UNITYENGINE_TEXTURE_GETNATIVETEXTUREID_OFFSET UNITYSDK_OFFSET(0x18A53D40)
#define UNITYENGINE_TEXTURE_GETNATIVETEXTUREPTR_OFFSET UNITYSDK_OFFSET(0x18A53D30)
#define UNITYENGINE_TEXTURE_GET_ACTIVETEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x18A53D80)
#define UNITYENGINE_TEXTURE_GET_ALLOWTHREADEDTEXTURECREATION_OFFSET UNITYSDK_OFFSET(0x18A53EF0)
#define UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0x18A53CB0)
#define UNITYENGINE_TEXTURE_GET_ANISOTROPICFILTERING_OFFSET UNITYSDK_OFFSET(0x18A53A70)
#define UNITYENGINE_TEXTURE_GET_CURRENTTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x18A53DD0)
#define UNITYENGINE_TEXTURE_GET_DESIREDTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x18A53DB0)
#define UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x18A53BA0)
#define UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0x18A53C90)
#define UNITYENGINE_TEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x18A53AA0)
#define UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x18A53B40)
#define UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x18A53C00)
#define UNITYENGINE_TEXTURE_GET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x18A53A40)
#define UNITYENGINE_TEXTURE_GET_MIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x18A53CD0)
#define UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x18A53A60)
#define UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x18A53E20)
#define UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x18A53DE0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGMIPMAPUPLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x18A53DF0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGRENDERERCOUNT_OFFSET UNITYSDK_OFFSET(0x18A53E00)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18A53EC0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDSIZE_OFFSET UNITYSDK_OFFSET(0x18A53ED0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHERATIO_OFFSET UNITYSDK_OFFSET(0x18A53EE0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x18A53EA0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x18A53E10)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x18A53E80)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREFORCELOADALL_OFFSET UNITYSDK_OFFSET(0x18A53E60)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURELOADINGCOUNT_OFFSET UNITYSDK_OFFSET(0x18A53E40)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREPENDINGLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x18A53E30)
#define UNITYENGINE_TEXTURE_GET_TARGETTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x18A53DC0)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A53D20)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET UNITYSDK_OFFSET(0x18A53CF0)
#define UNITYENGINE_TEXTURE_GET_TOTALTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x18A53DA0)
#define UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x18A53D50)
#define UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x18A53AE0)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0x18A53C30)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0x18A53C50)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0x18A53C70)
#define UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x18A53C10)
#define UNITYENGINE_TEXTURE_INCREMENTUPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x18A53D60)
#define UNITYENGINE_TEXTURE_INTERNAL_GETACTIVETEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x18A53D70)
#define UNITYENGINE_TEXTURE_SETGLOBALANISOTROPICFILTERINGLIMITS_OFFSET UNITYSDK_OFFSET(0x18A53A90)
#define UNITYENGINE_TEXTURE_SETSTREAMINGTEXTUREMATERIALDEBUGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18A53E50)
#define UNITYENGINE_TEXTURE_SET_ALLOWTHREADEDTEXTURECREATION_OFFSET UNITYSDK_OFFSET(0x18A53F00)
#define UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0x18A53CC0)
#define UNITYENGINE_TEXTURE_SET_ANISOTROPICFILTERING_OFFSET UNITYSDK_OFFSET(0x18A53A80)
#define UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x18A53BB0)
#define UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0x18A53CA0)
#define UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x18A53B50)
#define UNITYENGINE_TEXTURE_SET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x18A53A50)
#define UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x18A53CE0)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x18A53EB0)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x18A53E90)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREFORCELOADALL_OFFSET UNITYSDK_OFFSET(0x18A53E70)
#define UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x18A53AF0)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0x18A53C40)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0x18A53C60)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0x18A53C80)
#define UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x18A53C20)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_1_OFFSET UNITYSDK_OFFSET(0x18A54040)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_2_OFFSET UNITYSDK_OFFSET(0x18A54250)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0x18A53F10)
#define UNITYENGINE_TEXTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A54520)
#define UNITYENGINE_TEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A53A30)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture_TypeDefinitionIndex = 4003;

	class Texture : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_GenerateAllMips()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Texture_TypeDefinitionIndex)->GetStaticField(0x5710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_masterTextureLimit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MASTERTEXTURELIMIT_OFFSET))();
		}

		static ::System::Void set_masterTextureLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_MASTERTEXTURELIMIT_OFFSET))(value);
		}

		::System::Int32 get_mipmapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET))(this);
		}

		static ::UnityEngine::AnisotropicFiltering get_anisotropicFiltering()
		{
			return ((::UnityEngine::AnisotropicFiltering(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ANISOTROPICFILTERING_OFFSET))();
		}

		static ::System::Void set_anisotropicFiltering(::UnityEngine::AnisotropicFiltering value)
		{
			return ((::System::Void(*)(::UnityEngine::AnisotropicFiltering))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ANISOTROPICFILTERING_OFFSET))(value);
		}

		static ::System::Void SetGlobalAnisotropicFilteringLimits(::System::Int32 forcedMin, ::System::Int32 globalMax)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SETGLOBALANISOTROPICFILTERINGLIMITS_OFFSET))(forcedMin, globalMax);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_GRAPHICSFORMAT_OFFSET))(this);
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

		::System::Single get_mipMapBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MIPMAPBIAS_OFFSET))(this);
		}

		::System::Void set_mipMapBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_texelSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET))(this);
		}

		::System::IntPtr GetNativeTexturePtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETNATIVETEXTUREPTR_OFFSET))(this);
		}

		::System::Int32 GetNativeTextureID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETNATIVETEXTUREID_OFFSET))(this);
		}

		::System::UInt32 get_updateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET))(this);
		}

		::System::Void IncrementUpdateCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_INCREMENTUPDATECOUNT_OFFSET))(this);
		}

		::System::Int32 Internal_GetActiveTextureColorSpace()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_INTERNAL_GETACTIVETEXTURECOLORSPACE_OFFSET))(this);
		}

		::UnityEngine::ColorSpace get_activeTextureColorSpace()
		{
			return ((::UnityEngine::ColorSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ACTIVETEXTURECOLORSPACE_OFFSET))(this);
		}

		static ::System::UInt64 get_totalTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TOTALTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_desiredTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_DESIREDTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_targetTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TARGETTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_currentTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_CURRENTTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_nonStreamingTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_streamingMipmapUploadCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGMIPMAPUPLOADCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingRendererCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGRENDERERCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTextureCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECOUNT_OFFSET))();
		}

		static ::System::UInt64 get_nonStreamingTextureCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTURECOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTexturePendingLoadCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREPENDINGLOADCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTextureLoadingCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURELOADINGCOUNT_OFFSET))();
		}

		static ::System::Void SetStreamingTextureMaterialDebugProperties()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SETSTREAMINGTEXTUREMATERIALDEBUGPROPERTIES_OFFSET))();
		}

		static ::System::Boolean get_streamingTextureForceLoadAll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREFORCELOADALL_OFFSET))();
		}

		static ::System::Void set_streamingTextureForceLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREFORCELOADALL_OFFSET))(value);
		}

		static ::System::Boolean get_streamingTextureDiscardUnusedMips()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET))();
		}

		static ::System::Void set_streamingTextureDiscardUnusedMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET))(value);
		}

		static ::System::Boolean get_streamingTextureCacheUnusedMips()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET))();
		}

		static ::System::Void set_streamingTextureCacheUnusedMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET))(value);
		}

		static ::System::UInt64 get_streamingTextureCachedCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTextureCachedSize()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDSIZE_OFFSET))();
		}

		static ::System::Single get_streamingTextureCacheRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHERATIO_OFFSET))();
		}

		static ::System::Boolean get_allowThreadedTextureCreation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ALLOWTHREADEDTEXTURECREATION_OFFSET))();
		}

		static ::System::Void set_allowThreadedTextureCreation(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ALLOWTHREADEDTEXTURECREATION_OFFSET))(value);
		}

		::System::Boolean ValidateFormat(::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET))(this, format);
		}

		::System::Boolean ValidateFormat_1(::UnityEngine::TextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_1_OFFSET))(this, format);
		}

		::System::Boolean ValidateFormat_2(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_2_OFFSET))(this, format, usage);
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
