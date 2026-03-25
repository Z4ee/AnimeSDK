#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

namespace System { class Array; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOJPG_OFFSET UNITYSDK_OFFSET(0x18A649A0)
#define UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOPNG_OFFSET UNITYSDK_OFFSET(0x18A64990)
#define UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOTGA_OFFSET UNITYSDK_OFFSET(0x18A64980)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_1_OFFSET UNITYSDK_OFFSET(0x18A64950)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_OFFSET UNITYSDK_OFFSET(0x18A64940)
#define UNITYENGINE_IMAGECONVERSION_ENCODETOPNG_OFFSET UNITYSDK_OFFSET(0x18A64930)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_1_OFFSET UNITYSDK_OFFSET(0x18A64970)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x18A64960)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOJPG_OFFSET UNITYSDK_OFFSET(0x18A649D0)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOPNG_OFFSET UNITYSDK_OFFSET(0x18A649C0)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOTGA_OFFSET UNITYSDK_OFFSET(0x18A649B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ImageConversion_TypeDefinitionIndex = 5143;

	class ImageConversion : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* EncodeToPNG(::UnityEngine::Texture2D* tex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOPNG_OFFSET))(tex);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToJPG(::UnityEngine::Texture2D* tex, ::System::Int32 quality)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_OFFSET))(tex, quality);
		}

		static ::Il2CppArray<::System::Byte>* EncodeToJPG_1(::UnityEngine::Texture2D* tex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOJPG_1_OFFSET))(tex);
		}

		static ::System::Boolean LoadImage(::UnityEngine::Texture2D* tex, ::Il2CppArray<::System::Byte>* data, ::System::Boolean markNonReadable)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET))(tex, data, markNonReadable);
		}

		static ::System::Boolean LoadImage_1(::UnityEngine::Texture2D* tex, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_1_OFFSET))(tex, data);
		}

		static ::Il2CppArray<::System::Byte>* EncodeArrayToTGA(::System::Array* array, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::UInt32 width, ::System::UInt32 height, ::System::UInt32 rowBytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Array*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOTGA_OFFSET))(array, format, width, height, rowBytes);
		}

		static ::Il2CppArray<::System::Byte>* EncodeArrayToPNG(::System::Array* array, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::UInt32 width, ::System::UInt32 height, ::System::UInt32 rowBytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Array*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOPNG_OFFSET))(array, format, width, height, rowBytes);
		}

		static ::Il2CppArray<::System::Byte>* EncodeArrayToJPG(::System::Array* array, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::UInt32 width, ::System::UInt32 height, ::System::UInt32 rowBytes, ::System::Int32 quality)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Array*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODEARRAYTOJPG_OFFSET))(array, format, width, height, rowBytes, quality);
		}

		static ::System::Void* UnsafeEncodeNativeArrayToTGA(::System::Void* array, ::System::Int32& sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::UInt32 width, ::System::UInt32 height, ::System::UInt32 rowBytes)
		{
			return ((::System::Void*(*)(::System::Void*, ::System::Int32&, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOTGA_OFFSET))(array, sizeInBytes, format, width, height, rowBytes);
		}

		static ::System::Void* UnsafeEncodeNativeArrayToPNG(::System::Void* array, ::System::Int32& sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::UInt32 width, ::System::UInt32 height, ::System::UInt32 rowBytes)
		{
			return ((::System::Void*(*)(::System::Void*, ::System::Int32&, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOPNG_OFFSET))(array, sizeInBytes, format, width, height, rowBytes);
		}

		static ::System::Void* UnsafeEncodeNativeArrayToJPG(::System::Void* array, ::System::Int32& sizeInBytes, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::UInt32 width, ::System::UInt32 height, ::System::UInt32 rowBytes, ::System::Int32 quality)
		{
			return ((::System::Void*(*)(::System::Void*, ::System::Int32&, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOJPG_OFFSET))(array, sizeInBytes, format, width, height, rowBytes, quality);
		}
	};
}
