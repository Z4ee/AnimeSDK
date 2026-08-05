#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_IMAGEFORMAT_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_RAWIMAGEDATAREFERENCE_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x352890)

namespace UnityEngine::Profiling::Experimental
{
	inline static constexpr unsigned int DebugScreenCapture_TypeDefinitionIndex = 5439;

	struct alignas(8) DebugScreenCapture
	{
		::Unity::Collections::NativeArray_1<::System::Byte> _rawImageDataReference_k__BackingField; // 0x10
		::UnityEngine::TextureFormat _imageFormat_k__BackingField; // 0x20
		::System::Int32 _width_k__BackingField; // 0x24
		::System::Int32 _height_k__BackingField; // 0x28

		::System::Void set_rawImageDataReference(::Unity::Collections::NativeArray_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_RAWIMAGEDATAREFERENCE_OFFSET))(this, value);
		}

		::System::Void set_imageFormat(::UnityEngine::TextureFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_IMAGEFORMAT_OFFSET))(this, value);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_HEIGHT_OFFSET))(this, value);
		}
	};
}
