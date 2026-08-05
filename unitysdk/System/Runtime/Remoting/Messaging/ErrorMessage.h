#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x1DF3AB40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x1DF3AA70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1DF3AB50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x1DF3AA80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1DF3AA90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1DF3AAD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DF3AAE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1DF3AAF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x1DF3AB30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3AA30)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ErrorMessage_TypeDefinitionIndex = 1344;

	class ErrorMessage : public ::System::Object
	{
	public:
		::System::String* _uri; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODBASE_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Object* get_MethodSignature()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODSIGNATURE_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Object* GetArg(::System::Int32 arg_num)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GETARG_OFFSET))(this, arg_num);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}
	};
}
