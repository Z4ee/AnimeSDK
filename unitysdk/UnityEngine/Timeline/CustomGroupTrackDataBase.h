#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define UNITYENGINE_TIMELINE_CUSTOMGROUPTRACKDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x189AA620)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CustomGroupTrackDataBase_TypeDefinitionIndex = 29881;

	class CustomGroupTrackDataBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUSTOMGROUPTRACKDATABASE__CTOR_OFFSET))(this);
		}
	};
}
