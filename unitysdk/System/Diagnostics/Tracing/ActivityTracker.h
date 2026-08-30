#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventActivityOptions.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/AsyncLocalValueChangedArgs_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class ActivityTracker_ActivityInfo; }
namespace System::Threading { template <typename T> class AsyncLocal_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYCHANGING_OFFSET UNITYSDK_OFFSET(0x1BCCB200)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ENABLE_OFFSET UNITYSDK_OFFSET(0x1BCCAA10)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_FINDACTIVEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1BCCAC50)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BCCB1D0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_NORMALIZEACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x1BCCAAB0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BCCA480)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1BCCACD0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCCB600)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCB5F0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityTracker_TypeDefinitionIndex = 1674;

	class ActivityTracker : public ::System::Object
	{
	public:
		static ::System::Diagnostics::Tracing::ActivityTracker** StaticGet_s_activityTrackerInstance()
		{
			return (::System::Diagnostics::Tracing::ActivityTracker**)Il2CppClass::FromTypeDefinitionIndex(ActivityTracker_TypeDefinitionIndex)->GetStaticField(0xB550);
		}
		static ::System::Int64* StaticGet_m_nextId()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(ActivityTracker_TypeDefinitionIndex)->GetStaticField(0x26D0);
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

		::System::Void OnStart(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Guid& a4, ::System::Guid& a5, ::System::Diagnostics::Tracing::EventActivityOptions a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Guid&, ::System::Guid&, ::System::Diagnostics::Tracing::EventActivityOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTART_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnStop(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Guid& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ONSTOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ENABLE_OFFSET))(this);
		}

		static ::System::Diagnostics::Tracing::ActivityTracker* get_Instance()
		{
			return ((::System::Diagnostics::Tracing::ActivityTracker*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_GET_INSTANCE_OFFSET))();
		}

		::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* FindActiveActivity(::System::String* a1, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* a2)
		{
			return ((::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_FINDACTIVEACTIVITY_OFFSET))(this, a1, a2);
		}

		::System::String* NormalizeActivityName(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_NORMALIZEACTIVITYNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ActivityChanging(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::AsyncLocalValueChangedArgs_1<::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYTRACKER_ACTIVITYCHANGING_OFFSET))(this, a1);
		}
	};
}
