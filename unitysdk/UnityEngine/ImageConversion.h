#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Texture2D_EXRFlags.h"

namespace System { class Array; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOJPG_OFFSET UNITYSDK_OFFSET(0x1F014E10)
#define UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOPNG_OFFSET UNITYSDK_OFFSET(0x1F014E00)
#define UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOTGA_OFFSET UNITYSDK_OFFSET(0x1F014DF0)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOEXR_1_OFFSET UNITYSDK_OFFSET(0x1F014DC0)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOEXR_OFFSET UNITYSDK_OFFSET(0x1F014DB0)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_1_OFFSET UNITYSDK_OFFSET(0x1F014DA0)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_OFFSET UNITYSDK_OFFSET(0x1F014D90)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOPNG_OFFSET UNITYSDK_OFFSET(0x1F014D80)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOTGA_OFFSET UNITYSDK_OFFSET(0x1F014D70)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_1_OFFSET UNITYSDK_OFFSET(0x1F014DE0)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x1F014DD0)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOJPG_OFFSET UNITYSDK_OFFSET(0x1F014E40)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOPNG_OFFSET UNITYSDK_OFFSET(0x1F014E30)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOTGA_OFFSET UNITYSDK_OFFSET(0x1F014E20)

namespace UnityEngine
{
	inline static constexpr unsigned int ImageConversion_TypeDefinitionIndex = 5198;

	class ImageConversion : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* EncodeToTGA(::UnityEngine::Texture2D* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOTGA_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToPNG(::UnityEngine::Texture2D* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOPNG_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToJPG(::UnityEngine::Texture2D* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToJPG_1(::UnityEngine::Texture2D* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToEXR(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D_EXRFlags a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D_EXRFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOEXR_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToEXR_1(::UnityEngine::Texture2D* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOEXR_1_OFFSET))(a1);
		}

		static ::System::Boolean LoadImage(::UnityEngine::Texture2D* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LoadImage_1(::UnityEngine::Texture2D* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* EncodeArrayToTGA(::System::Array* a1, ::UnityEngine::Experimental::Rendering::GraphicsFormat a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Array*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOTGA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::Byte>* EncodeArrayToPNG(::System::Array* a1, ::UnityEngine::Experimental::Rendering::GraphicsFormat a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Array*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOPNG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::Byte>* EncodeArrayToJPG(::System::Array* a1, ::UnityEngine::Experimental::Rendering::GraphicsFormat a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Int32 a6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Array*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOJPG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void* UnsafeEncodeNativeArrayToTGA(::System::Void* a1, ::System::Int32& a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void*(*)(::System::Void*, ::System::Int32&, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOTGA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void* UnsafeEncodeNativeArrayToPNG(::System::Void* a1, ::System::Int32& a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void*(*)(::System::Void*, ::System::Int32&, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOPNG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void* UnsafeEncodeNativeArrayToJPG(::System::Void* a1, ::System::Int32& a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Int32 a7)
		{
			return ((::System::Void*(*)(::System::Void*, ::System::Int32&, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOJPG_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
