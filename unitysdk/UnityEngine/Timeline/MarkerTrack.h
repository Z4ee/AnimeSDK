#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1ECC51F0)
#define UNITYENGINE_TIMELINE_MARKERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC5560)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerTrack_TypeDefinitionIndex = 37533;

	class MarkerTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET))(this);
		}
	};
}
