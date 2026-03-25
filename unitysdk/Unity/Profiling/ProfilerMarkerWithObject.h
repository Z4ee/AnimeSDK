#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITY_PROFILING_PROFILERMARKERWITHOBJECT_BEGIN_OFFSET UNITYSDK_OFFSET(0x210EBE0)
#define UNITY_PROFILING_PROFILERMARKERWITHOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x189EA8E0)
#define UNITY_PROFILING_PROFILERMARKERWITHOBJECT_END_OFFSET UNITYSDK_OFFSET(0x210EAB0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithObject_TypeDefinitionIndex = 3761;

	struct alignas(8) ProfilerMarkerWithObject
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18

		static ::Unity::Profiling::ProfilerMarkerWithObject Create(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithObject(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHOBJECT_CREATE_OFFSET))(name, parameterName1, parameterName2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHOBJECT_END_OFFSET))(this);
		}

		::System::Void Begin(::UnityEngine::Object* obj1, ::UnityEngine::Object* obj2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHOBJECT_BEGIN_OFFSET))(this, obj1, obj2);
		}
	};
}
