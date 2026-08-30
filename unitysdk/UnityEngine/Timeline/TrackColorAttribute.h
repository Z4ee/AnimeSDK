#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1BF82D70)
#define UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF82D80)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackColorAttribute_TypeDefinitionIndex = 37505;

	class TrackColorAttribute : public ::System::Attribute
	{
	public:
		::UnityEngine::Color m_Color; // 0x10

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE_GET_COLOR_OFFSET))(this);
		}
	};
}
