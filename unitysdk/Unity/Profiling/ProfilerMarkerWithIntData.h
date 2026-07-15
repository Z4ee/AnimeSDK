#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x3AC3470)
#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4C99D0)
#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_END_OFFSET UNITYSDK_OFFSET(0x3AC3450)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithIntData_TypeDefinitionIndex = 3940;

	struct alignas(8) ProfilerMarkerWithIntData
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18

		static ::Unity::Profiling::ProfilerMarkerWithIntData Create(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithIntData(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_END_OFFSET))(this);
		}

		::System::Void Begin(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_BEGIN_OFFSET))(this, a1, a2);
		}
	};
}
