#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ComicEventBase.h"

namespace MoleMole::Comic { class IComicAnim; }
namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_DECORATEEVENTBASE_CREATEONEDECORATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1DD0A290)
#define UNITYENGINE_TIMELINE_DECORATEEVENTBASE_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x1DD0A170)
#define UNITYENGINE_TIMELINE_DECORATEEVENTBASE_SHOWANIMINFO_OFFSET UNITYSDK_OFFSET(0x1DD0A7A0)
#define UNITYENGINE_TIMELINE_DECORATEEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0A7B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int DecorateEventBase_TypeDefinitionIndex = 32325;

	class DecorateEventBase : public ::UnityEngine::Timeline::ComicEventBase
	{
	public:
		// static const ::System::Char DECORATION_MAIN_SPLIT_KEY; // 0x0
		// static const ::System::Char DECORATION_PREFIX_SPLIT_KEY; // 0x0
		// static const ::System::String* ERROR_STR_TITLE; // 0x0
		::System::Boolean isPreLoad; // 0x40
		::System::Single _previewProgress; // 0x44
		::System::Boolean MoveWhenSplitScreen; // 0x48
		::System::Boolean HideWhenSplitScreen; // 0x49
		::System::Int32 HideWhenSplitScreenIndex; // 0x4C
		::MoleMole::Comic::IComicAnim* animInfo; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DECORATEEVENTBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* resName)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DECORATEEVENTBASE_LOADSPRITE_OFFSET))(this, resName);
		}

		static ::UnityEngine::Timeline::DecorateEventBase* CreateOneDecorationEvent(::System::String* key)
		{
			return ((::UnityEngine::Timeline::DecorateEventBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DECORATEEVENTBASE_CREATEONEDECORATIONEVENT_OFFSET))(key);
		}

		::System::Boolean ShowAnimInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DECORATEEVENTBASE_SHOWANIMINFO_OFFSET))(this);
		}
	};
}
