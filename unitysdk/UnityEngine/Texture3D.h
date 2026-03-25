#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x18A56C80)
#define UNITYENGINE_TEXTURE3D_APPLY_1_OFFSET UNITYSDK_OFFSET(0x18A57070)
#define UNITYENGINE_TEXTURE3D_APPLY_2_OFFSET UNITYSDK_OFFSET(0x18A570E0)
#define UNITYENGINE_TEXTURE3D_APPLY_OFFSET UNITYSDK_OFFSET(0x18A56FF0)
#define UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x18A56B90)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x18A56BC0)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x18A56BD0)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A56BB0)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x18A56BA0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x18A56CC0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x18A56CB0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x18A56CA0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x18A56C90)
#define UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x18A57150)
#define UNITYENGINE_TEXTURE3D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A56D50)
#define UNITYENGINE_TEXTURE3D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18A56DC0)
#define UNITYENGINE_TEXTURE3D__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18A56EA0)
#define UNITYENGINE_TEXTURE3D__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18A56FB0)
#define UNITYENGINE_TEXTURE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x18A56CD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture3D_TypeDefinitionIndex = 4007;

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

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void SetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET))(this, image, x, y, z, color);
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

		::System::Void SetPixel(::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color color, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET))(this, x, y, z, color, mipLevel);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, z, color);
		}
	};
}
