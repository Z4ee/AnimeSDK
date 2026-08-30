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

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISABLEFILTER_OFFSET UNITYSDK_OFFSET(0x1BCC8410)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCC8780)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENABLEFILTER_OFFSET UNITYSDK_OFFSET(0x1BCC8E20)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENSUREACTIVITYCLEANUPDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BCC8820)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_FLOWACTIVITYIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BCC9630)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVEACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1BCC9600)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVITYDYINGDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BCC9E80)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETFILTERASTUPLE_OFFSET UNITYSDK_OFFSET(0x1BCC9B10)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_PASSESACTIVITYFILTER_OFFSET UNITYSDK_OFFSET(0x1BCC8EF0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_TRIMACTIVEACTIVITYSTORE_OFFSET UNITYSDK_OFFSET(0x1BCC97C0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x1BCC8980)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEKWDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1BCC9980)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC9CA0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityFilter_TypeDefinitionIndex = 1696;

	class ActivityFilter : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Tuple_2<::System::Guid, ::System::Int32>*>* m_rootActiveActivities; // 0x10
		::System::Diagnostics::Tracing::ActivityFilter* m_next; // 0x18
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>* m_activeActivities; // 0x20
		::System::Action_1<::System::Guid>* m_myActivityDelegate; // 0x28
		::System::Guid m_providerGuid; // 0x30
		::System::Int32 m_samplingFreq; // 0x40
		::System::Int32 m_eventId; // 0x44
		::System::Int32 m_perEventSourceSessionId; // 0x48
		::System::Int32 m_curSampleCount; // 0x4C

		::System::Void _ctor(::System::Diagnostics::Tracing::EventSource* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Diagnostics::Tracing::ActivityFilter* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void DisableFilter(::System::Diagnostics::Tracing::ActivityFilter*& a1, ::System::Diagnostics::Tracing::EventSource* a2)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*&, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISABLEFILTER_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateFilter(::System::Diagnostics::Tracing::ActivityFilter*& a1, ::System::Diagnostics::Tracing::EventSource* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*&, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEFILTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PassesActivityFilter(::System::Diagnostics::Tracing::ActivityFilter* a1, ::System::Guid* a2, ::System::Boolean a3, ::System::Diagnostics::Tracing::EventSource* a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::Tracing::ActivityFilter*, ::System::Guid*, ::System::Boolean, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_PASSESACTIVITYFILTER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FlowActivityIfNeeded(::System::Diagnostics::Tracing::ActivityFilter* a1, ::System::Guid* a2, ::System::Guid* a3)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*, ::System::Guid*, ::System::Guid*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_FLOWACTIVITYIFNEEDED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UpdateKwdTriggers(::System::Diagnostics::Tracing::ActivityFilter* a1, ::System::Guid a2, ::System::Diagnostics::Tracing::EventSource* a3, ::System::Diagnostics::Tracing::EventKeywords a4)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*, ::System::Guid, ::System::Diagnostics::Tracing::EventSource*, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_UPDATEKWDTRIGGERS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* GetFilterAsTuple(::System::Guid a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETFILTERASTUPLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_DISPOSE_OFFSET))(this);
		}

		static ::System::Void EnsureActivityCleanupDelegate(::System::Diagnostics::Tracing::ActivityFilter* a1)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENSUREACTIVITYCLEANUPDELEGATE_OFFSET))(a1);
		}

		static ::System::Action_1<::System::Guid>* GetActivityDyingDelegate(::System::Diagnostics::Tracing::ActivityFilter* a1)
		{
			return ((::System::Action_1<::System::Guid>*(*)(::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVITYDYINGDELEGATE_OFFSET))(a1);
		}

		static ::System::Boolean EnableFilter(::System::Diagnostics::Tracing::ActivityFilter*& a1, ::System::Diagnostics::Tracing::EventSource* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::Tracing::ActivityFilter*&, ::System::Diagnostics::Tracing::EventSource*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_ENABLEFILTER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void TrimActiveActivityStore(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_TRIMACTIVEACTIVITYSTORE_OFFSET))(a1);
		}

		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>* GetActiveActivities(::System::Diagnostics::Tracing::ActivityFilter* a1)
		{
			return ((::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Guid, ::System::Int32>*(*)(::System::Diagnostics::Tracing::ActivityFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER_GETACTIVEACTIVITIES_OFFSET))(a1);
		}
	};
}
