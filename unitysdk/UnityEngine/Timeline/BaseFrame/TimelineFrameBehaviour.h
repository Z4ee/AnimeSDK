#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class TimeLinePlayableBehaviour; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class PropertyCurve; }
namespace UnityEngine::Timeline { class TimelineFrame; }

#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_CHECKISRECORDER_OFFSET UNITYSDK_OFFSET(0x1F962A90)
#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1F961C90)
#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F962170)
#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F962C50)
#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1F961B20)
#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F9622E0)
#define UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F962F00)

namespace UnityEngine::Timeline::BaseFrame
{
	inline static constexpr unsigned int TimelineFrameBehaviour_TypeDefinitionIndex = 33108;

	class TimelineFrameBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimeLinePlayableBehaviour*>* initBehaviours; // 0x10
		::UnityEngine::Timeline::TimelineFrame* frameTrack; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TimeLinePlayableBehaviour*>* RealPlayableBehaviours; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyCurve*>* frameInfos; // 0x28
		::System::Boolean dontResetActive; // 0x30
		::System::Boolean dontResetWhenDestroy; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void PrepareData(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_PREPAREDATA_OFFSET))(this, playable, info);
		}

		::System::Void InitData(::UnityEngine::GameObject* timelineGo, ::UnityEngine::Timeline::TimelineFrame* frameTrack)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineFrame*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_INITDATA_OFFSET))(this, timelineGo, frameTrack);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Boolean CheckIsRecorder(::System::Reflection::FieldInfo* fieldInfo, ::System::Int32 typeIndex, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_CHECKISRECORDER_OFFSET))(this, fieldInfo, typeIndex, value);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEFRAME_TIMELINEFRAMEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
