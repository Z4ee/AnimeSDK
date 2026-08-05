#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKER_AUTO_OFFSET UNITYSDK_OFFSET(0xA53DE0)
#define UNITY_PROFILING_PROFILERMARKER_INTERNAL_BEGIN_OFFSET UNITYSDK_OFFSET(0x1EA5A0C0)
#define UNITY_PROFILING_PROFILERMARKER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA5A090)
#define UNITY_PROFILING_PROFILERMARKER_INTERNAL_END_OFFSET UNITYSDK_OFFSET(0x1EA5A0D0)
#define UNITY_PROFILING_PROFILERMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA53DC0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarker_TypeDefinitionIndex = 5046;

	struct alignas(8) ProfilerMarker
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER__CTOR_OFFSET))(this, name);
		}

		/*
		::Unity::Profiling::ProfilerMarker_AutoScope Auto()
		{
			return ((::Unity::Profiling::ProfilerMarker_AutoScope(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_AUTO_OFFSET))(this);
		}
		*/

		static ::System::IntPtr Internal_Create(::System::String* name, ::System::UInt16 flags)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_INTERNAL_CREATE_OFFSET))(name, flags);
		}

		static ::System::Void Internal_Begin(::System::IntPtr markerPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_INTERNAL_BEGIN_OFFSET))(markerPtr);
		}

		static ::System::Void Internal_End(::System::IntPtr markerPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_INTERNAL_END_OFFSET))(markerPtr);
		}
	};
}
