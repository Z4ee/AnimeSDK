#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_IMAGECONVERSION_ENCODETOPNG_OFFSET UNITYSDK_OFFSET(0x1C560EC0)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_1_OFFSET UNITYSDK_OFFSET(0x1C560EE0)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x1C560ED0)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOJPG_OFFSET UNITYSDK_OFFSET(0x1C560F00)
#define UNITYENGINE_IMAGECONVERSION_UNSAFEENCODENATIVEARRAYTOPNG_OFFSET UNITYSDK_OFFSET(0x1C560EF0)

namespace UnityEngine
{
	inline static constexpr unsigned int ImageConversion_TypeDefinitionIndex = 6617;

	class ImageConversion : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* EncodeToPNG(::UnityEngine::Texture2D* tex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_ENCODETOPNG_OFFSET))(tex);
		}

		static ::System::Boolean LoadImage(::UnityEngine::Texture2D* tex, ::Il2CppArray<::System::Byte>* data, ::System::Boolean markNonReadable)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET))(tex, data, markNonReadable);
		}

		static ::System::Boolean LoadImage_1(::UnityEngine::Texture2D* tex, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_1_OFFSET))(tex, data);
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
