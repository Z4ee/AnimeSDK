#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/DecorateEventBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Comic { class IComicAnim; }
namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1F8B8CA0)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETANIMINFO_OFFSET UNITYSDK_OFFSET(0x1F8B8A50)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1F8B8C60)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1F8B8C20)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETSIZE_OFFSET UNITYSDK_OFFSET(0x1F8B8780)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x1F8B8760)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_ONSPRITECHANGE_OFFSET UNITYSDK_OFFSET(0x1F8B8A70)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_SETSPRITEBYPATH_OFFSET UNITYSDK_OFFSET(0x1F8B8C10)
#define UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B8CB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PictureDecorateEvent_TypeDefinitionIndex = 32959;

	class PictureDecorateEvent : public ::UnityEngine::Timeline::DecorateEventBase
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x58
		::UnityEngine::Vector2 sizeDelta; // 0x60
		::System::Boolean useFadeInAnim; // 0x68
		::System::Single fadeInAnimLength; // 0x6C
		::UnityEngine::Timeline::PictureDecorateEvent* femalePart; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Sprite* GetSprite(::System::Boolean isMale)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETSPRITE_OFFSET))(this, isMale);
		}

		::UnityEngine::Vector2 GetSize(::System::Boolean isMale)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETSIZE_OFFSET))(this, isMale);
		}

		::MoleMole::Comic::IComicAnim* GetAnimInfo(::System::Boolean isMale)
		{
			return ((::MoleMole::Comic::IComicAnim*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETANIMINFO_OFFSET))(this, isMale);
		}

		::System::Void OnSpriteChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_ONSPRITECHANGE_OFFSET))(this);
		}

		::System::Void SetSpriteByPath(::System::String* relativePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_SETSPRITEBYPATH_OFFSET))(this, relativePath);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PICTUREDECORATEEVENT_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
