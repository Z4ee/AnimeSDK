#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS.h"
#include "unitysdk/System/Diagnostics/Tracing/ControllerCommand.h"
#include "unitysdk/System/Diagnostics/Tracing/EventDescriptor.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider_EventData.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider_SessionInfo.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider_WriteEventErrorCode.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace Microsoft::Win32 { class UnsafeNativeMethods_ManifestEtw_EtwEnableCallback; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x178EA820)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITINDEX_OFFSET UNITYSDK_OFFSET(0x178EA900)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DEREGISTER_OFFSET UNITYSDK_OFFSET(0x178E9140)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x178E8F90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178E8F40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ENCODEOBJECT_OFFSET UNITYSDK_OFFSET(0x178EAA70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACKIMPL_OFFSET UNITYSDK_OFFSET(0x178E9320)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x178E8B30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_EVENTUNREGISTER_OFFSET UNITYSDK_OFFSET(0x178E9290)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x178E9220)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINDNULL_OFFSET UNITYSDK_OFFSET(0x178EA130)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETDATAFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x178EA0A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETLASTWRITEEVENTERROR_OFFSET UNITYSDK_OFFSET(0x178EA980)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFOCALLBACK_OFFSET UNITYSDK_OFFSET(0x178EA670)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFO_OFFSET UNITYSDK_OFFSET(0x178EA1E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONS_OFFSET UNITYSDK_OFFSET(0x178E9C00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x178EA1B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_MATCHANYKEYWORD_OFFSET UNITYSDK_OFFSET(0x178EA1C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_INDEXOFSESSIONINLIST_OFFSET UNITYSDK_OFFSET(0x178EA630)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_1_OFFSET UNITYSDK_OFFSET(0x178EA950)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x178EA940)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ONCONTROLLERCOMMAND_OFFSET UNITYSDK_OFFSET(0x178EA1A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_REGISTER_OFFSET UNITYSDK_OFFSET(0x178E8C20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETINFORMATION_OFFSET UNITYSDK_OFFSET(0x178E8DE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETLASTERROR_OFFSET UNITYSDK_OFFSET(0x178EA9E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENTRAW_OFFSET UNITYSDK_OFFSET(0x178EC600)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x178EC3F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x178EB4C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x178EC810)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8C10)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider_TypeDefinitionIndex = 1672;

	class EventProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_nibblebits()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EventProvider_TypeDefinitionIndex)->GetStaticField(0x5E70);
		}
		static ::System::Boolean* StaticGet_m_setInformationMissing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventProvider_TypeDefinitionIndex)->GetStaticField(0x2E00);
		}
		static ::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode* StaticGet_s_returnCode()
		{
			return (::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode*)Il2CppClass::FromTypeDefinitionIndex(EventProvider_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>* m_liveSessions; // 0x10
		::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* m_etwCallback; // 0x18
		::System::Int64 m_allKeywordMask; // 0x20
		::System::Boolean m_disposed; // 0x28
		::System::Boolean m_enabled; // 0x29
		::System::Byte m_level; // 0x2A
		::System::Int64 m_anyKeywordMask; // 0x30
		::System::Int64 m_regHandle; // 0x38
		::System::Runtime::InteropServices::GCHandle m_thisGCHandle; // 0x40
		::System::Guid m_providerId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void Register(::System::Guid providerGuid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_REGISTER_OFFSET))(this, providerGuid);
		}

		::System::Int32 SetInformation(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS eventInfoClass, ::System::Void* data, ::System::Int32 dataSize)
		{
			return ((::System::Int32(*)(::PVOID, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETINFORMATION_OFFSET))(this, eventInfoClass, data, dataSize);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void Deregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DEREGISTER_OFFSET))(this);
		}

		static ::System::Void EtwEnableCallBack(::System::Guid& sourceId, ::System::Int32 controlCode, ::System::Byte setLevel, ::System::Int64 anyKeyword, ::System::Int64 allKeyword, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, ::System::Void* callbackContext)
		{
			return ((::System::Void(*)(::System::Guid&, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Void*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACK_OFFSET))(sourceId, controlCode, setLevel, anyKeyword, allKeyword, filterData, callbackContext);
		}

		::System::Void EtwEnableCallBackImpl(::System::Int32 controlCode, ::System::Byte setLevel, ::System::Int64 anyKeyword, ::System::Int64 allKeyword, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACKIMPL_OFFSET))(this, controlCode, setLevel, anyKeyword, allKeyword, filterData);
		}

		::System::Void OnControllerCommand(::System::Diagnostics::Tracing::ControllerCommand command, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* arguments, ::System::Int32 sessionId, ::System::Int32 etwSessionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::ControllerCommand, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ONCONTROLLERCOMMAND_OFFSET))(this, command, arguments, sessionId, etwSessionId);
		}

		::System::Diagnostics::Tracing::EventLevel get_Level()
		{
			return ((::System::Diagnostics::Tracing::EventLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_LEVEL_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventKeywords get_MatchAnyKeyword()
		{
			return ((::System::Diagnostics::Tracing::EventKeywords(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_MATCHANYKEYWORD_OFFSET))(this);
		}

		static ::System::Int32 FindNull(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINDNULL_OFFSET))(buffer, idx);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Diagnostics::Tracing::EventProvider_SessionInfo, ::System::Boolean>*>* GetSessions()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::Diagnostics::Tracing::EventProvider_SessionInfo, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONS_OFFSET))(this);
		}

		static ::System::Void GetSessionInfoCallback(::System::Int32 etwSessionId, ::System::Int64 matchAllKeywords, ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>*& sessionList)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFOCALLBACK_OFFSET))(etwSessionId, matchAllKeywords, sessionList);
		}

		::System::Void GetSessionInfo(::System::Action_2<::System::Int32, ::System::Int64>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFO_OFFSET))(this, action);
		}

		static ::System::Int32 IndexOfSessionInList(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>* sessions, ::System::Int32 etwSessionId)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_INDEXOFSESSIONINLIST_OFFSET))(sessions, etwSessionId);
		}

		::System::Boolean GetDataFromController(::System::Int32 etwSessionId, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, ::System::Diagnostics::Tracing::ControllerCommand& command, ::Il2CppArray<::System::Byte>*& data, ::System::Int32& dataStart)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Diagnostics::Tracing::ControllerCommand&, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETDATAFROMCONTROLLER_OFFSET))(this, etwSessionId, filterData, command, data, dataStart);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_OFFSET))(this);
		}

		::System::Boolean IsEnabled_1(::System::Byte level, ::System::Int64 keywords)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_1_OFFSET))(this, level, keywords);
		}

		static ::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode GetLastWriteEventError()
		{
			return ((::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETLASTWRITEEVENTERROR_OFFSET))();
		}

		static ::System::Void SetLastError(::System::Int32 error)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETLASTERROR_OFFSET))(error);
		}

		static ::System::Object* EncodeObject(::System::Object*& data, ::System::Diagnostics::Tracing::EventProvider_EventData*& dataDescriptor, ::System::Byte*& dataBuffer, ::System::UInt32& totalEventSize)
		{
			return ((::System::Object*(*)(::System::Object*&, ::System::Diagnostics::Tracing::EventProvider_EventData*&, ::System::Byte*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ENCODEOBJECT_OFFSET))(data, dataDescriptor, dataBuffer, totalEventSize);
		}

		::System::Boolean WriteEvent(::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, ::System::Guid* activityID, ::System::Guid* childActivityID, ::Il2CppArray<::System::Object*>* eventPayload)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_OFFSET))(this, eventDescriptor, activityID, childActivityID, eventPayload);
		}

		::System::Boolean WriteEvent_1(::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, ::System::Guid* activityID, ::System::Guid* childActivityID, ::System::Int32 dataCount, ::System::IntPtr data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_1_OFFSET))(this, eventDescriptor, activityID, childActivityID, dataCount, data);
		}

		::System::Boolean WriteEventRaw(::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, ::System::Guid* activityID, ::System::Guid* relatedActivityID, ::System::Int32 dataCount, ::System::IntPtr data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENTRAW_OFFSET))(this, eventDescriptor, activityID, relatedActivityID, dataCount, data);
		}

		::System::UInt32 EventUnregister()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_EVENTUNREGISTER_OFFSET))(this);
		}

		static ::System::Int32 bitcount(::System::UInt32 n)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITCOUNT_OFFSET))(n);
		}

		static ::System::Int32 bitindex(::System::UInt32 n)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITINDEX_OFFSET))(n);
		}
	};
}
