#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_TIMELINE_GROUPTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1E3DCEB0)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_HASCHILDCLIPS_OFFSET UNITYSDK_OFFSET(0x1E3DD850)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1E3DCEC0)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_REALDURATION_OFFSET UNITYSDK_OFFSET(0x1E3DCF20)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_REALEND_OFFSET UNITYSDK_OFFSET(0x1E3DD480)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_REALSTART_OFFSET UNITYSDK_OFFSET(0x1E3DCFB0)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_SHOTACTIVESTART_OFFSET UNITYSDK_OFFSET(0x1E3DDC10)
#define UNITYENGINE_TIMELINE_GROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DE1B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int GroupTrack_TypeDefinitionIndex = 32382;

	class GroupTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
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

		::System::Double get_RealDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_REALDURATION_OFFSET))(this);
		}

		::System::Double get_RealStart()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_REALSTART_OFFSET))(this);
		}

		::System::Double get_RealEnd()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_REALEND_OFFSET))(this);
		}

		::System::Boolean get_HasChildClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_HASCHILDCLIPS_OFFSET))(this);
		}

		::System::Double get_ShotActiveStart()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_SHOTACTIVESTART_OFFSET))(this);
		}
	};
}
