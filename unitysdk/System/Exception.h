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

#define SYSTEM_EXCEPTION_ADD_SERIALIZEOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0x162E9410)
#define SYSTEM_EXCEPTION_FIXREMOTINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162EA760)
#define SYSTEM_EXCEPTION_GETBASEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162E8DA0)
#define SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x162E8CC0)
#define SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET UNITYSDK_OFFSET(0x162EA720)
#define SYSTEM_EXCEPTION_GETMETHODFROMSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x162E8DC0)
#define SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x162E9530)
#define SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x162E8F00)
#define SYSTEM_EXCEPTION_GETTYPE_OFFSET UNITYSDK_OFFSET(0x162CC580)
#define SYSTEM_EXCEPTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x162E8D20)
#define SYSTEM_EXCEPTION_GET_HELPLINK_OFFSET UNITYSDK_OFFSET(0x162E8F90)
#define SYSTEM_EXCEPTION_GET_HRESULT_OFFSET UNITYSDK_OFFSET(0x162EA6C0)
#define SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x162E8DB0)
#define SYSTEM_EXCEPTION_GET_ISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x162EA6F0)
#define SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x162E8B60)
#define SYSTEM_EXCEPTION_GET_REMOTESTACKTRACE_OFFSET UNITYSDK_OFFSET(0x162EA650)
#define SYSTEM_EXCEPTION_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x162E8FB0)
#define SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x162E8E90)
#define SYSTEM_EXCEPTION_GET_TARGETSITE_OFFSET UNITYSDK_OFFSET(0x162E8DD0)
#define SYSTEM_EXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x162E8AE0)
#define SYSTEM_EXCEPTION_INTERNALPRESERVESTACKTRACE_OFFSET UNITYSDK_OFFSET(0x162EA5B0)
#define SYSTEM_EXCEPTION_INTERNALTOSTRING_OFFSET UNITYSDK_OFFSET(0x162EA6E0)
#define SYSTEM_EXCEPTION_ISIMMUTABLEAGILEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162E8D90)
#define SYSTEM_EXCEPTION_NISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x162EA710)
#define SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x162EA570)
#define SYSTEM_EXCEPTION_PREPFORREMOTING_OFFSET UNITYSDK_OFFSET(0x162E99B0)
#define SYSTEM_EXCEPTION_REMOVE_SERIALIZEOBJECTSTATE_OFFSET UNITYSDK_OFFSET(0x162E94A0)
#define SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162EA880)
#define SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x162EA660)
#define SYSTEM_EXCEPTION_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0x162E01B0)
#define SYSTEM_EXCEPTION_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0x162EA740)
#define SYSTEM_EXCEPTION_SETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x162EA750)
#define SYSTEM_EXCEPTION_SET_HELPLINK_OFFSET UNITYSDK_OFFSET(0x162E8FA0)
#define SYSTEM_EXCEPTION_SET_HRESULT_OFFSET UNITYSDK_OFFSET(0x162EA6D0)
#define SYSTEM_EXCEPTION_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x162E9090)
#define SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET UNITYSDK_OFFSET(0x162E8F80)
#define SYSTEM_EXCEPTION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x162E90B0)
#define SYSTEM_EXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162E90A0)
#define SYSTEM_EXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x162EA890)
#define SYSTEM_EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162D51C0)
#define SYSTEM_EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x162D5210)
#define SYSTEM_EXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x162D52B0)
#define SYSTEM_EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x162E8B20)

namespace System
{
	inline static constexpr unsigned int Exception_TypeDefinitionIndex = 245;

	class Exception : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_EDILock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Exception_TypeDefinitionIndex)->GetStaticField(0x5050);
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

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_3_OFFSET))(this, info, context);
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

		static ::System::Boolean IsImmutableAgileException(::System::Exception* e)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ISIMMUTABLEAGILEEXCEPTION_OFFSET))(e);
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

		static ::System::IRuntimeMethodInfo* GetMethodFromStackTrace(::System::Object* stackTrace)
		{
			return ((::System::IRuntimeMethodInfo*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMETHODFROMSTACKTRACE_OFFSET))(stackTrace);
		}

		::System::Reflection::MethodBase* get_TargetSite()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_TARGETSITE_OFFSET))(this);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}

		::System::String* GetStackTrace(::System::Boolean needFileInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET))(this, needFileInfo);
		}

		::System::Void SetErrorCode(::System::Int32 hr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETERRORCODE_OFFSET))(this, hr);
		}

		::System::String* get_HelpLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_HELPLINK_OFFSET))(this);
		}

		::System::Void set_HelpLink(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HELPLINK_OFFSET))(this, value);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_SOURCE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean needFileLineInfo, ::System::Boolean needMessage)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_1_OFFSET))(this, needFileLineInfo, needMessage);
		}

		::System::Void add_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ADD_SERIALIZEOBJECTSTATE_OFFSET))(this, value);
		}

		::System::Void remove_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REMOVE_SERIALIZEOBJECTSTATE_OFFSET))(this, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Exception* PrepForRemoting()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_PREPFORREMOTING_OFFSET))(this);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET))(this, context);
		}

		::System::Void InternalPreserveStackTrace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_INTERNALPRESERVESTACKTRACE_OFFSET))(this);
		}

		::System::String* get_RemoteStackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_REMOTESTACKTRACE_OFFSET))(this);
		}

		::System::String* StripFileInfo(::System::String* stackTrace, ::System::Boolean isRemoteStackTrace)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET))(this, stackTrace, isRemoteStackTrace);
		}

		::System::Void RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET))(this, exceptionDispatchInfo);
		}

		::System::Int32 get_HResult()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_HRESULT_OFFSET))(this);
		}

		::System::Void set_HResult(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HRESULT_OFFSET))(this, value);
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

		static ::System::Boolean nIsTransient(::System::Int32 hr)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_NISTRANSIENT_OFFSET))(hr);
		}

		static ::System::String* GetMessageFromNativeResources(::System::Exception_ExceptionMessageKind kind)
		{
			return ((::System::String*(*)(::System::Exception_ExceptionMessageKind))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET))(kind);
		}

		::System::Void SetMessage(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETMESSAGE_OFFSET))(this, s);
		}

		::System::Void SetStackTrace(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETSTACKTRACE_OFFSET))(this, s);
		}

		::System::Exception* FixRemotingException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_FIXREMOTINGEXCEPTION_OFFSET))(this);
		}

		static ::System::Void ReportUnhandledException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET))(exception);
		}
	};
}
