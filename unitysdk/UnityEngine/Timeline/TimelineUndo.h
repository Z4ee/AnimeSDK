#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHDESTROYUNDO_OFFSET UNITYSDK_OFFSET(0x1F1A22F0)
#define UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHUNDO_OFFSET UNITYSDK_OFFSET(0x1F1A24A0)
#define UNITYENGINE_TIMELINE_TIMELINEUNDO_REGISTERCREATEDOBJECTUNDO_OFFSET UNITYSDK_OFFSET(0x1F1A24B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineUndo_TypeDefinitionIndex = 33073;

	class TimelineUndo : public ::System::Object
	{
	public:
		static ::System::Void PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* timeline, ::UnityEngine::Object* thingToDirty, ::UnityEngine::Object* objectToDestroy, ::System::String* operation)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHDESTROYUNDO_OFFSET))(timeline, thingToDirty, objectToDestroy, operation);
		}

		static ::System::Void PushUndo(::UnityEngine::Object* thingToDirty, ::System::String* operation)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHUNDO_OFFSET))(thingToDirty, operation);
		}

		static ::System::Void RegisterCreatedObjectUndo(::UnityEngine::Object* thingCreated, ::System::String* operation)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_REGISTERCREATEDOBJECTUNDO_OFFSET))(thingCreated, operation);
		}
	};
}
