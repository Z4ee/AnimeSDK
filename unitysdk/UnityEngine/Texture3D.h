#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1B2DF030)
#define UNITYENGINE_TEXTURE3D_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1B2DF420)
#define UNITYENGINE_TEXTURE3D_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1B2DF490)
#define UNITYENGINE_TEXTURE3D_APPLY_OFFSET UNITYSDK_OFFSET(0x1B2DF3A0)
#define UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1B2DEF40)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1B2DEF70)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2DEF80)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2DEF60)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1B2DEF50)
#define UNITYENGINE_TEXTURE3D_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1B2DF070)
#define UNITYENGINE_TEXTURE3D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1B2DF060)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1B2DF050)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1B2DF040)
#define UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x1B2DF500)
#define UNITYENGINE_TEXTURE3D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2DF100)
#define UNITYENGINE_TEXTURE3D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2DF170)
#define UNITYENGINE_TEXTURE3D__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B2DF250)
#define UNITYENGINE_TEXTURE3D__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B2DF360)
#define UNITYENGINE_TEXTURE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DF080)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture3D_TypeDefinitionIndex = 4183;

	class Texture3D : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::DefaultFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextureFormat a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextureFormat a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void SetPixelImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture3D* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture3D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture3D* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a7)
		{
			return ((::System::Void(*)(::UnityEngine::Texture3D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ApplyImpl(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels(::Il2CppArray<::UnityEngine::Color>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels_1(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS_1_OFFSET))(this, a1);
		}

		::System::Void SetPixels32(::Il2CppArray<::UnityEngine::Color32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS32_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels32_1(::Il2CppArray<::UnityEngine::Color32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS32_1_OFFSET))(this, a1);
		}

		::System::Void Apply(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_OFFSET))(this, a1, a2);
		}

		::System::Void Apply_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_1_OFFSET))(this, a1);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_2_OFFSET))(this);
		}

		::System::Void SetPixel(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Color& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
