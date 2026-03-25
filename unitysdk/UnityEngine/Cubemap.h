#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x189FB540)
#define UNITYENGINE_CUBEMAP_APPLY_1_OFFSET UNITYSDK_OFFSET(0x189FBA40)
#define UNITYENGINE_CUBEMAP_APPLY_OFFSET UNITYSDK_OFFSET(0x189FB9C0)
#define UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x189FB550)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x189FB490)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x189FB4A0)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x189FB570)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x189FB560)
#define UNITYENGINE_CUBEMAP_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x189FB590)
#define UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x189FB580)
#define UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x189FB920)
#define UNITYENGINE_CUBEMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189FB5D0)
#define UNITYENGINE_CUBEMAP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x189FB6B0)
#define UNITYENGINE_CUBEMAP__CTOR_3_OFFSET UNITYSDK_OFFSET(0x189FB7C0)
#define UNITYENGINE_CUBEMAP__CTOR_4_OFFSET UNITYSDK_OFFSET(0x189FB6D0)
#define UNITYENGINE_CUBEMAP__CTOR_5_OFFSET UNITYSDK_OFFSET(0x189FB8B0)
#define UNITYENGINE_CUBEMAP__CTOR_6_OFFSET UNITYSDK_OFFSET(0x189FB8E0)
#define UNITYENGINE_CUBEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB5A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Cubemap_TypeDefinitionIndex = 4006;

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

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void SetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET))(this, image, x, y, color);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET))(this, colors, face, miplevel);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_1_OFFSET))(this, colors, face);
		}

		::System::Void SetPixel(::UnityEngine::CubemapFace face, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET))(this, face, x, y, color);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_1_OFFSET))(this);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, color);
		}
	};
}
