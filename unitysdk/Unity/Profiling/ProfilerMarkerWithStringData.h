#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x210EBF0)
#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x189EAB30)
#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_END_OFFSET UNITYSDK_OFFSET(0x210EAB0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithStringData_TypeDefinitionIndex = 3759;

	struct alignas(8) ProfilerMarkerWithStringData
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18

		static ::Unity::Profiling::ProfilerMarkerWithStringData Create(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithStringData(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_CREATE_OFFSET))(name, parameterName1, parameterName2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_END_OFFSET))(this);
		}

		::System::Void Begin(::System::String* value1, ::System::String* value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET))(this, value1, value2);
		}
	};
}
