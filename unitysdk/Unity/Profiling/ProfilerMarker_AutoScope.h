#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_PROFILING_PROFILERMARKER_AUTOSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x988C10)
#define UNITY_PROFILING_PROFILERMARKER_AUTOSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x988C00)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarker_AutoScope_TypeDefinitionIndex = 5048;

	struct alignas(8) ProfilerMarker_AutoScope
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr markerPtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_AUTOSCOPE__CTOR_OFFSET))(this, markerPtr);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_AUTOSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
