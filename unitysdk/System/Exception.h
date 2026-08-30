#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception_ExceptionMessageKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class IRuntimeMethodInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections { class IDictionary; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Runtime::Serialization { class SafeSerializationEventArgs; }
namespace System::Runtime::Serialization { class SafeSerializationManager; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_EXCEPTION_ADD_SERIALIZEOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0x1AB8CA60)
#define SYSTEM_EXCEPTION_FIXREMOTINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AB8DC50)
#define SYSTEM_EXCEPTION_GETBASEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AB8C0D0)
#define SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1AB8BFA0)
#define SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET UNITYSDK_OFFSET(0x1AB8DC10)
#define SYSTEM_EXCEPTION_GETMETHODFROMSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB8C0F0)
#define SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AB8CB80)
#define SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB8C350)
#define SYSTEM_EXCEPTION_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1AB6DB50)
#define SYSTEM_EXCEPTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1AB8C050)
#define SYSTEM_EXCEPTION_GET_HELPLINK_OFFSET UNITYSDK_OFFSET(0x1AB8C3E0)
#define SYSTEM_EXCEPTION_GET_HRESULT_OFFSET UNITYSDK_OFFSET(0x1AB8DBB0)
#define SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AB8C0E0)
#define SYSTEM_EXCEPTION_GET_ISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x1AB8DBE0)
#define SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB8BE60)
#define SYSTEM_EXCEPTION_GET_REMOTESTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB8DB40)
#define SYSTEM_EXCEPTION_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1AB8C400)
#define SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB8C2E0)
#define SYSTEM_EXCEPTION_GET_TARGETSITE_OFFSET UNITYSDK_OFFSET(0x1AB8C100)
#define SYSTEM_EXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x1AB8BDE0)
#define SYSTEM_EXCEPTION_INTERNALPRESERVESTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB8DA40)
#define SYSTEM_EXCEPTION_INTERNALTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB8DBD0)
#define SYSTEM_EXCEPTION_ISIMMUTABLEAGILEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AB8C0C0)
#define SYSTEM_EXCEPTION_NISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x1AB8DC00)
#define SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1AB8DA00)
#define SYSTEM_EXCEPTION_PREPFORREMOTING_OFFSET UNITYSDK_OFFSET(0x1AB8D000)
#define SYSTEM_EXCEPTION_REMOVE_SERIALIZEOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0x1AB8CAF0)
#define SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AB8DDD0)
#define SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x1AB8DB50)
#define SYSTEM_EXCEPTION_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0x1AB836E0)
#define SYSTEM_EXCEPTION_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB8DC30)
#define SYSTEM_EXCEPTION_SETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB8DC40)
#define SYSTEM_EXCEPTION_SET_HELPLINK_OFFSET UNITYSDK_OFFSET(0x1AB8C3F0)
#define SYSTEM_EXCEPTION_SET_HRESULT_OFFSET UNITYSDK_OFFSET(0x1AB8DBC0)
#define SYSTEM_EXCEPTION_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1AB8C770)
#define SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET UNITYSDK_OFFSET(0x1AB8C3D0)
#define SYSTEM_EXCEPTION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AB8C790)
#define SYSTEM_EXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB8C780)
#define SYSTEM_EXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB8DDE0)
#define SYSTEM_EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB76F00)
#define SYSTEM_EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AB76F50)
#define SYSTEM_EXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AB76FF0)
#define SYSTEM_EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8BE20)

namespace System
{
	inline static constexpr unsigned int Exception_TypeDefinitionIndex = 244;

	class Exception : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_EDILock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Exception_TypeDefinitionIndex)->GetStaticField(0xE690);
		}
		// static const ::System::Int32 _COMPlusExceptionCode = 0xE0434352; // 0x0
		::System::String* _className; // 0x10
		::System::String* _message; // 0x18
		::System::Collections::IDictionary* _data; // 0x20
		::System::Exception* _innerException; // 0x28
		::System::String* _helpURL; // 0x30
		::System::Object* _stackTrace; // 0x38
		::System::String* _stackTraceString; // 0x40
		::System::String* _remoteStackTraceString; // 0x48
		::System::Int32 _remoteStackIndex; // 0x50
		::System::Object* _dynamicMethods; // 0x58
		::System::Int32 _HResult; // 0x60
		::System::String* _source; // 0x68
		::System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager; // 0x70
		::Il2CppArray<::System::Diagnostics::StackTrace*>* captured_traces; // 0x78
		::Il2CppArray<::System::IntPtr>* native_trace_ips; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_INIT_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Data()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_DATA_OFFSET))(this);
		}

		static ::System::Boolean IsImmutableAgileException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ISIMMUTABLEAGILEEXCEPTION_OFFSET))(a1);
		}

		::System::String* GetClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET))(this);
		}

		::System::Exception* GetBaseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETBASEEXCEPTION_OFFSET))(this);
		}

		::System::Exception* get_InnerException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET))(this);
		}

		static ::System::IRuntimeMethodInfo* GetMethodFromStackTrace(::System::Object* a1)
		{
			return ((::System::IRuntimeMethodInfo*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMETHODFROMSTACKTRACE_OFFSET))(a1);
		}

		::System::Reflection::MethodBase* get_TargetSite()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_TARGETSITE_OFFSET))(this);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}

		::System::String* GetStackTrace(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET))(this, a1);
		}

		::System::Void SetErrorCode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETERRORCODE_OFFSET))(this, a1);
		}

		::System::String* get_HelpLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_HELPLINK_OFFSET))(this);
		}

		::System::Void set_HelpLink(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HELPLINK_OFFSET))(this, a1);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Void add_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ADD_SERIALIZEOBJECTSTATE_OFFSET))(this, a1);
		}

		::System::Void remove_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REMOVE_SERIALIZEOBJECTSTATE_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Exception* PrepForRemoting()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_PREPFORREMOTING_OFFSET))(this);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET))(this, a1);
		}

		::System::Void InternalPreserveStackTrace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_INTERNALPRESERVESTACKTRACE_OFFSET))(this);
		}

		::System::String* get_RemoteStackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_REMOTESTACKTRACE_OFFSET))(this);
		}

		::System::String* StripFileInfo(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET))(this, a1);
		}

		::System::Int32 get_HResult()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_HRESULT_OFFSET))(this);
		}

		::System::Void set_HResult(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HRESULT_OFFSET))(this, a1);
		}

		::System::String* InternalToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_INTERNALTOSTRING_OFFSET))(this);
		}

		::System::Type* GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTransient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_ISTRANSIENT_OFFSET))(this);
		}

		static ::System::Boolean nIsTransient(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_NISTRANSIENT_OFFSET))(a1);
		}

		static ::System::String* GetMessageFromNativeResources(::System::Exception_ExceptionMessageKind a1)
		{
			return ((::System::String*(*)(::System::Exception_ExceptionMessageKind))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET))(a1);
		}

		::System::Void SetMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETMESSAGE_OFFSET))(this, a1);
		}

		::System::Void SetStackTrace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETSTACKTRACE_OFFSET))(this, a1);
		}

		::System::Exception* FixRemotingException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_FIXREMOTINGEXCEPTION_OFFSET))(this);
		}

		static ::System::Void ReportUnhandledException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET))(a1);
		}
	};
}
