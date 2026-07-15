#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x3AC3590)
#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4C9DE0)
#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_END_OFFSET UNITYSDK_OFFSET(0x3AC3450)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithStringData_TypeDefinitionIndex = 3939;

	struct alignas(8) ProfilerMarkerWithStringData
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18

		static ::Unity::Profiling::ProfilerMarkerWithStringData Create(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithStringData(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_END_OFFSET))(this);
		}

		::System::Void Begin(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET))(this, a1, a2);
		}
	};
}
