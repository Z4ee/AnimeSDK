#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_ADDIDTOGUID_OFFSET UNITYSDK_OFFSET(0x1869BD80)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CANBEORPHAN_OFFSET UNITYSDK_OFFSET(0x1869B720)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEACTIVITYPATHGUID_OFFSET UNITYSDK_OFFSET(0x1869BB90)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEOVERFLOWGUID_OFFSET UNITYSDK_OFFSET(0x1869BEC0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1869BC40)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_LIVEACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1869B130)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_PATH_OFFSET UNITYSDK_OFFSET(0x1869BC50)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1869BCB0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_WRITENIBBLE_OFFSET UNITYSDK_OFFSET(0x1869BF20)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1869B6B0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityTracker_ActivityInfo_TypeDefinitionIndex = 1664;

	class ActivityTracker_ActivityInfo : public ::System::Object
	{
	public:
		::System::String* m_name; // 0x10
		::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* m_creator; // 0x18
		::System::Int32 m_stopped; // 0x20
		::System::Int32 m_activityPathGuidOffset; // 0x24
		::System::Int64 m_lastChildID; // 0x28
		::System::Guid m_guid; // 0x30
		::System::Int32 m_level; // 0x40
		::System::Int64 m_uniqueId; // 0x48
		::System::Diagnostics::Tracing::EventActivityOptions m_eventOptions; // 0x50
		::System::Guid m_activityIdToRestore; // 0x54

		::System::Void _ctor(::System::String* a1, ::System::Int64 a2, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* a3, ::System::Guid a4, ::System::Diagnostics::Tracing::EventActivityOptions a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*, ::System::Guid, ::System::Diagnostics::Tracing::EventActivityOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Guid get_ActivityId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_GET_ACTIVITYID_OFFSET))(this);
		}

		static ::System::String* Path(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* a1)
		{
			return ((::System::String*(*)(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_PATH_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::String* LiveActivities(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* a1)
		{
			return ((::System::String*(*)(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_LIVEACTIVITIES_OFFSET))(a1);
		}

		::System::Boolean CanBeOrphan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CANBEORPHAN_OFFSET))(this);
		}

		::System::Void CreateActivityPathGuid(::System::Guid& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEACTIVITYPATHGUID_OFFSET))(this, a1, a2);
		}

		::System::Void CreateOverflowGuid(::System::Guid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEOVERFLOWGUID_OFFSET))(this, a1);
		}

		static ::System::Int32 AddIdToGuid(::System::Guid* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::System::Guid*, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_ADDIDTOGUID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void WriteNibble(::System::Byte*& a1, ::System::Byte* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Byte*&, ::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_WRITENIBBLE_OFFSET))(a1, a2, a3);
		}
	};
}
