#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

namespace System { class FormattableString; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_1_OFFSET UNITYSDK_OFFSET(0x1BEE30F0)
#define SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_2_OFFSET UNITYSDK_OFFSET(0x1BEE30E0)
#define SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_OFFSET UNITYSDK_OFFSET(0x1BEE2F90)
#define SYSTEM_NET_NETEVENTSOURCE_CRITICALFAILURE_OFFSET UNITYSDK_OFFSET(0x1BEE2780)
#define SYSTEM_NET_NETEVENTSOURCE_DEBUGVALIDATEARG_1_OFFSET UNITYSDK_OFFSET(0x1BEE3300)
#define SYSTEM_NET_NETEVENTSOURCE_DEBUGVALIDATEARG_OFFSET UNITYSDK_OFFSET(0x1BEE3240)
#define SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1BEE2970)
#define SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_2_OFFSET UNITYSDK_OFFSET(0x1BEE2E10)
#define SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_3_OFFSET UNITYSDK_OFFSET(0x1BEE2E00)
#define SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_OFFSET UNITYSDK_OFFSET(0x1BEE2900)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_1_OFFSET UNITYSDK_OFFSET(0x1BEE12C0)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_2_OFFSET UNITYSDK_OFFSET(0x1BEE18E0)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_3_OFFSET UNITYSDK_OFFSET(0x1BEE1A70)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_4_OFFSET UNITYSDK_OFFSET(0x1BEE12B0)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET UNITYSDK_OFFSET(0x1BEE0C30)
#define SYSTEM_NET_NETEVENTSOURCE_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BEE24C0)
#define SYSTEM_NET_NETEVENTSOURCE_ERROR_1_OFFSET UNITYSDK_OFFSET(0x1BEE24D0)
#define SYSTEM_NET_NETEVENTSOURCE_ERROR_OFFSET UNITYSDK_OFFSET(0x1BEE2380)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_1_OFFSET UNITYSDK_OFFSET(0x1BEE1D90)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_2_OFFSET UNITYSDK_OFFSET(0x1BEE1F00)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_3_OFFSET UNITYSDK_OFFSET(0x1BEE1D80)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET UNITYSDK_OFFSET(0x1BEE1C10)
#define SYSTEM_NET_NETEVENTSOURCE_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1BEE2790)
#define SYSTEM_NET_NETEVENTSOURCE_FAIL_OFFSET UNITYSDK_OFFSET(0x1BEE2640)
#define SYSTEM_NET_NETEVENTSOURCE_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1BEE0EF0)
#define SYSTEM_NET_NETEVENTSOURCE_FORMAT_OFFSET UNITYSDK_OFFSET(0x1BEE1430)
#define SYSTEM_NET_NETEVENTSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEE3310)
#define SYSTEM_NET_NETEVENTSOURCE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1BEE0DA0)
#define SYSTEM_NET_NETEVENTSOURCE_IDOF_OFFSET UNITYSDK_OFFSET(0x1BEE0E20)
#define SYSTEM_NET_NETEVENTSOURCE_INFO_1_OFFSET UNITYSDK_OFFSET(0x1BEE2210)
#define SYSTEM_NET_NETEVENTSOURCE_INFO_2_OFFSET UNITYSDK_OFFSET(0x1BEE2200)
#define SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET UNITYSDK_OFFSET(0x1BEE2090)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1BEE3350)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_2_OFFSET UNITYSDK_OFFSET(0x1BEE3360)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_3_OFFSET UNITYSDK_OFFSET(0x1BEE3370)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_4_OFFSET UNITYSDK_OFFSET(0x1BEE3380)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_5_OFFSET UNITYSDK_OFFSET(0x1BEE3390)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x1BEE3340)
#define SYSTEM_NET_NETEVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE33F0)
#define SYSTEM_NET_NETEVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE33A0)

namespace System::Net
{
	inline static constexpr unsigned int NetEventSource_TypeDefinitionIndex = 3257;

	class NetEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Net::NetEventSource** StaticGet_Log()
		{
			return (::System::Net::NetEventSource**)Il2CppClass::FromTypeDefinitionIndex(NetEventSource_TypeDefinitionIndex)->GetStaticField(0x36D0);
		}
		// static const ::System::String* MissingMember; // 0x0
		// static const ::System::String* NullInstance; // 0x0
		// static const ::System::String* StaticMethodObject; // 0x0
		// static const ::System::String* NoParameters; // 0x0
		// static const ::System::Int32 MaxDumpSize = 0x400; // 0x0
		// static const ::System::Int32 EnterEventId = 0x1; // 0x0
		// static const ::System::Int32 ExitEventId = 0x2; // 0x0
		// static const ::System::Int32 AssociateEventId = 0x3; // 0x0
		// static const ::System::Int32 InfoEventId = 0x4; // 0x0
		// static const ::System::Int32 ErrorEventId = 0x5; // 0x0
		// static const ::System::Int32 CriticalFailureEventId = 0x6; // 0x0
		// static const ::System::Int32 DumpArrayEventId = 0x7; // 0x0
		// static const ::System::Int32 NextAvailableEventId = 0x8; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE__CCTOR_OFFSET))();
		}

		static ::System::Void Enter(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET))(thisOrContextObject, formattableString, memberName);
		}

		static ::System::Void Enter_1(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_1_OFFSET))(thisOrContextObject, arg0, memberName);
		}

		static ::System::Void Enter_2(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::Object* arg1, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_2_OFFSET))(thisOrContextObject, arg0, arg1, memberName);
		}

		static ::System::Void Enter_3(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_3_OFFSET))(thisOrContextObject, arg0, arg1, arg2, memberName);
		}

		::System::Void Enter_4(::System::String* thisOrContextObject, ::System::String* memberName, ::System::String* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_4_OFFSET))(this, thisOrContextObject, memberName, parameters);
		}

		static ::System::Void Exit(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET))(thisOrContextObject, formattableString, memberName);
		}

		static ::System::Void Exit_1(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_1_OFFSET))(thisOrContextObject, arg0, memberName);
		}

		static ::System::Void Exit_2(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::Object* arg1, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_2_OFFSET))(thisOrContextObject, arg0, arg1, memberName);
		}

		::System::Void Exit_3(::System::String* thisOrContextObject, ::System::String* memberName, ::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_3_OFFSET))(this, thisOrContextObject, memberName, result);
		}

		static ::System::Void Info(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET))(thisOrContextObject, formattableString, memberName);
		}

		static ::System::Void Info_1(::System::Object* thisOrContextObject, ::System::Object* message, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_INFO_1_OFFSET))(thisOrContextObject, message, memberName);
		}

		::System::Void Info_2(::System::String* thisOrContextObject, ::System::String* memberName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_INFO_2_OFFSET))(this, thisOrContextObject, memberName, message);
		}

		static ::System::Void Error(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ERROR_OFFSET))(thisOrContextObject, formattableString, memberName);
		}

		static ::System::Void Error_1(::System::Object* thisOrContextObject, ::System::Object* message, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ERROR_1_OFFSET))(thisOrContextObject, message, memberName);
		}

		::System::Void ErrorMessage(::System::String* thisOrContextObject, ::System::String* memberName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ERRORMESSAGE_OFFSET))(this, thisOrContextObject, memberName, message);
		}

		static ::System::Void Fail(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FAIL_OFFSET))(thisOrContextObject, formattableString, memberName);
		}

		static ::System::Void Fail_1(::System::Object* thisOrContextObject, ::System::Object* message, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FAIL_1_OFFSET))(thisOrContextObject, message, memberName);
		}

		::System::Void CriticalFailure(::System::String* thisOrContextObject, ::System::String* memberName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_CRITICALFAILURE_OFFSET))(this, thisOrContextObject, memberName, message);
		}

		static ::System::Void DumpBuffer(::System::Object* thisOrContextObject, ::Il2CppArray<::System::Byte>* buffer, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_OFFSET))(thisOrContextObject, buffer, memberName);
		}

		static ::System::Void DumpBuffer_1(::System::Object* thisOrContextObject, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_1_OFFSET))(thisOrContextObject, buffer, offset, count, memberName);
		}

		static ::System::Void DumpBuffer_2(::System::Object* thisOrContextObject, ::System::IntPtr bufferPtr, ::System::Int32 count, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_2_OFFSET))(thisOrContextObject, bufferPtr, count, memberName);
		}

		::System::Void DumpBuffer_3(::System::String* thisOrContextObject, ::System::String* memberName, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_DUMPBUFFER_3_OFFSET))(this, thisOrContextObject, memberName, buffer);
		}

		static ::System::Void Associate(::System::Object* first, ::System::Object* second, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_OFFSET))(first, second, memberName);
		}

		static ::System::Void Associate_1(::System::Object* thisOrContextObject, ::System::Object* first, ::System::Object* second, ::System::String* memberName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_1_OFFSET))(thisOrContextObject, first, second, memberName);
		}

		::System::Void Associate_2(::System::String* thisOrContextObject, ::System::String* memberName, ::System::String* first, ::System::String* second)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_2_OFFSET))(this, thisOrContextObject, memberName, first, second);
		}

		static ::System::Void DebugValidateArg(::System::Object* arg)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_DEBUGVALIDATEARG_OFFSET))(arg);
		}

		static ::System::Void DebugValidateArg_1(::System::FormattableString* arg)
		{
			return ((::System::Void(*)(::System::FormattableString*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_DEBUGVALIDATEARG_1_OFFSET))(arg);
		}

		static ::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_GET_ISENABLED_OFFSET))();
		}

		static ::System::String* IdOf(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_IDOF_OFFSET))(value);
		}

		static ::System::Int32 GetHashCode(::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_GETHASHCODE_OFFSET))(value);
		}

		static ::System::Object* Format(::System::Object* value)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FORMAT_OFFSET))(value);
		}

		static ::System::String* Format_1(::System::FormattableString* s)
		{
			return ((::System::String*(*)(::System::FormattableString*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FORMAT_1_OFFSET))(s);
		}

		::System::Void WriteEvent(::System::Int32 eventId, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_OFFSET))(this, eventId, arg1, arg2, arg3, arg4);
		}

		::System::Void WriteEvent_1(::System::Int32 eventId, ::System::String* arg1, ::System::String* arg2, ::Il2CppArray<::System::Byte>* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_1_OFFSET))(this, eventId, arg1, arg2, arg3);
		}

		::System::Void WriteEvent_2(::System::Int32 eventId, ::System::String* arg1, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_2_OFFSET))(this, eventId, arg1, arg2, arg3, arg4);
		}

		::System::Void WriteEvent_3(::System::Int32 eventId, ::System::String* arg1, ::System::Int32 arg2, ::System::String* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_3_OFFSET))(this, eventId, arg1, arg2, arg3);
		}

		::System::Void WriteEvent_4(::System::Int32 eventId, ::System::String* arg1, ::System::String* arg2, ::System::Int32 arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_4_OFFSET))(this, eventId, arg1, arg2, arg3);
		}

		::System::Void WriteEvent_5(::System::Int32 eventId, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::Int32 arg4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_5_OFFSET))(this, eventId, arg1, arg2, arg3, arg4);
		}
	};
}
