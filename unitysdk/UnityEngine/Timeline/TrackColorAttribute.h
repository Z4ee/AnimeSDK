#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A3FEC70)
#define UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FEC80)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackColorAttribute_TypeDefinitionIndex = 35564;

	class TrackColorAttribute : public ::System::Attribute
	{
	public:
		::UnityEngine::Color m_Color; // 0x10

		::System::Void _ctor(::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE__CTOR_OFFSET))(this, r, g, b);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE_GET_COLOR_OFFSET))(this);
		}
	};
}
