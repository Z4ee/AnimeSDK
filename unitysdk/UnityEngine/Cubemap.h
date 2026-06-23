#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class Array; }

#define UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1CF2F760)
#define UNITYENGINE_CUBEMAP_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1CF300F0)
#define UNITYENGINE_CUBEMAP_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1CF30170)
#define UNITYENGINE_CUBEMAP_APPLY_OFFSET UNITYSDK_OFFSET(0x1CF30070)
#define UNITYENGINE_CUBEMAP_CLEARREQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CF2F920)
#define UNITYENGINE_CUBEMAP_CREATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CF2FE80)
#define UNITYENGINE_CUBEMAP_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF2F800)
#define UNITYENGINE_CUBEMAP_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1CF2F7B0)
#define UNITYENGINE_CUBEMAP_GETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1CF2F840)
#define UNITYENGINE_CUBEMAP_GETPIXELS_OFFSET UNITYSDK_OFFSET(0x1CF2F830)
#define UNITYENGINE_CUBEMAP_GETPIXEL_OFFSET UNITYSDK_OFFSET(0x1CF2FFD0)
#define UNITYENGINE_CUBEMAP_GET_DESIREDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CF2F8F0)
#define UNITYENGINE_CUBEMAP_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1CF2F6A0)
#define UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1CF2F780)
#define UNITYENGINE_CUBEMAP_GET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x1CF2F8D0)
#define UNITYENGINE_CUBEMAP_GET_LOADEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CF2F910)
#define UNITYENGINE_CUBEMAP_GET_LOADINGMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CF2F900)
#define UNITYENGINE_CUBEMAP_GET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CF2F8B0)
#define UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPSPRIORITY_OFFSET UNITYSDK_OFFSET(0x1CF2F8A0)
#define UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPS_OFFSET UNITYSDK_OFFSET(0x1CF2F890)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1CF2F6B0)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1CF2F6C0)
#define UNITYENGINE_CUBEMAP_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET UNITYSDK_OFFSET(0x1CF2F930)
#define UNITYENGINE_CUBEMAP_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1CF2F860)
#define UNITYENGINE_CUBEMAP_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1CF2F870)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF2F7A0)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1CF2F790)
#define UNITYENGINE_CUBEMAP_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1CF2F880)
#define UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1CF2F850)
#define UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x1CF2FF30)
#define UNITYENGINE_CUBEMAP_SET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x1CF2F8E0)
#define UNITYENGINE_CUBEMAP_SET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CF2F8C0)
#define UNITYENGINE_CUBEMAP_SMOOTHEDGES_1_OFFSET UNITYSDK_OFFSET(0x1CF2F820)
#define UNITYENGINE_CUBEMAP_SMOOTHEDGES_OFFSET UNITYSDK_OFFSET(0x1CF2F810)
#define UNITYENGINE_CUBEMAP_UPDATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CF2F770)
#define UNITYENGINE_CUBEMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF2F970)
#define UNITYENGINE_CUBEMAP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CF2FB00)
#define UNITYENGINE_CUBEMAP__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CF2FCB0)
#define UNITYENGINE_CUBEMAP__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CF2FB20)
#define UNITYENGINE_CUBEMAP__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1CF2FE10)
#define UNITYENGINE_CUBEMAP__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1CF2FE40)
#define UNITYENGINE_CUBEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2F940)

namespace UnityEngine
{
	inline static constexpr unsigned int Cubemap_TypeDefinitionIndex = 5271;

	class Cubemap : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_OFFSET))(this, width, format, flags);
		}

		::System::Void _ctor_1(::System::Int32 width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_1_OFFSET))(this, width, format, flags);
		}

		::System::Void _ctor_2(::System::Int32 width, ::UnityEngine::TextureFormat format, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_2_OFFSET))(this, width, format, mipCount);
		}

		::System::Void _ctor_3(::System::Int32 width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_3_OFFSET))(this, width, format, flags, mipCount);
		}

		::System::Void _ctor_4(::System::Int32 width, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_4_OFFSET))(this, width, textureFormat, mipCount, nativeTex);
		}

		::System::Void _ctor_5(::System::Int32 width, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_5_OFFSET))(this, width, textureFormat, mipChain, nativeTex);
		}

		::System::Void _ctor_6(::System::Int32 width, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_6_OFFSET))(this, width, textureFormat, mipChain);
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_FORMAT_OFFSET))(this);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Cubemap* mono, ::System::Int32 ext, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex)
		{
			return ((::System::Boolean(*)(::UnityEngine::Cubemap*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET))(mono, ext, mipCount, format, flags, nativeTex);
		}

		static ::System::Void Internal_Create(::UnityEngine::Cubemap* mono, ::System::Int32 ext, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::UnityEngine::Cubemap*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET))(mono, ext, mipCount, format, flags, nativeTex);
		}

		::System::Void ApplyImpl(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void UpdateExternalTexture(::System::IntPtr nativeTexture)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_UPDATEEXTERNALTEXTURE_OFFSET))(this, nativeTexture);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void SetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET))(this, image, x, y, color);
		}

		::UnityEngine::Color GetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELIMPL_OFFSET))(this, image, x, y);
		}

		::System::Void SmoothEdges(::System::Int32 smoothRegionWidthInPixels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SMOOTHEDGES_OFFSET))(this, smoothRegionWidthInPixels);
		}

		::System::Void SmoothEdges_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SMOOTHEDGES_1_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels(::UnityEngine::CubemapFace face, ::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELS_OFFSET))(this, face, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_1(::UnityEngine::CubemapFace face)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELS_1_OFFSET))(this, face);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET))(this, colors, face, miplevel);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* data, ::System::Int32 mipLevel, ::System::Int32 face, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELDATAIMPLARRAY_OFFSET))(this, data, mipLevel, face, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Boolean SetPixelDataImpl(::System::IntPtr data, ::System::Int32 mipLevel, ::System::Int32 face, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELDATAIMPL_OFFSET))(this, data, mipLevel, face, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_1_OFFSET))(this, colors, face);
		}

		::System::Boolean get_streamingMipmaps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPS_OFFSET))(this);
		}

		::System::Int32 get_streamingMipmapsPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPSPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_requestedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_REQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_requestedMipmapLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SET_REQUESTEDMIPMAPLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_loadAllMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_LOADALLMIPS_OFFSET))(this);
		}

		::System::Void set_loadAllMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SET_LOADALLMIPS_OFFSET))(this, value);
		}

		::System::Int32 get_desiredMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_DESIREDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadingMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_LOADINGMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_LOADEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void ClearRequestedMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_CLEARREQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Boolean IsRequestedMipmapLevelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET))(this);
		}

		static ::UnityEngine::Cubemap* CreateExternalTexture(::System::Int32 width, ::UnityEngine::TextureFormat format, ::System::Boolean mipmap, ::System::IntPtr nativeTex)
		{
			return ((::UnityEngine::Cubemap*(*)(::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_CREATEEXTERNALTEXTURE_OFFSET))(width, format, mipmap, nativeTex);
		}

		::System::Void SetPixel(::UnityEngine::CubemapFace face, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET))(this, face, x, y, color);
		}

		::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXEL_OFFSET))(this, face, x, y);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1(::System::Boolean updateMipmaps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_1_OFFSET))(this, updateMipmaps);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_2_OFFSET))(this);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, color);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, ret);
		}
	};
}
