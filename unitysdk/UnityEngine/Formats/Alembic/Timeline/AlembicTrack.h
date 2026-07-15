#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19E030)

namespace UnityEngine::Formats::Alembic::Timeline
{
	inline static constexpr unsigned int AlembicTrack_TypeDefinitionIndex = 42433;

	class AlembicTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICTRACK__CTOR_OFFSET))(this);
		}
	};
}
