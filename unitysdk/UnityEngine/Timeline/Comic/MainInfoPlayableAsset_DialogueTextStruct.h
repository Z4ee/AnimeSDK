#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET_DIALOGUETEXTSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F995D40)

namespace UnityEngine::Timeline::Comic
{
	inline static constexpr unsigned int MainInfoPlayableAsset_DialogueTextStruct_TypeDefinitionIndex = 33090;

	class MainInfoPlayableAsset_DialogueTextStruct : public ::System::Object
	{
	public:
		::System::String* _guid; // 0x10
		::System::String* text; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_MAININFOPLAYABLEASSET_DIALOGUETEXTSTRUCT__CTOR_OFFSET))(this);
		}
	};
}
