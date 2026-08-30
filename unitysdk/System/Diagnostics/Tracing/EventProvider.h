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

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCD3340)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITINDEX_OFFSET UNITYSDK_OFFSET(0x1BCD3420)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DEREGISTER_OFFSET UNITYSDK_OFFSET(0x1BCD1890)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BCD16E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCD1600)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ENCODEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BCD3590)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACKIMPL_OFFSET UNITYSDK_OFFSET(0x1BCD1AD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BCD11B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_EVENTUNREGISTER_OFFSET UNITYSDK_OFFSET(0x1BCD1A40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BCD1970)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINDNULL_OFFSET UNITYSDK_OFFSET(0x1BCD2B40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETDATAFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1BCD2AB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETLASTWRITEEVENTERROR_OFFSET UNITYSDK_OFFSET(0x1BCD34A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BCD30B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFO_OFFSET UNITYSDK_OFFSET(0x1BCD2BF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONS_OFFSET UNITYSDK_OFFSET(0x1BCD2500)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BCD2BC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_MATCHANYKEYWORD_OFFSET UNITYSDK_OFFSET(0x1BCD2BD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_INDEXOFSESSIONINLIST_OFFSET UNITYSDK_OFFSET(0x1BCD3050)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_1_OFFSET UNITYSDK_OFFSET(0x1BCD3470)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1BCD3460)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ONCONTROLLERCOMMAND_OFFSET UNITYSDK_OFFSET(0x1BCD2BB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BCD12B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1BCD1490)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETLASTERROR_OFFSET UNITYSDK_OFFSET(0x1BCD3500)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENTRAW_OFFSET UNITYSDK_OFFSET(0x1BCD5590)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1BCD5380)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x1BCD4180)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCD57A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD12A0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider_TypeDefinitionIndex = 1681;

	class EventProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_nibblebits()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EventProvider_TypeDefinitionIndex)->GetStaticField(0xBBD0);
		}
		static ::System::Boolean* StaticGet_m_setInformationMissing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventProvider_TypeDefinitionIndex)->GetStaticField(0x2800);
		}
		static ::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode* StaticGet_s_returnCode()
		{
			return (::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode*)Il2CppClass::FromTypeDefinitionIndex(EventProvider_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>* m_liveSessions; // 0x10
		::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* m_etwCallback; // 0x18
		::System::Int64 m_regHandle; // 0x20
		::System::Int64 m_anyKeywordMask; // 0x28
		::System::Guid m_providerId; // 0x30
		::System::Int64 m_allKeywordMask; // 0x40
		::System::Runtime::InteropServices::GCHandle m_thisGCHandle; // 0x48
		::System::Boolean m_disposed; // 0x4C
		::System::Byte m_level; // 0x4D
		::System::Boolean m_enabled; // 0x4E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void Register(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_REGISTER_OFFSET))(this, a1);
		}

		::System::Int32 SetInformation(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS a1, ::System::Void* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETINFORMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void Deregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_DEREGISTER_OFFSET))(this);
		}

		static ::System::Void EtwEnableCallBack(::System::Guid& a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int64 a4, ::System::Int64 a5, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* a6, ::System::Void* a7)
		{
			return ((::System::Void(*)(::System::Guid&, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Void*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACK_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EtwEnableCallBackImpl(::System::Int32 a1, ::System::Byte a2, ::System::Int64 a3, ::System::Int64 a4, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ETWENABLECALLBACKIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnControllerCommand(::System::Diagnostics::Tracing::ControllerCommand a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::ControllerCommand, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ONCONTROLLERCOMMAND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Diagnostics::Tracing::EventLevel get_Level()
		{
			return ((::System::Diagnostics::Tracing::EventLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_LEVEL_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventKeywords get_MatchAnyKeyword()
		{
			return ((::System::Diagnostics::Tracing::EventKeywords(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GET_MATCHANYKEYWORD_OFFSET))(this);
		}

		static ::System::Int32 FindNull(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_FINDNULL_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Diagnostics::Tracing::EventProvider_SessionInfo, ::System::Boolean>*>* GetSessions()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::Diagnostics::Tracing::EventProvider_SessionInfo, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONS_OFFSET))(this);
		}

		static ::System::Void GetSessionInfoCallback(::System::Int32 a1, ::System::Int64 a2, ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>*& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFOCALLBACK_OFFSET))(a1, a2, a3);
		}

		::System::Void GetSessionInfo(::System::Action_2<::System::Int32, ::System::Int64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETSESSIONINFO_OFFSET))(this, a1);
		}

		static ::System::Int32 IndexOfSessionInList(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EventProvider_SessionInfo>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_INDEXOFSESSIONINLIST_OFFSET))(a1, a2);
		}

		::System::Boolean GetDataFromController(::System::Int32 a1, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* a2, ::System::Diagnostics::Tracing::ControllerCommand& a3, ::Il2CppArray<::System::Byte>*& a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Diagnostics::Tracing::ControllerCommand&, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETDATAFROMCONTROLLER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_OFFSET))(this);
		}

		::System::Boolean IsEnabled_1(::System::Byte a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ISENABLED_1_OFFSET))(this, a1, a2);
		}

		static ::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode GetLastWriteEventError()
		{
			return ((::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_GETLASTWRITEEVENTERROR_OFFSET))();
		}

		static ::System::Void SetLastError(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SETLASTERROR_OFFSET))(a1);
		}

		static ::System::Object* EncodeObject(::System::Object*& a1, ::System::Diagnostics::Tracing::EventProvider_EventData*& a2, ::System::Byte*& a3, ::System::UInt32& a4)
		{
			return ((::System::Object*(*)(::System::Object*&, ::System::Diagnostics::Tracing::EventProvider_EventData*&, ::System::Byte*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_ENCODEOBJECT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean WriteEvent(::System::Diagnostics::Tracing::EventDescriptor& a1, ::System::Guid* a2, ::System::Guid* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean WriteEvent_1(::System::Diagnostics::Tracing::EventDescriptor& a1, ::System::Guid* a2, ::System::Guid* a3, ::System::Int32 a4, ::System::IntPtr a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean WriteEventRaw(::System::Diagnostics::Tracing::EventDescriptor& a1, ::System::Guid* a2, ::System::Guid* a3, ::System::Int32 a4, ::System::IntPtr a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_WRITEEVENTRAW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 EventUnregister()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_EVENTUNREGISTER_OFFSET))(this);
		}

		static ::System::Int32 bitcount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 bitindex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_BITINDEX_OFFSET))(a1);
		}
	};
}
