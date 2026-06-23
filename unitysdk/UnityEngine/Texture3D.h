#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class Array; }

#define UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1CF43170)
#define UNITYENGINE_TEXTURE3D_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1CF43750)
#define UNITYENGINE_TEXTURE3D_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1CF437D0)
#define UNITYENGINE_TEXTURE3D_APPLY_OFFSET UNITYSDK_OFFSET(0x1CF436D0)
#define UNITYENGINE_TEXTURE3D_GETPIXELBILINEARIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF430A0)
#define UNITYENGINE_TEXTURE3D_GETPIXELBILINEARIMPL_OFFSET UNITYSDK_OFFSET(0x1CF43050)
#define UNITYENGINE_TEXTURE3D_GETPIXELBILINEAR_1_OFFSET UNITYSDK_OFFSET(0x1CF43BA0)
#define UNITYENGINE_TEXTURE3D_GETPIXELBILINEAR_OFFSET UNITYSDK_OFFSET(0x1CF43AE0)
#define UNITYENGINE_TEXTURE3D_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF43040)
#define UNITYENGINE_TEXTURE3D_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1CF42FF0)
#define UNITYENGINE_TEXTURE3D_GETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1CF431B0)
#define UNITYENGINE_TEXTURE3D_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1CF431A0)
#define UNITYENGINE_TEXTURE3D_GETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1CF43190)
#define UNITYENGINE_TEXTURE3D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0x1CF43180)
#define UNITYENGINE_TEXTURE3D_GETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1CF43A30)
#define UNITYENGINE_TEXTURE3D_GETPIXEL_OFFSET UNITYSDK_OFFSET(0x1CF43980)
#define UNITYENGINE_TEXTURE3D_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1CF42FA0)
#define UNITYENGINE_TEXTURE3D_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1CF42FB0)
#define UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1CF42FC0)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1CF430B0)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1CF430C0)
#define UNITYENGINE_TEXTURE3D_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1CF43200)
#define UNITYENGINE_TEXTURE3D_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1CF43210)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF42FE0)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1CF42FD0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1CF431F0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1CF431E0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1CF431D0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1CF431C0)
#define UNITYENGINE_TEXTURE3D_SETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1CF438E0)
#define UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x1CF43840)
#define UNITYENGINE_TEXTURE3D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF432D0)
#define UNITYENGINE_TEXTURE3D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CF43360)
#define UNITYENGINE_TEXTURE3D__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CF434E0)
#define UNITYENGINE_TEXTURE3D__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CF43690)
#define UNITYENGINE_TEXTURE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF43220)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture3D_TypeDefinitionIndex = 5272;

	class Texture3D : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_OFFSET))(this, width, height, depth, format, flags);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_1_OFFSET))(this, width, height, depth, format, flags);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_2_OFFSET))(this, width, height, depth, format, flags, mipCount);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_3_OFFSET))(this, width, height, depth, textureFormat, mipCount);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_4_OFFSET))(this, width, height, depth, textureFormat, mipChain);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GET_DEPTH_OFFSET))(this);
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GET_FORMAT_OFFSET))(this);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void SetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET))(this, image, x, y, z, color);
		}

		::UnityEngine::Color GetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELIMPL_OFFSET))(this, image, x, y, z);
		}

		::UnityEngine::Color GetPixelBilinearImpl(::System::Int32 image, ::System::Single u, ::System::Single v, ::System::Single w)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELBILINEARIMPL_OFFSET))(this, image, u, v, w);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture3D* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 d, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture3D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET))(mono, w, h, d, mipCount, format, flags);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture3D* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 d, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::UnityEngine::Texture3D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET))(mono, w, h, d, mipCount, format, flags);
		}

		::System::Void ApplyImpl(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels(::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELS_OFFSET))(this, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_1()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELS_1_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32(::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELS32_OFFSET))(this, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32_1()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELS32_1_OFFSET))(this);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS_1_OFFSET))(this, colors);
		}

		::System::Void SetPixels32(::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS32_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels32_1(::Il2CppArray<::UnityEngine::Color32>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS32_1_OFFSET))(this, colors);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* data, ::System::Int32 mipLevel, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELDATAIMPLARRAY_OFFSET))(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Boolean SetPixelDataImpl(::System::IntPtr data, ::System::Int32 mipLevel, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELDATAIMPL_OFFSET))(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1(::System::Boolean updateMipmaps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_1_OFFSET))(this, updateMipmaps);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_2_OFFSET))(this);
		}

		::System::Void SetPixel(::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET))(this, x, y, z, color);
		}

		::System::Void SetPixel_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color color, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXEL_1_OFFSET))(this, x, y, z, color, mipLevel);
		}

		::UnityEngine::Color GetPixel(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXEL_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Color GetPixel_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::System::Int32 mipLevel)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXEL_1_OFFSET))(this, x, y, z, mipLevel);
		}

		::UnityEngine::Color GetPixelBilinear(::System::Single u, ::System::Single v, ::System::Single w)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELBILINEAR_OFFSET))(this, u, v, w);
		}

		::UnityEngine::Color GetPixelBilinear_1(::System::Single u, ::System::Single v, ::System::Single w, ::System::Int32 mipLevel)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELBILINEAR_1_OFFSET))(this, u, v, w, mipLevel);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, z, color);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, z, ret);
		}

		::System::Void GetPixelBilinearImpl_Injected(::System::Int32 image, ::System::Single u, ::System::Single v, ::System::Single w, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GETPIXELBILINEARIMPL_INJECTED_OFFSET))(this, image, u, v, w, ret);
		}
	};
}
