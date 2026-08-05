#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Array; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1E326420)
#define UNITYENGINE_TEXTURE2D_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1E327750)
#define UNITYENGINE_TEXTURE2D_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1E3277D0)
#define UNITYENGINE_TEXTURE2D_APPLY_OFFSET UNITYSDK_OFFSET(0x1E3276D0)
#define UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E3266B0)
#define UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326690)
#define UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1E326340)
#define UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E326D80)
#define UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET UNITYSDK_OFFSET(0x1E3265B0)
#define UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET UNITYSDK_OFFSET(0x1E327A80)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E326500)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET UNITYSDK_OFFSET(0x1E3264C0)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_1_OFFSET UNITYSDK_OFFSET(0x1E327460)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET UNITYSDK_OFFSET(0x1E3273B0)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E3264B0)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1E326460)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1E326740)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1E326730)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1E326710)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_2_OFFSET UNITYSDK_OFFSET(0x1E327D00)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_3_OFFSET UNITYSDK_OFFSET(0x1E327D60)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0x1E326700)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1E327310)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET UNITYSDK_OFFSET(0x1E327270)
#define UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET UNITYSDK_OFFSET(0x1E3265A0)
#define UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1E3266F0)
#define UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E326590)
#define UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E3262F0)
#define UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326650)
#define UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326660)
#define UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E3262D0)
#define UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E326310)
#define UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET UNITYSDK_OFFSET(0x1E3265C0)
#define UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1E326410)
#define UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E326320)
#define UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x1E326630)
#define UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326680)
#define UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326670)
#define UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326610)
#define UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E326330)
#define UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E326300)
#define UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E3265F0)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E3265E0)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET UNITYSDK_OFFSET(0x1E3265D0)
#define UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x1E3262E0)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1E326350)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E326360)
#define UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET UNITYSDK_OFFSET(0x1E3266A0)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1E326560)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1E326550)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_1_OFFSET UNITYSDK_OFFSET(0x1E3275F0)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1E327510)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_1_OFFSET UNITYSDK_OFFSET(0x1E326760)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_2_OFFSET UNITYSDK_OFFSET(0x1E326780)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET UNITYSDK_OFFSET(0x1E326750)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E326530)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0x1E326520)
#define UNITYENGINE_TEXTURE2D_READPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1E3279E0)
#define UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET UNITYSDK_OFFSET(0x1E327940)
#define UNITYENGINE_TEXTURE2D_RESIZEIMPL_OFFSET UNITYSDK_OFFSET(0x1E326430)
#define UNITYENGINE_TEXTURE2D_RESIZEWITHFORMATIMPL_OFFSET UNITYSDK_OFFSET(0x1E326510)
#define UNITYENGINE_TEXTURE2D_RESIZE_1_OFFSET UNITYSDK_OFFSET(0x1E3278C0)
#define UNITYENGINE_TEXTURE2D_RESIZE_OFFSET UNITYSDK_OFFSET(0x1E327840)
#define UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET UNITYSDK_OFFSET(0x1E3266D0)
#define UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET UNITYSDK_OFFSET(0x1E3266E0)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1E326570)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1E326580)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E326450)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1E326440)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1E327CB0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_2_OFFSET UNITYSDK_OFFSET(0x1E327CC0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_3_OFFSET UNITYSDK_OFFSET(0x1E327CD0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1E327CA0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0x1E326540)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1E327040)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_2_OFFSET UNITYSDK_OFFSET(0x1E3270F0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_3_OFFSET UNITYSDK_OFFSET(0x1E3271C0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1E326F90)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1E326EF0)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x1E326E50)
#define UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x1E326640)
#define UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326620)
#define UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1E326600)
#define UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E3266C0)
#define UNITYENGINE_TEXTURE2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E326910)
#define UNITYENGINE_TEXTURE2D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E3269C0)
#define UNITYENGINE_TEXTURE2D__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E326A60)
#define UNITYENGINE_TEXTURE2D__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E326A90)
#define UNITYENGINE_TEXTURE2D__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1E326C40)
#define UNITYENGINE_TEXTURE2D__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1E326C70)
#define UNITYENGINE_TEXTURE2D__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1E326CB0)
#define UNITYENGINE_TEXTURE2D__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1E326CF0)
#define UNITYENGINE_TEXTURE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3267A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2D_TypeDefinitionIndex = 5270;

	class Texture2D : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::Int32 mipCount, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_OFFSET))(this, width, height, format, flags, mipCount, nativeTex);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_1_OFFSET))(this, width, height, format, flags);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_2_OFFSET))(this, width, height, format, flags);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_3_OFFSET))(this, width, height, format, mipCount, flags);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::Boolean linear, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_4_OFFSET))(this, width, height, textureFormat, mipCount, linear, nativeTex);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_5_OFFSET))(this, width, height, textureFormat, mipCount, linear);
		}

		::System::Void _ctor_6(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_6_OFFSET))(this, width, height, textureFormat, mipChain, linear);
		}

		::System::Void _ctor_7(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_7_OFFSET))(this, width, height, textureFormat, mipChain);
		}

		::System::Void _ctor_8(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_8_OFFSET))(this, width, height);
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET))(this);
		}

		static ::UnityEngine::Texture2D* get_whiteTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_blackTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_redTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_grayTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_linearGrayTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_normalTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET))();
		}

		::System::Void Compress(::System::Boolean highQuality)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET))(this, highQuality);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2D* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET))(mono, w, h, mipCount, format, flags, nativeTex);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture2D* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET))(mono, w, h, mipCount, format, flags, nativeTex);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void ApplyImpl(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Boolean ResizeImpl(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZEIMPL_OFFSET))(this, width, height);
		}

		::System::Void SetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET))(this, image, x, y, color);
		}

		::UnityEngine::Color GetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET))(this, image, x, y);
		}

		::UnityEngine::Color GetPixelBilinearImpl(::System::Int32 image, ::System::Single u, ::System::Single v)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET))(this, image, u, v);
		}

		::System::Boolean ResizeWithFormatImpl(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::System::Boolean hasMipMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZEWITHFORMATIMPL_OFFSET))(this, width, height, format, hasMipMap);
		}

		::System::Void ReadPixelsImpl(::UnityEngine::Rect source, ::System::Int32 destX, ::System::Int32 destY, ::System::Boolean recalculateMipMaps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET))(this, source, destX, destY, recalculateMipMaps);
		}

		::System::Void SetPixelsImpl(::System::Int32 x, ::System::Int32 y, ::System::Int32 w, ::System::Int32 h, ::Il2CppArray<::UnityEngine::Color>* pixel, ::System::Int32 miplevel, ::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET))(this, x, y, w, h, pixel, miplevel, frame);
		}

		::System::Boolean LoadRawTextureDataImpl(::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET))(this, data, size);
		}

		::System::Boolean LoadRawTextureDataImplArray(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET))(this, data);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* data, ::System::Int32 mipLevel, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET))(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Boolean SetPixelDataImpl(::System::IntPtr data, ::System::Int32 mipLevel, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET))(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::IntPtr GetWritableImageData(::System::Int32 frame)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET))(this, frame);
		}

		::System::Int64 GetRawImageDataSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET))(this);
		}

		static ::System::Void GenerateAtlasImpl(::Il2CppArray<::UnityEngine::Vector2>* sizes, ::System::Int32 padding, ::System::Int32 atlasSize, ::Il2CppArray<::UnityEngine::Rect>* rect)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET))(sizes, padding, atlasSize, rect);
		}

		::System::Boolean get_isPreProcessed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET))(this);
		}

		::System::Boolean get_streamingMipmaps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET))(this);
		}

		::System::Int32 get_streamingMipmapsPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_requestedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_requestedMipmapLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET))(this, value);
		}

		::System::Int32 get_minimumMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_minimumMipmapLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_loadAllMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET))(this);
		}

		::System::Void set_loadAllMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET))(this, value);
		}

		::System::Int32 get_calculatedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_desiredMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadingMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void ClearRequestedMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Boolean IsRequestedMipmapLevelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET))(this);
		}

		::System::Void ClearMinimumMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void UpdateExternalTexture(::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET))(this, nativeTex);
		}

		::System::Void SetAllPixels32(::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetBlockOfPixels32(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::Il2CppArray<::System::Byte>* GetRawTextureData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(this, x, y, blockWidth, blockHeight, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_1_OFFSET))(this, x, y, blockWidth, blockHeight);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32(::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET))(this, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32_1()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_1_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures(::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::System::Int32 padding, ::System::Int32 maximumAtlasSize, ::System::Boolean makeNoLongerReadable)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET))(this, textures, padding, maximumAtlasSize, makeNoLongerReadable);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures_1(::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::System::Int32 padding, ::System::Int32 maximumAtlasSize)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_1_OFFSET))(this, textures, padding, maximumAtlasSize);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures_2(::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::System::Int32 padding)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_2_OFFSET))(this, textures, padding);
		}

		static ::UnityEngine::Texture2D* CreateExternalTexture(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::System::Boolean mipChain, ::System::Boolean linear, ::System::IntPtr nativeTex)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET))(width, height, format, mipChain, linear, nativeTex);
		}

		::System::Void SetPixel(::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET))(this, x, y, color);
		}

		::System::Void SetPixel_1(::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_1_OFFSET))(this, x, y, color, mipLevel);
		}

		::System::Void SetPixels(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::System::Void SetPixels_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_1_OFFSET))(this, x, y, blockWidth, blockHeight, colors);
		}

		::System::Void SetPixels_2(::Il2CppArray<::UnityEngine::Color>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_2_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels_3(::Il2CppArray<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_3_OFFSET))(this, colors);
		}

		::UnityEngine::Color GetPixel(::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET))(this, x, y);
		}

		::UnityEngine::Color GetPixel_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 mipLevel)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_1_OFFSET))(this, x, y, mipLevel);
		}

		::UnityEngine::Color GetPixelBilinear(::System::Single u, ::System::Single v)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET))(this, u, v);
		}

		::UnityEngine::Color GetPixelBilinear_1(::System::Single u, ::System::Single v, ::System::Int32 mipLevel)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_1_OFFSET))(this, u, v, mipLevel);
		}

		::System::Void LoadRawTextureData(::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET))(this, data, size);
		}

		::System::Void LoadRawTextureData_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_1_OFFSET))(this, data);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1(::System::Boolean updateMipmaps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_1_OFFSET))(this, updateMipmaps);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_2_OFFSET))(this);
		}

		::System::Boolean Resize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_OFFSET))(this, width, height);
		}

		::System::Boolean Resize_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::System::Boolean hasMipMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_1_OFFSET))(this, width, height, format, hasMipMap);
		}

		::System::Void ReadPixels(::UnityEngine::Rect source, ::System::Int32 destX, ::System::Int32 destY, ::System::Boolean recalculateMipMaps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET))(this, source, destX, destY, recalculateMipMaps);
		}

		::System::Void ReadPixels_1(::UnityEngine::Rect source, ::System::Int32 destX, ::System::Int32 destY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_1_OFFSET))(this, source, destX, destY);
		}

		static ::System::Boolean GenerateAtlas(::Il2CppArray<::UnityEngine::Vector2>* sizes, ::System::Int32 padding, ::System::Int32 atlasSize, ::System::Collections::Generic::List_1<::UnityEngine::Rect>* results)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET))(sizes, padding, atlasSize, results);
		}

		::System::Void SetPixels32(::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels32_1(::Il2CppArray<::UnityEngine::Color32>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_1_OFFSET))(this, colors);
		}

		::System::Void SetPixels32_2(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_2_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::System::Void SetPixels32_3(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color32>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_3_OFFSET))(this, x, y, blockWidth, blockHeight, colors);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_2(::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_2_OFFSET))(this, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_3()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_3_OFFSET))(this);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, color);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, ret);
		}

		::System::Void GetPixelBilinearImpl_Injected(::System::Int32 image, ::System::Single u, ::System::Single v, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET))(this, image, u, v, ret);
		}

		::System::Void ReadPixelsImpl_Injected(::UnityEngine::Rect& source, ::System::Int32 destX, ::System::Int32 destY, ::System::Boolean recalculateMipMaps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET))(this, source, destX, destY, recalculateMipMaps);
		}
	};
}
