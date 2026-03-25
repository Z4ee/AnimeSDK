#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/LowLevel/MarkerFlags.h"

namespace System { class String; }

#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_BEGINSAMPLEWITHMETADATA_OFFSET UNITYSDK_OFFSET(0x189EA670)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x189EA650)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x189EA680)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_SETMARKERMETADATA_OFFSET UNITYSDK_OFFSET(0x189EA660)

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerUnsafeUtility_TypeDefinitionIndex = 3764;

	class ProfilerUnsafeUtility : public ::System::Object
	{
	public:
		static ::System::IntPtr CreateMarker(::System::String* name, ::System::UInt16 categoryId, ::Unity::Profiling::LowLevel::MarkerFlags flags, ::System::Int32 metadataCount)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::UInt16, ::Unity::Profiling::LowLevel::MarkerFlags, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_CREATEMARKER_OFFSET))(name, categoryId, flags, metadataCount);
		}

		static ::System::Void SetMarkerMetadata(::System::IntPtr markerPtr, ::System::Int32 index, ::System::String* name, ::System::Byte type, ::System::Byte unit)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_SETMARKERMETADATA_OFFSET))(markerPtr, index, name, type, unit);
		}

		static ::System::Void BeginSampleWithMetadata(::System::IntPtr markerPtr, ::System::Int32 metadataCount, ::System::Void* metadata)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_BEGINSAMPLEWITHMETADATA_OFFSET))(markerPtr, metadataCount, metadata);
		}

		static ::System::Void EndSample(::System::IntPtr markerPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_ENDSAMPLE_OFFSET))(markerPtr);
		}
	};
}
