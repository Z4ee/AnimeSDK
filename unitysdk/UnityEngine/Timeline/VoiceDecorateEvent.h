#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/DecorateEventBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1F9913E0)
#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1F9913A0)
#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1F991360)
#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_ONSPRITECHANGE_OFFSET UNITYSDK_OFFSET(0x1F9911B0)
#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_ONSTARTPOSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F9911A0)
#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_SETSPRITEBYPATH_OFFSET UNITYSDK_OFFSET(0x1F991350)
#define UNITYENGINE_TIMELINE_VOICEDECORATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9913F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int VoiceDecorateEvent_TypeDefinitionIndex = 32960;

	class VoiceDecorateEvent : public ::UnityEngine::Timeline::DecorateEventBase
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x58
		::UnityEngine::Vector2 sizeDelta; // 0x60
		::System::Boolean useFadeInAnim; // 0x68
		::System::Single fadeInAnimLength; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStartPosChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_ONSTARTPOSCHANGE_OFFSET))(this);
		}

		::System::Void OnSpriteChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_ONSPRITECHANGE_OFFSET))(this);
		}

		::System::Void SetSpriteByPath(::System::String* relativePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_SETSPRITEBYPATH_OFFSET))(this, relativePath);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_VOICEDECORATEEVENT_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
