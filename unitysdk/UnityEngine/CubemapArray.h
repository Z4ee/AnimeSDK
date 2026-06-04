#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1B287310)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1B2876F0)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET UNITYSDK_OFFSET(0x1B287670)
#define UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1B287250)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1B287260)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B287270)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1B287330)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1B287320)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2873C0)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B287420)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B2874F0)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B2875F0)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B287630)
#define UNITYENGINE_CUBEMAPARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B287350)

namespace UnityEngine
{
	inline static constexpr unsigned int CubemapArray_TypeDefinitionIndex = 4185;

	class CubemapArray : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::DefaultFormat a3, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET))(this);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::CubemapArray* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::CubemapArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Internal_Create(::UnityEngine::CubemapArray* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a6)
		{
			return ((::System::Void(*)(::UnityEngine::CubemapArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void ApplyImpl(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* a1, ::UnityEngine::CubemapFace a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* a1, ::UnityEngine::CubemapFace a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Apply(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET))(this, a1, a2);
		}

		::System::Void Apply_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_1_OFFSET))(this);
		}
	};
}
