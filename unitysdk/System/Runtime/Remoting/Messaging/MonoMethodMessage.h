#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/CallType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MonoMethod; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class AsyncResult; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Remoting::Messaging { class MCMDictionary; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x18BA19E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x18BA16A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_CALLTYPE_OFFSET UNITYSDK_OFFSET(0x18BA1A40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x18BA16B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x18BA16C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x18BA16D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x18BA1770)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x18BA15F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x18BA18F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x18BA19C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x18BA19D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x18BA1A20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x18BA1A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BA1B60)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MonoMethodMessage_TypeDefinitionIndex = 1361;

	class MonoMethodMessage : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CallContextKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoMethodMessage_TypeDefinitionIndex)->GetStaticField(0x1510);
		}
		static ::System::String** StaticGet_UriKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoMethodMessage_TypeDefinitionIndex)->GetStaticField(0x1518);
		}
		::System::Reflection::MonoMethod* method; // 0x10
		::Il2CppArray<::System::Object*>* args; // 0x18
		::Il2CppArray<::System::String*>* names; // 0x20
		::Il2CppArray<::System::Byte>* arg_types; // 0x28
		::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx; // 0x30
		::System::Object* rval; // 0x38
		::System::Exception* exc; // 0x40
		::System::Runtime::Remoting::Messaging::AsyncResult* asyncResult; // 0x48
		::System::Runtime::Remoting::Messaging::CallType call_type; // 0x50
		::System::String* uri; // 0x58
		::System::Runtime::Remoting::Messaging::MCMDictionary* properties; // 0x60
		::Il2CppArray<::System::Type*>* methodSignature; // 0x68
		::System::Runtime::Remoting::Identity* identity; // 0x70

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CCTOR_OFFSET))();
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_PROPERTIES_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODBASE_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Object* get_MethodSignature()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODSIGNATURE_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_URI_OFFSET))(this, value);
		}

		::System::Object* GetArg(::System::Int32 arg_num)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETARG_OFFSET))(this, arg_num);
		}

		::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET))(this, value);
		}

		::System::Runtime::Remoting::Messaging::CallType get_CallType()
		{
			return ((::System::Runtime::Remoting::Messaging::CallType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_CALLTYPE_OFFSET))(this);
		}
	};
}
