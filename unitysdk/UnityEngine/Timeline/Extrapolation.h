#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET UNITYSDK_OFFSET(0x189ABC60)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x189AC290)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x189AC3C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Extrapolation_TypeDefinitionIndex = 29914;

	class Extrapolation : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_kMinExtrapolationTime()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Extrapolation_TypeDefinitionIndex)->GetStaticField(0x10920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION__CCTOR_OFFSET))();
		}

		static ::System::Void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET))(asset);
		}

		static ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* SortClipsByStartTime(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* clips)
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET))(clips);
		}
	};
}
