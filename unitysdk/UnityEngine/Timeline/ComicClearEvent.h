#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/LogicEventBase.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_COMICCLEAREVENT_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1E5A8F30)
#define UNITYENGINE_TIMELINE_COMICCLEAREVENT_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1E5A8EF0)
#define UNITYENGINE_TIMELINE_COMICCLEAREVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1E5A8EB0)
#define UNITYENGINE_TIMELINE_COMICCLEAREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A8F40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicClearEvent_TypeDefinitionIndex = 32334;

	class ComicClearEvent : public ::UnityEngine::Timeline::LogicEventBase
	{
	public:
		::System::Int32 clearTag; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICCLEAREVENT__CTOR_OFFSET))(this);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICCLEAREVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICCLEAREVENT_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICCLEAREVENT_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
