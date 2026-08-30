#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET UNITYSDK_OFFSET(0x1ECC34A0)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1ECC39E0)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECC3B80)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Extrapolation_TypeDefinitionIndex = 37575;

	class Extrapolation : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_kMinExtrapolationTime()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Extrapolation_TypeDefinitionIndex)->GetStaticField(0x115E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION__CCTOR_OFFSET))();
		}

		static ::System::Void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* SortClipsByStartTime(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET))(a1);
		}
	};
}
