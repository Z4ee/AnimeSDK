#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStreamPlayer; }

#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE_GET_STREAMPLAYER_OFFSET UNITYSDK_OFFSET(0x187A8910)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x187A8930)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE_SET_STREAMPLAYER_OFFSET UNITYSDK_OFFSET(0x187A8920)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x187A8A60)

namespace UnityEngine::Formats::Alembic::Timeline
{
	inline static constexpr unsigned int AlembicShotPlayable_TypeDefinitionIndex = 34918;

	class AlembicShotPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer* _streamPlayer_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer* get_streamPlayer()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE_GET_STREAMPLAYER_OFFSET))(this);
		}

		::System::Void set_streamPlayer(::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE_SET_STREAMPLAYER_OFFSET))(this, value);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTPLAYABLE_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}
	};
}
