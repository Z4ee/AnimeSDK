#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/LowLevel/MarkerFlags.h"

namespace System { class String; }

#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_BEGINSAMPLEWITHMETADATA_OFFSET UNITYSDK_OFFSET(0x1E1E0B10)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x1E1E0AF0)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1E1E0B20)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_SETMARKERMETADATA_OFFSET UNITYSDK_OFFSET(0x1E1E0B00)

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerUnsafeUtility_TypeDefinitionIndex = 3952;

	class ProfilerUnsafeUtility : public ::System::Object
	{
	public:
		static ::System::IntPtr CreateMarker(::System::String* a1, ::System::UInt16 a2, ::Unity::Profiling::LowLevel::MarkerFlags a3, ::System::Int32 a4)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::UInt16, ::Unity::Profiling::LowLevel::MarkerFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_CREATEMARKER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetMarkerMetadata(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3, ::System::Byte a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_SETMARKERMETADATA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BeginSampleWithMetadata(::System::IntPtr a1, ::System::Int32 a2, ::System::Void* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_BEGINSAMPLEWITHMETADATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndSample(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_ENDSAMPLE_OFFSET))(a1);
		}
	};
}
