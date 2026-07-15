#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStreamPlayer; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B19DCC0)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B19DE30)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B19DE00)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_GET_STREAMPLAYER_OFFSET UNITYSDK_OFFSET(0x1B19DCA0)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_SET_STREAMPLAYER_OFFSET UNITYSDK_OFFSET(0x1B19DCB0)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B19DC90)
#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19DEC0)

namespace UnityEngine::Formats::Alembic::Timeline
{
	inline static constexpr unsigned int AlembicShotAsset_TypeDefinitionIndex = 42431;

	class AlembicShotAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer* m_stream; // 0x18
		::UnityEngine::ExposedReference_1<::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*> streamPlayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps UnityEngine_Timeline_ITimelineClipAsset_get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::ExposedReference_1<::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*> get_StreamPlayer()
		{
			return ((::UnityEngine::ExposedReference_1<::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_GET_STREAMPLAYER_OFFSET))(this);
		}

		::System::Void set_StreamPlayer(::UnityEngine::ExposedReference_1<::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ExposedReference_1<::UnityEngine::Formats::Alembic::Importer::AlembicStreamPlayer*>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_SET_STREAMPLAYER_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_GET_DURATION_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICSHOTASSET_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}
	};
}
