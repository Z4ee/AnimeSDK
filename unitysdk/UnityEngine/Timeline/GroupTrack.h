#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class CustomGroupTrackDataBase; }

#define UNITYENGINE_TIMELINE_GROUPTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x189AC4D0)
#define UNITYENGINE_TIMELINE_GROUPTRACK_CHECKGROUP_OFFSET UNITYSDK_OFFSET(0x189AC510)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x189AC4E0)
#define UNITYENGINE_TIMELINE_GROUPTRACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x189AC520)
#define UNITYENGINE_TIMELINE_GROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x189AC530)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int GroupTrack_TypeDefinitionIndex = 29880;

	class GroupTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Timeline::CustomGroupTrackDataBase* customData; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_CANCOMPILECLIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Void CheckGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_CHECKGROUP_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_ONDESTROY_OFFSET))(this);
		}
	};
}
