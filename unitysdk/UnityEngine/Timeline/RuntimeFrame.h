#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeElement.h"

namespace UnityEngine::Timeline { class Frame; }

#define UNITYENGINE_TIMELINE_RUNTIMEFRAME_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1C532A60)
#define UNITYENGINE_TIMELINE_RUNTIMEFRAME_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x1C532A40)
#define UNITYENGINE_TIMELINE_RUNTIMEFRAME_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x1C532A30)
#define UNITYENGINE_TIMELINE_RUNTIMEFRAME_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1C532A50)
#define UNITYENGINE_TIMELINE_RUNTIMEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C532A70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeFrame_TypeDefinitionIndex = 30817;

	class RuntimeFrame : public ::UnityEngine::Timeline::RuntimeElement
	{
	public:
		::UnityEngine::Timeline::Frame* frame; // 0x18
		::System::Int32 frameTime; // 0x20

		::System::Void _ctor(::UnityEngine::Timeline::Frame* frame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Frame*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEFRAME__CTOR_OFFSET))(this, frame);
		}

		::System::Int64 get_intervalStart()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEFRAME_GET_INTERVALSTART_OFFSET))(this);
		}

		::System::Int64 get_intervalEnd()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEFRAME_GET_INTERVALEND_OFFSET))(this);
		}

		::System::Void set_enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEFRAME_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void EvaluateAt(::System::Double localTime, ::UnityEngine::Playables::FrameData frameData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEFRAME_EVALUATEAT_OFFSET))(this, localTime, frameData);
		}
	};
}
