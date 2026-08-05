#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ATTRRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B7590)

namespace UnityEngine::Timeline::CutScene::ArrayLightSystem
{
	inline static constexpr unsigned int AttrRandomConfig_TypeDefinitionIndex = 33086;

	class AttrRandomConfig : public ::System::Object
	{
	public:
		::System::String* attrName; // 0x10
		::System::Boolean isRandom; // 0x18
		::System::Single randomFactor; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ATTRRANDOMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
