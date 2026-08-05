#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/ThreadKinds.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Net { class BaseLoggingObject; }

#define SYSTEM_NET_GLOBALLOG_ADDTOARRAY_OFFSET UNITYSDK_OFFSET(0x1DD1AA50)
#define SYSTEM_NET_GLOBALLOG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1DD1AB00)
#define SYSTEM_NET_GLOBALLOG_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1DD1AB10)
#define SYSTEM_NET_GLOBALLOG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1DD1AAB0)
#define SYSTEM_NET_GLOBALLOG_DUMPARRAY_OFFSET UNITYSDK_OFFSET(0x1DD1ABB0)
#define SYSTEM_NET_GLOBALLOG_DUMP_1_OFFSET UNITYSDK_OFFSET(0x1DD1ABD0)
#define SYSTEM_NET_GLOBALLOG_DUMP_2_OFFSET UNITYSDK_OFFSET(0x1DD1ABE0)
#define SYSTEM_NET_GLOBALLOG_DUMP_3_OFFSET UNITYSDK_OFFSET(0x1DD1ABF0)
#define SYSTEM_NET_GLOBALLOG_DUMP_OFFSET UNITYSDK_OFFSET(0x1DD1ABC0)
#define SYSTEM_NET_GLOBALLOG_ENTER_1_OFFSET UNITYSDK_OFFSET(0x1DD1AAA0)
#define SYSTEM_NET_GLOBALLOG_ENTER_OFFSET UNITYSDK_OFFSET(0x1DD1AA90)
#define SYSTEM_NET_GLOBALLOG_GET_CURRENTTHREADKIND_OFFSET UNITYSDK_OFFSET(0x1DD1A9A0)
#define SYSTEM_NET_GLOBALLOG_IGNORE_OFFSET UNITYSDK_OFFSET(0x1DD1AA60)
#define SYSTEM_NET_GLOBALLOG_LEAVEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD1AB60)
#define SYSTEM_NET_GLOBALLOG_LEAVE_1_OFFSET UNITYSDK_OFFSET(0x1DD1AB80)
#define SYSTEM_NET_GLOBALLOG_LEAVE_2_OFFSET UNITYSDK_OFFSET(0x1DD1AB90)
#define SYSTEM_NET_GLOBALLOG_LEAVE_3_OFFSET UNITYSDK_OFFSET(0x1DD1ABA0)
#define SYSTEM_NET_GLOBALLOG_LEAVE_OFFSET UNITYSDK_OFFSET(0x1DD1AB70)
#define SYSTEM_NET_GLOBALLOG_LOGGINGINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DD1A960)
#define SYSTEM_NET_GLOBALLOG_PRINTHEX_OFFSET UNITYSDK_OFFSET(0x1DD1AA80)
#define SYSTEM_NET_GLOBALLOG_PRINT_OFFSET UNITYSDK_OFFSET(0x1DD1AA70)
#define SYSTEM_NET_GLOBALLOG_SETTHREADSOURCE_OFFSET UNITYSDK_OFFSET(0x1DD1A9B0)
#define SYSTEM_NET_GLOBALLOG_THREADCONTRACT_1_OFFSET UNITYSDK_OFFSET(0x1DD1A9D0)
#define SYSTEM_NET_GLOBALLOG_THREADCONTRACT_OFFSET UNITYSDK_OFFSET(0x1DD1A9C0)
#define SYSTEM_NET_GLOBALLOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD1AC00)

namespace System::Net
{
	inline static constexpr unsigned int GlobalLog_TypeDefinitionIndex = 3381;

	class GlobalLog : public ::System::Object
	{
	public:
		static ::System::Net::BaseLoggingObject** StaticGet_Logobject()
		{
			return (::System::Net::BaseLoggingObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalLog_TypeDefinitionIndex)->GetStaticField(0x3080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG__CCTOR_OFFSET))();
		}

		static ::System::Net::BaseLoggingObject* LoggingInitialize()
		{
			return ((::System::Net::BaseLoggingObject*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_LOGGINGINITIALIZE_OFFSET))();
		}

		static ::System::Net::ThreadKinds get_CurrentThreadKind()
		{
			return ((::System::Net::ThreadKinds(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_GET_CURRENTTHREADKIND_OFFSET))();
		}

		static ::System::Void SetThreadSource(::System::Net::ThreadKinds source)
		{
			return ((::System::Void(*)(::System::Net::ThreadKinds))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_SETTHREADSOURCE_OFFSET))(source);
		}

		static ::System::Void ThreadContract(::System::Net::ThreadKinds kind, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::System::Net::ThreadKinds, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_THREADCONTRACT_OFFSET))(kind, errorMsg);
		}

		static ::System::Void ThreadContract_1(::System::Net::ThreadKinds kind, ::System::Net::ThreadKinds allowedSources, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::System::Net::ThreadKinds, ::System::Net::ThreadKinds, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_THREADCONTRACT_1_OFFSET))(kind, allowedSources, errorMsg);
		}

		static ::System::Void AddToArray(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_ADDTOARRAY_OFFSET))(msg);
		}

		static ::System::Void Ignore(::System::Object* msg)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_IGNORE_OFFSET))(msg);
		}

		static ::System::Void Print(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_PRINT_OFFSET))(msg);
		}

		static ::System::Void PrintHex(::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_PRINTHEX_OFFSET))(msg, value);
		}

		static ::System::Void Enter(::System::String* func)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_ENTER_OFFSET))(func);
		}

		static ::System::Void Enter_1(::System::String* func, ::System::String* parms)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_ENTER_1_OFFSET))(func, parms);
		}

		static ::System::Void Assert(::System::Boolean condition, ::System::String* messageFormat, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_ASSERT_OFFSET))(condition, messageFormat, data);
		}

		static ::System::Void Assert_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_ASSERT_1_OFFSET))(message);
		}

		static ::System::Void Assert_2(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_ASSERT_2_OFFSET))(message, detailMessage);
		}

		static ::System::Void LeaveException(::System::String* func, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_LEAVEEXCEPTION_OFFSET))(func, exception);
		}

		static ::System::Void Leave(::System::String* func)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_LEAVE_OFFSET))(func);
		}

		static ::System::Void Leave_1(::System::String* func, ::System::String* result)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_LEAVE_1_OFFSET))(func, result);
		}

		static ::System::Void Leave_2(::System::String* func, ::System::Int32 returnval)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_LEAVE_2_OFFSET))(func, returnval);
		}

		static ::System::Void Leave_3(::System::String* func, ::System::Boolean returnval)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_LEAVE_3_OFFSET))(func, returnval);
		}

		static ::System::Void DumpArray()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_DUMPARRAY_OFFSET))();
		}

		static ::System::Void Dump(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_DUMP_OFFSET))(buffer);
		}

		static ::System::Void Dump_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_DUMP_1_OFFSET))(buffer, length);
		}

		static ::System::Void Dump_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_DUMP_2_OFFSET))(buffer, offset, length);
		}

		static ::System::Void Dump_3(::System::IntPtr buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALLOG_DUMP_3_OFFSET))(buffer, offset, length);
		}
	};
}
