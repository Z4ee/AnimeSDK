#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_PROTECTTIMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AC9C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ProtectTimeInfo_TypeDefinitionIndex = 33059;

	class ProtectTimeInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROTECTTIMEINFO__CTOR_OFFSET))(this);
		}
	};
}
