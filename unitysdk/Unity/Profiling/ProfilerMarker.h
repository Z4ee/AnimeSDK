#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKER_AUTO_OFFSET UNITYSDK_OFFSET(0x3AC3410)
#define UNITY_PROFILING_PROFILERMARKER_INTERNAL_BEGIN_OFFSET UNITYSDK_OFFSET(0x1C4C9990)
#define UNITY_PROFILING_PROFILERMARKER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4C9960)
#define UNITY_PROFILING_PROFILERMARKER_INTERNAL_END_OFFSET UNITYSDK_OFFSET(0x1C4C99A0)
#define UNITY_PROFILING_PROFILERMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x3AC33F0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarker_TypeDefinitionIndex = 3937;

	struct alignas(8) ProfilerMarker
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER__CTOR_OFFSET))(this, a1);
		}

		/*
		::Unity::Profiling::ProfilerMarker_AutoScope Auto()
		{
			return ((::Unity::Profiling::ProfilerMarker_AutoScope(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_AUTO_OFFSET))(this);
		}
		*/

		static ::System::IntPtr Internal_Create(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_INTERNAL_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_Begin(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_INTERNAL_BEGIN_OFFSET))(a1);
		}

		static ::System::Void Internal_End(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_INTERNAL_END_OFFSET))(a1);
		}
	};
}
