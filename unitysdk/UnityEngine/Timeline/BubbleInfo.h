#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_BUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A8E20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BubbleInfo_TypeDefinitionIndex = 32303;

	class BubbleInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::System::String* Key; // 0x20
		::UnityEngine::Vector3 Rotation; // 0x28
		::System::Boolean showArrow; // 0x34
		::UnityEngine::Vector2 ArrowAnchorUGUIPosition; // 0x38
		::System::Single sizeDeltaY; // 0x40
		::System::String* externalKey; // 0x48
		::System::Boolean hideWhenSplitScreen; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEINFO__CTOR_OFFSET))(this);
		}
	};
}
