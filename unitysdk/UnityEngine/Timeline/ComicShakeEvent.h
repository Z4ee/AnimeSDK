#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/UnityEngine/Timeline/LogicEventBase.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_COMICSHAKEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB20D60)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicShakeEvent_TypeDefinitionIndex = 32966;

	class ComicShakeEvent : public ::UnityEngine::Timeline::LogicEventBase
	{
	public:
		::MoleMole::ComicImgPart shakePart; // 0x48
		::System::String* shakeKey; // 0x50
		::System::String* voiceKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICSHAKEEVENT__CTOR_OFFSET))(this);
		}
	};
}
