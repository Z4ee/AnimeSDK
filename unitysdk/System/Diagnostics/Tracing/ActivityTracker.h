#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/AsyncLocalValueChangedArgs_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class ActivityTracker_ActivityInfo; }
namespace System::Threading { template <typename T> class AsyncLocal_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYCHANGING_OFFSET UNITYSDK_OFFSET(0x162B6AB0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ENABLE_OFFSET UNITYSDK_OFFSET(0x162B62D0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_FINDACTIVEACTIVITY_OFFSET UNITYSDK_OFFSET(0x162B64F0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x162B6A80)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_NORMALIZEACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x162B6350)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTART_OFFSET UNITYSDK_OFFSET(0x162B5D50)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTOP_OFFSET UNITYSDK_OFFSET(0x162B6570)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162B6EA0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x162B6E90)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityTracker_TypeDefinitionIndex = 1664;

	class ActivityTracker : public ::System::Object
	{
	public:
		static ::System::Diagnostics::Tracing::ActivityTracker** StaticGet_s_activityTrackerInstance()
		{
			return (::System::Diagnostics::Tracing::ActivityTracker**)Il2CppClass::FromTypeDefinitionIndex(ActivityTracker_TypeDefinitionIndex)->GetStaticField(0x4B20);
		}
		static ::System::Int64* StaticGet_m_nextId()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(ActivityTracker_TypeDefinitionIndex)->GetStaticField(0x2810);
		}
		::System::Threading::AsyncLocal_1<::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*>* m_current; // 0x10
		::System::Boolean m_checkedForEnable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER__CCTOR_OFFSET))();
		}

		::System::Void OnStart(::System::String* providerName, ::System::String* activityName, ::System::Int32 task, ::System::Guid& activityId, ::System::Guid& relatedActivityId, ::System::Diagnostics::Tracing::EventActivityOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Guid&, ::System::Guid&, ::System::Diagnostics::Tracing::EventActivityOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTART_OFFSET))(this, providerName, activityName, task, activityId, relatedActivityId, options);
		}

		::System::Void OnStop(::System::String* providerName, ::System::String* activityName, ::System::Int32 task, ::System::Guid& activityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTOP_OFFSET))(this, providerName, activityName, task, activityId);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ENABLE_OFFSET))(this);
		}

		static ::System::Diagnostics::Tracing::ActivityTracker* get_Instance()
		{
			return ((::System::Diagnostics::Tracing::ActivityTracker*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_GET_INSTANCE_OFFSET))();
		}

		::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* FindActiveActivity(::System::String* name, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* startLocation)
		{
			return ((::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_FINDACTIVEACTIVITY_OFFSET))(this, name, startLocation);
		}

		::System::String* NormalizeActivityName(::System::String* providerName, ::System::String* activityName, ::System::Int32 task)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_NORMALIZEACTIVITYNAME_OFFSET))(this, providerName, activityName, task);
		}

		::System::Void ActivityChanging(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*> args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::AsyncLocalValueChangedArgs_1<::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYCHANGING_OFFSET))(this, args);
		}
	};
}
