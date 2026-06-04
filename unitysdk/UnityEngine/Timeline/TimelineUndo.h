#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHDESTROYUNDO_OFFSET UNITYSDK_OFFSET(0x1B23B510)
#define UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHUNDO_OFFSET UNITYSDK_OFFSET(0x1B24D920)
#define UNITYENGINE_TIMELINE_TIMELINEUNDO_REGISTERCREATEDOBJECTUNDO_OFFSET UNITYSDK_OFFSET(0x1B24D930)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineUndo_TypeDefinitionIndex = 35945;

	class TimelineUndo : public ::System::Object
	{
	public:
		static ::System::Void PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::Object* a2, ::UnityEngine::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHDESTROYUNDO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PushUndo(::UnityEngine::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHUNDO_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCreatedObjectUndo(::UnityEngine::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_REGISTERCREATEDOBJECTUNDO_OFFSET))(a1, a2);
		}
	};
}
