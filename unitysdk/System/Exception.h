#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception_ExceptionMessageKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Runtime::Serialization { class SafeSerializationManager; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_EXCEPTION_GETBASEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C318750)
#define SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1C318690)
#define SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET UNITYSDK_OFFSET(0x1C319B50)
#define SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C3193A0)
#define SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1C318780)
#define SYSTEM_EXCEPTION_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1C318740)
#define SYSTEM_EXCEPTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C3186F0)
#define SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C318760)
#define SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C318560)
#define SYSTEM_EXCEPTION_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1C318B40)
#define SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1C318770)
#define SYSTEM_EXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x1C3177A0)
#define SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C319A30)
#define SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C319BA0)
#define SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x1C319AA0)
#define SYSTEM_EXCEPTION_SET_HRESULT_OFFSET UNITYSDK_OFFSET(0x1C319B40)
#define SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET UNITYSDK_OFFSET(0x1C318B30)
#define SYSTEM_EXCEPTION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C318D20)
#define SYSTEM_EXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C318D10)
#define SYSTEM_EXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C319BB0)
#define SYSTEM_EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C317860)
#define SYSTEM_EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C3178D0)
#define SYSTEM_EXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C317940)
#define SYSTEM_EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C317800)

namespace System
{
	inline static constexpr unsigned int Exception_TypeDefinitionIndex = 231;

	class Exception : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_EDILock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Exception_TypeDefinitionIndex)->GetStaticField(0x1040);
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

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}

		::System::String* GetStackTrace(::System::Boolean needFileInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET))(this, needFileInfo);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_SOURCE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean needFileLineInfo, ::System::Boolean needMessage)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_1_OFFSET))(this, needFileLineInfo, needMessage);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET))(this, context);
		}

		::System::String* StripFileInfo(::System::String* stackTrace, ::System::Boolean isRemoteStackTrace)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET))(this, stackTrace, isRemoteStackTrace);
		}

		::System::Void RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET))(this, exceptionDispatchInfo);
		}

		::System::Void set_HResult(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HRESULT_OFFSET))(this, value);
		}

		::System::Type* GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETTYPE_OFFSET))(this);
		}

		static ::System::String* GetMessageFromNativeResources(::System::Exception_ExceptionMessageKind kind)
		{
			return ((::System::String*(*)(::System::Exception_ExceptionMessageKind))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET))(kind);
		}

		static ::System::Void ReportUnhandledException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET))(exception);
		}
	};
}
