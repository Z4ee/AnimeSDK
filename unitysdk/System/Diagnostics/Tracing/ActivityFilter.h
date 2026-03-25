#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Diagnostics::Tracing { class EventSource; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISABLEFILTER_OFFSET UNITYSDK_OFFSET(0x162B3D70)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162B3FB0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENABLEFILTER_OFFSET UNITYSDK_OFFSET(0x162B46C0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENSUREACTIVITYCLEANUPDELEGATE_OFFSET UNITYSDK_OFFSET(0x162B4080)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_FLOWACTIVITYIFNEEDED_OFFSET UNITYSDK_OFFSET(0x162B4EF0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVEACTIVITIES_OFFSET UNITYSDK_OFFSET(0x162B4EC0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVITYDYINGDELEGATE_OFFSET UNITYSDK_OFFSET(0x162B5790)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETFILTERASTUPLE_OFFSET UNITYSDK_OFFSET(0x162B53F0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_PASSESACTIVITYFILTER_OFFSET UNITYSDK_OFFSET(0x162B47A0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_TRIMACTIVEACTIVITYSTORE_OFFSET UNITYSDK_OFFSET(0x162B5080)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x162B41E0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEKWDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x162B5240)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x162B55A0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityFilter_TypeDefinitionIndex = 1686;

	class ActivityFilter : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>* m_activeActivities; // 0x10
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Tuple_2<::System::Guid, ::System::Int32>*>* m_rootActiveActivities; // 0x18
		::System::Action_1<::System::Guid>* m_myActivityDelegate; // 0x20
		::System::Diagnostics::Tracing::ActivityFilter* m_next; // 0x28
		::System::Guid m_providerGuid; // 0x30
		::System::Int32 m_perEventSourceSessionId; // 0x40
		::System::Int32 m_samplingFreq; // 0x44
		::System::Int32 m_eventId; // 0x48
		::System::Int32 m_curSampleCount; // 0x4C

		::System::Void _ctor(::System::Diagnostics::Tracing::EventSource* source, ::System::Int32 perEventSourceSessionId, ::System::Int32 eventId, ::System::Int32 samplingFreq, ::System::Diagnostics::Tracing::ActivityFilter* existingFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__CTOR_OFFSET))(this, source, perEventSourceSessionId, eventId, samplingFreq, existingFilter);
		}

		static ::System::Void DisableFilter(::System::Diagnostics::Tracing::ActivityFilter*& filterList, ::System::Diagnostics::Tracing::EventSource* source)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*&, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISABLEFILTER_OFFSET))(filterList, source);
		}

		static ::System::Void UpdateFilter(::System::Diagnostics::Tracing::ActivityFilter*& filterList, ::System::Diagnostics::Tracing::EventSource* source, ::System::Int32 perEventSourceSessionId, ::System::String* startEvents)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*&, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEFILTER_OFFSET))(filterList, source, perEventSourceSessionId, startEvents);
		}

		static ::System::Boolean PassesActivityFilter(::System::Diagnostics::Tracing::ActivityFilter* filterList, ::System::Guid* childActivityID, ::System::Boolean triggeringEvent, ::System::Diagnostics::Tracing::EventSource* source, ::System::Int32 eventId)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::Tracing::ActivityFilter*, ::System::Guid*, ::System::Boolean, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_PASSESACTIVITYFILTER_OFFSET))(filterList, childActivityID, triggeringEvent, source, eventId);
		}

		static ::System::Void FlowActivityIfNeeded(::System::Diagnostics::Tracing::ActivityFilter* filterList, ::System::Guid* currentActivityId, ::System::Guid* childActivityID)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*, ::System::Guid*, ::System::Guid*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_FLOWACTIVITYIFNEEDED_OFFSET))(filterList, currentActivityId, childActivityID);
		}

		static ::System::Void UpdateKwdTriggers(::System::Diagnostics::Tracing::ActivityFilter* activityFilter, ::System::Guid sourceGuid, ::System::Diagnostics::Tracing::EventSource* source, ::System::Diagnostics::Tracing::EventKeywords sessKeywords)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*, ::System::Guid, ::System::Diagnostics::Tracing::EventSource*, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEKWDTRIGGERS_OFFSET))(activityFilter, sourceGuid, source, sessKeywords);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* GetFilterAsTuple(::System::Guid sourceGuid)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETFILTERASTUPLE_OFFSET))(this, sourceGuid);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISPOSE_OFFSET))(this);
		}

		static ::System::Void EnsureActivityCleanupDelegate(::System::Diagnostics::Tracing::ActivityFilter* filterList)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENSUREACTIVITYCLEANUPDELEGATE_OFFSET))(filterList);
		}

		static ::System::Action_1<::System::Guid>* GetActivityDyingDelegate(::System::Diagnostics::Tracing::ActivityFilter* filterList)
		{
			return ((::System::Action_1<::System::Guid>*(*)(::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVITYDYINGDELEGATE_OFFSET))(filterList);
		}

		static ::System::Boolean EnableFilter(::System::Diagnostics::Tracing::ActivityFilter*& filterList, ::System::Diagnostics::Tracing::EventSource* source, ::System::Int32 perEventSourceSessionId, ::System::Int32 eventId, ::System::Int32 samplingFreq)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::Tracing::ActivityFilter*&, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENABLEFILTER_OFFSET))(filterList, source, perEventSourceSessionId, eventId, samplingFreq);
		}

		static ::System::Void TrimActiveActivityStore(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>* activities)
		{
			return ((::System::Void(*)(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_TRIMACTIVEACTIVITYSTORE_OFFSET))(activities);
		}

		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>* GetActiveActivities(::System::Diagnostics::Tracing::ActivityFilter* filterList)
		{
			return ((::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>*(*)(::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVEACTIVITIES_OFFSET))(filterList);
		}
	};
}
