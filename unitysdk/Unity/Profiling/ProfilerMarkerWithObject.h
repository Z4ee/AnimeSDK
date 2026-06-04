#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITY_PROFILING_PROFILERMARKERWITHOBJECT_BEGIN_OFFSET UNITYSDK_OFFSET(0x387DC60)
#define UNITY_PROFILING_PROFILERMARKERWITHOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2773F0)
#define UNITY_PROFILING_PROFILERMARKERWITHOBJECT_END_OFFSET UNITYSDK_OFFSET(0x387DB30)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithObject_TypeDefinitionIndex = 3937;

	struct alignas(8) ProfilerMarkerWithObject
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18

		static ::Unity::Profiling::ProfilerMarkerWithObject Create(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithObject(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHOBJECT_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHOBJECT_END_OFFSET))(this);
		}

		::System::Void Begin(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHOBJECT_BEGIN_OFFSET))(this, a1, a2);
		}
	};
}
