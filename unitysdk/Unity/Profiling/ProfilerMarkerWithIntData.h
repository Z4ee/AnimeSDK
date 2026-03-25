#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x210EAD0)
#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x189EA720)
#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_END_OFFSET UNITYSDK_OFFSET(0x210EAB0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithIntData_TypeDefinitionIndex = 3760;

	struct alignas(8) ProfilerMarkerWithIntData
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18

		static ::Unity::Profiling::ProfilerMarkerWithIntData Create(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithIntData(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_CREATE_OFFSET))(name, parameterName1, parameterName2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_END_OFFSET))(this);
		}

		::System::Void Begin(::System::Int32 value1, ::System::Int32 value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_BEGIN_OFFSET))(this, value1, value2);
		}
	};
}
