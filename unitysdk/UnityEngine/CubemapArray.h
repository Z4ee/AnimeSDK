#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class Array; }

#define UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1AE6B5D0)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1AE6BBF0)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1AE6BC70)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET UNITYSDK_OFFSET(0x1AE6BB70)
#define UNITYENGINE_CUBEMAPARRAY_GETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1AE6B610)
#define UNITYENGINE_CUBEMAPARRAY_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1AE6B600)
#define UNITYENGINE_CUBEMAPARRAY_GETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1AE6B5F0)
#define UNITYENGINE_CUBEMAPARRAY_GETPIXELS_OFFSET UNITYSDK_OFFSET(0x1AE6B5E0)
#define UNITYENGINE_CUBEMAPARRAY_GET_CUBEMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE6B4F0)
#define UNITYENGINE_CUBEMAPARRAY_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1AE6B500)
#define UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1AE6B510)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1AE6B520)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE6B530)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1AE6B680)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1AE6B690)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1AE6B660)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1AE6B650)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1AE6B630)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1AE6B620)
#define UNITYENGINE_CUBEMAPARRAY_SETREADABLE_OFFSET UNITYSDK_OFFSET(0x1AE6B6A0)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE6B750)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AE6B7F0)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AE6B950)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AE6BAF0)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AE6BB30)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6B6B0)

namespace UnityEngine
{
	inline static constexpr unsigned int CubemapArray_TypeDefinitionIndex = 5274;

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

		::System::Int32 get_cubemapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GET_CUBEMAPCOUNT_OFFSET))(this);
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GET_FORMAT_OFFSET))(this);
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

		::Il2CppArray<::UnityEngine::Color>* GetPixels(::UnityEngine::CubemapFace face, ::System::Int32 arrayElement, ::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GETPIXELS_OFFSET))(this, face, arrayElement, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_1(::UnityEngine::CubemapFace face, ::System::Int32 arrayElement)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GETPIXELS_1_OFFSET))(this, face, arrayElement);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32(::UnityEngine::CubemapFace face, ::System::Int32 arrayElement, ::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GETPIXELS32_OFFSET))(this, face, arrayElement, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32_1(::UnityEngine::CubemapFace face, ::System::Int32 arrayElement)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GETPIXELS32_1_OFFSET))(this, face, arrayElement);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 arrayElement, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET))(this, colors, face, arrayElement, miplevel);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 arrayElement)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_1_OFFSET))(this, colors, face, arrayElement);
		}

		::System::Void SetPixels32(::Il2CppArray<::UnityEngine::Color32>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 arrayElement, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS32_OFFSET))(this, colors, face, arrayElement, miplevel);
		}

		::System::Void SetPixels32_1(::Il2CppArray<::UnityEngine::Color32>* colors, ::UnityEngine::CubemapFace face, ::System::Int32 arrayElement)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS32_1_OFFSET))(this, colors, face, arrayElement);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* data, ::System::Int32 mipLevel, ::System::Int32 face, ::System::Int32 element, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELDATAIMPLARRAY_OFFSET))(this, data, mipLevel, face, element, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Boolean SetPixelDataImpl(::System::IntPtr data, ::System::Int32 mipLevel, ::System::Int32 face, ::System::Int32 element, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELDATAIMPL_OFFSET))(this, data, mipLevel, face, element, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Void SetReadable(::System::Boolean isReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETREADABLE_OFFSET))(this, isReadable);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1(::System::Boolean updateMipmaps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_1_OFFSET))(this, updateMipmaps);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_2_OFFSET))(this);
		}
	};
}
