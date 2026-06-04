#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xC4C0)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_IMAGEFORMAT_OFFSET UNITYSDK_OFFSET(0x2A90)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_RAWIMAGEDATAREFERENCE_OFFSET UNITYSDK_OFFSET(0x2C2F090)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x6F00)

namespace UnityEngine::Profiling::Experimental
{
	inline static constexpr unsigned int DebugScreenCapture_TypeDefinitionIndex = 4501;

	struct alignas(8) DebugScreenCapture
	{
		::Unity::Collections::NativeArray_1<::System::Byte> _rawImageDataReference_k__BackingField; // 0x10
		::UnityEngine::TextureFormat _imageFormat_k__BackingField; // 0x20
		::System::Int32 _width_k__BackingField; // 0x24
		::System::Int32 _height_k__BackingField; // 0x28

		::System::Void set_rawImageDataReference(::Unity::Collections::NativeArray_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_RAWIMAGEDATAREFERENCE_OFFSET))(this, a1);
		}

		::System::Void set_imageFormat(::UnityEngine::TextureFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_IMAGEFORMAT_OFFSET))(this, a1);
		}

		::System::Void set_width(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Void set_height(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_HEIGHT_OFFSET))(this, a1);
		}
	};
}
