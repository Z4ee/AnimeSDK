#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_ADDIDTOGUID_OFFSET UNITYSDK_OFFSET(0x162B7100)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CANBEORPHAN_OFFSET UNITYSDK_OFFSET(0x162B6A70)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEACTIVITYPATHGUID_OFFSET UNITYSDK_OFFSET(0x162B6ED0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEOVERFLOWGUID_OFFSET UNITYSDK_OFFSET(0x162B7240)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x162B6F80)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_LIVEACTIVITIES_OFFSET UNITYSDK_OFFSET(0x162B6480)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_PATH_OFFSET UNITYSDK_OFFSET(0x162B6F90)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162B6FF0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_WRITENIBBLE_OFFSET UNITYSDK_OFFSET(0x162B72A0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162B6A00)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityTracker_ActivityInfo_TypeDefinitionIndex = 1665;

	class ActivityTracker_ActivityInfo : public ::System::Object
	{
	public:
		::System::String* m_name; // 0x10
		::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* m_creator; // 0x18
		::System::Diagnostics::Tracing::EventActivityOptions m_eventOptions; // 0x20
		::System::Int32 m_level; // 0x24
		::System::Int64 m_uniqueId; // 0x28
		::System::Guid m_activityIdToRestore; // 0x30
		::System::Int32 m_stopped; // 0x40
		::System::Int64 m_lastChildID; // 0x48
		::System::Guid m_guid; // 0x50
		::System::Int32 m_activityPathGuidOffset; // 0x60

		::System::Void _ctor(::System::String* name, ::System::Int64 uniqueId, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* creator, ::System::Guid activityIDToRestore, ::System::Diagnostics::Tracing::EventActivityOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*, ::System::Guid, ::System::Diagnostics::Tracing::EventActivityOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO__CTOR_OFFSET))(this, name, uniqueId, creator, activityIDToRestore, options);
		}

		::System::Guid get_ActivityId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_GET_ACTIVITYID_OFFSET))(this);
		}

		static ::System::String* Path(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* activityInfo)
		{
			return ((::System::String*(*)(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_PATH_OFFSET))(activityInfo);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::String* LiveActivities(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* list)
		{
			return ((::System::String*(*)(::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_LIVEACTIVITIES_OFFSET))(list);
		}

		::System::Boolean CanBeOrphan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CANBEORPHAN_OFFSET))(this);
		}

		::System::Void CreateActivityPathGuid(::System::Guid& idRet, ::System::Int32& activityPathGuidOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEACTIVITYPATHGUID_OFFSET))(this, idRet, activityPathGuidOffset);
		}

		::System::Void CreateOverflowGuid(::System::Guid* outPtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_CREATEOVERFLOWGUID_OFFSET))(this, outPtr);
		}

		static ::System::Int32 AddIdToGuid(::System::Guid* outPtr, ::System::Int32 whereToAddId, ::System::UInt32 id, ::System::Boolean overflow)
		{
			return ((::System::Int32(*)(::System::Guid*, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_ADDIDTOGUID_OFFSET))(outPtr, whereToAddId, id, overflow);
		}

		static ::System::Void WriteNibble(::System::Byte*& ptr, ::System::Byte* endPtr, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::Byte*&, ::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYINFO_WRITENIBBLE_OFFSET))(ptr, endPtr, value);
		}
	};
}
