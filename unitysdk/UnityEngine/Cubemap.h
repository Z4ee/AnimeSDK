#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED150F0)
#define UNITYENGINE_CUBEMAP_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1ED155F0)
#define UNITYENGINE_CUBEMAP_APPLY_OFFSET UNITYSDK_OFFSET(0x1ED15570)
#define UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1ED15100)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1ED15040)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1ED15050)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED15120)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1ED15110)
#define UNITYENGINE_CUBEMAP_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1ED15140)
#define UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1ED15130)
#define UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x1ED154D0)
#define UNITYENGINE_CUBEMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED15180)
#define UNITYENGINE_CUBEMAP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ED15260)
#define UNITYENGINE_CUBEMAP__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1ED15370)
#define UNITYENGINE_CUBEMAP__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1ED15280)
#define UNITYENGINE_CUBEMAP__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1ED15460)
#define UNITYENGINE_CUBEMAP__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1ED15490)
#define UNITYENGINE_CUBEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED15150)

namespace UnityEngine
{
	inline static constexpr unsigned int Cubemap_TypeDefinitionIndex = 4197;

	class Cubemap : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Experimental::Rendering::DefaultFormat a2, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::UnityEngine::Experimental::Rendering::GraphicsFormat a2, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::UnityEngine::TextureFormat a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::UnityEngine::Experimental::Rendering::GraphicsFormat a2, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::UnityEngine::TextureFormat a2, ::System::Int32 a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::UnityEngine::TextureFormat a2, ::System::Boolean a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_6(::System::Int32 a1, ::UnityEngine::TextureFormat a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP__CTOR_6_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Cubemap* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5, ::System::IntPtr a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Cubemap*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Internal_Create(::UnityEngine::Cubemap* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5, ::System::IntPtr a6)
		{
			return ((::System::Void(*)(::UnityEngine::Cubemap*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void ApplyImpl(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void SetPixelImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* a1, ::UnityEngine::CubemapFace a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* a1, ::UnityEngine::CubemapFace a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixel(::UnityEngine::CubemapFace a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CubemapFace, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Apply(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_OFFSET))(this, a1, a2);
		}

		::System::Void Apply_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_1_OFFSET))(this);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
