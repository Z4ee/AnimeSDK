#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_TEXTURE2DARRAY_GET_ALLSLICES_OFFSET UNITYSDK_OFFSET(0x1D0D61D0)
#define UNITYENGINE_TEXTURE2DARRAY_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1D0D61E0)
#define UNITYENGINE_TEXTURE2DARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1D0D61F0)
#define UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1D0D6200)
#define UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1D0D6210)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0D6340)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D0D63B0)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D0D6490)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D0D65A0)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D0D65F0)
#define UNITYENGINE_TEXTURE2DARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D62C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2DArray_TypeDefinitionIndex = 4189;

	class Texture2DArray : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::DefaultFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextureFormat a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextureFormat a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextureFormat a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 get_allSlices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_ALLSLICES_OFFSET))();
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_DEPTH_OFFSET))(this);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_ISREADABLE_OFFSET))(this);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2DArray* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2DArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATEIMPL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture2DArray* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a7)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2DArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
