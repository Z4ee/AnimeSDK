#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x189FBB70)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_1_OFFSET UNITYSDK_OFFSET(0x189FBF50)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET UNITYSDK_OFFSET(0x189FBED0)
#define UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x189FBAB0)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x189FBAC0)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x189FBAD0)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x189FBB90)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x189FBB80)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189FBC20)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x189FBC80)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x189FBD50)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x189FBE50)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x189FBE90)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x189FBBB0)

namespace UnityEngine
{
	inline static constexpr unsigned int CubemapArray_TypeDefinitionIndex = 4009;

	class CubemapArray : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_OFFSET))(this, width, cubemapCount, format, flags);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_1_OFFSET))(this, width, cubemapCount, format, flags);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_2_OFFSET))(this, width, cubemapCount, format, flags, mipCount);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 cubemapCount, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_3_OFFSET))(this, width, cubemapCount, textureFormat, mipCount, linear);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 cubemapCount, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_4_OFFSET))(this, width, cubemapCount, textureFormat, mipChain, linear);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 cubemapCount, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_5_OFFSET))(this, width, cubemapCount, textureFormat, mipChain);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET))(this);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::CubemapArray* mono, ::System::Int32 ext, ::System::Int32 count, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Boolean(*)(::UnityEngine::CubemapArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET))(mono, ext, count, mipCount, format, flags);
		}

		static ::System::Void Internal_Create(::UnityEngine::CubemapArray* mono, ::System::Int32 ext, ::System::Int32 count, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::UnityEngine::CubemapArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET))(mono, ext, count, mipCount, format, flags);
		}

		::System::Void ApplyImpl(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 arrayElement, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET))(this, colors, face, arrayElement, miplevel);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 arrayElement)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_1_OFFSET))(this, colors, face, arrayElement);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_1_OFFSET))(this);
		}
	};
}
