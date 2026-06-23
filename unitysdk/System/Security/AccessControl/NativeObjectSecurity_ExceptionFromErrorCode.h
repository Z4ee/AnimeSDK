#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1AF370)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1AF410)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1AEF80)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AEF60)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity_ExceptionFromErrorCode_TypeDefinitionIndex = 988;

	class NativeObjectSecurity_ExceptionFromErrorCode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE__CTOR_OFFSET))(this, object, method);
		}

		::System::Exception* Invoke(::System::Int32 errorCode, ::System::String* name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE_INVOKE_OFFSET))(this, errorCode, name, handle, context);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 errorCode, ::System::String* name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE_BEGININVOKE_OFFSET))(this, errorCode, name, handle, context, callback, object);
		}

		::System::Exception* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_EXCEPTIONFROMERRORCODE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
