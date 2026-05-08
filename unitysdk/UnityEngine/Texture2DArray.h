#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_TEXTURE2DARRAY_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1B0C9670)
#define UNITYENGINE_TEXTURE2DARRAY_APPLY_OFFSET UNITYSDK_OFFSET(0x1B0C9B80)
#define UNITYENGINE_TEXTURE2DARRAY_GET_ALLSLICES_OFFSET UNITYSDK_OFFSET(0x1B0C9580)
#define UNITYENGINE_TEXTURE2DARRAY_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B0C9590)
#define UNITYENGINE_TEXTURE2DARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1B0C95A0)
#define UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1B0C95B0)
#define UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B0C95C0)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0C9730)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B0C97C0)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B0C9940)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B0C9AF0)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B0C9B40)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C9680)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2DArray_TypeDefinitionIndex = 5273;

	class Texture2DArray : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_OFFSET))(this, width, height, depth, format, flags);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_1_OFFSET))(this, width, height, depth, format, flags);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_2_OFFSET))(this, width, height, depth, format, flags, mipCount);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_3_OFFSET))(this, width, height, depth, textureFormat, mipCount, linear);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_4_OFFSET))(this, width, height, depth, textureFormat, mipChain, linear);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_5_OFFSET))(this, width, height, depth, textureFormat, mipChain);
		}

		static ::System::Int32 get_allSlices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_ALLSLICES_OFFSET))();
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_FORMAT_OFFSET))(this);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_ISREADABLE_OFFSET))(this);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2DArray* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 d, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2DArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATEIMPL_OFFSET))(mono, w, h, d, mipCount, format, flags);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture2DArray* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 d, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2DArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATE_OFFSET))(mono, w, h, d, mipCount, format, flags);
		}

		::System::Void ApplyImpl(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_APPLYIMPL_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}
	};
}
