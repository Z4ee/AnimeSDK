#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"
#include "unitysdk/UnityEngine/Timeline/TimeFieldAttribute_UseEditMode.h"

#define UNITYENGINE_TIMELINE_TIMEFIELDATTRIBUTE_GET_USEEDITMODE_OFFSET UNITYSDK_OFFSET(0x1B240FD0)
#define UNITYENGINE_TIMELINE_TIMEFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B240FE0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeFieldAttribute_TypeDefinitionIndex = 35925;

	class TimeFieldAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode _useEditMode_k__BackingField; // 0x10

		::System::Void _ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEFIELDATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode get_useEditMode()
		{
			return ((::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEFIELDATTRIBUTE_GET_USEEDITMODE_OFFSET))(this);
		}
	};
}
