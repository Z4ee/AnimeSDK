#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class Recorder; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_RECORDERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E670DE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SRPBatcherProfiler_RecorderEntry_TypeDefinitionIndex = 27757;

	class SRPBatcherProfiler_RecorderEntry : public ::System::Object
	{
	public:
		::UnityEngine::Profiling::Recorder* recorder; // 0x10
		::System::String* name; // 0x18
		::System::String* oldName; // 0x20
		::System::Int32 callCount; // 0x28
		::System::Single accTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_RECORDERENTRY__CTOR_OFFSET))(this);
		}
	};
}
