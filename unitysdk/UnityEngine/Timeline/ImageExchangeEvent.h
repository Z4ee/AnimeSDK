#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/DecorateEventBase.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1E867100)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1E8670C0)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1E867080)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_ONSPRITECHANGE_OFFSET UNITYSDK_OFFSET(0x1E867050)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_SETSPRITEBYPATH_OFFSET UNITYSDK_OFFSET(0x1E867070)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_SHOWANIMINFO_OFFSET UNITYSDK_OFFSET(0x1E867060)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E867110)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImageExchangeEvent_TypeDefinitionIndex = 32326;

	class ImageExchangeEvent : public ::UnityEngine::Timeline::DecorateEventBase
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x58
		::System::Single animDuration; // 0x60
		::UnityEngine::Sprite* femaleSprite; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnSpriteChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_ONSPRITECHANGE_OFFSET))(this);
		}

		::System::Boolean ShowAnimInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_SHOWANIMINFO_OFFSET))(this);
		}

		::System::Void SetSpriteByPath(::System::String* relativePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_SETSPRITEBYPATH_OFFSET))(this, relativePath);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENT_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
