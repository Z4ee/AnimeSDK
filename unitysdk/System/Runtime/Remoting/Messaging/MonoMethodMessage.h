#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/CallType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoMethod; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class AsyncResult; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Remoting::Messaging { class MCMDictionary; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x179E3760)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x179E3150)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x179E3370)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x179E3470)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x179E3B00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_CALLTYPE_OFFSET UNITYSDK_OFFSET(0x179E33B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x179E37A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x179E3480)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x179E34A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x179E34B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x179E3520)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGCOUNT_OFFSET UNITYSDK_OFFSET(0x179E37B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x179E3890)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x179E32C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x179E3AD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x179E36E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x179E3740)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_INITMESSAGE_OFFSET UNITYSDK_OFFSET(0x179E2BB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_NEEDSOUTPROCESSING_OFFSET UNITYSDK_OFFSET(0x179E3B70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x179E3490)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x179E3750)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x179E3AE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x179E3AF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E3C80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E3000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x179E3240)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x179E2FA0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MonoMethodMessage_TypeDefinitionIndex = 1319;

	class MonoMethodMessage : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_UriKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoMethodMessage_TypeDefinitionIndex)->GetStaticField(0xC000);
		}
		static ::System::String** StaticGet_CallContextKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoMethodMessage_TypeDefinitionIndex)->GetStaticField(0xC008);
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

		::System::Void _ctor(::System::Reflection::MethodBase* method, ::Il2CppArray<::System::Object*>* out_args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CTOR_OFFSET))(this, method, out_args);
		}

		::System::Void _ctor_1(::System::Reflection::MethodInfo* minfo, ::Il2CppArray<::System::Object*>* in_args, ::Il2CppArray<::System::Object*>* out_args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CTOR_1_OFFSET))(this, minfo, in_args, out_args);
		}

		::System::Void _ctor_2(::System::Type* type, ::System::String* methodName, ::Il2CppArray<::System::Object*>* in_args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CTOR_2_OFFSET))(this, type, methodName, in_args);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE__CCTOR_OFFSET))();
		}

		::System::Void InitMessage(::System::Reflection::MonoMethod* method, ::Il2CppArray<::System::Object*>* out_args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MonoMethod*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_INITMESSAGE_OFFSET))(this, method, out_args);
		}

		static ::System::Reflection::MethodInfo* GetMethodInfo(::System::Type* type, ::System::String* methodName)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETMETHODINFO_OFFSET))(type, methodName);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Int32 get_ArgCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_LOGICALCALLCONTEXT_OFFSET))(this, value);
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

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Int32 get_OutArgCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGS_OFFSET))(this);
		}

		::System::Object* get_ReturnValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_RETURNVALUE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET))(this, value);
		}

		::System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult()
		{
			return ((::System::Runtime::Remoting::Messaging::AsyncResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ASYNCRESULT_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::CallType get_CallType()
		{
			return ((::System::Runtime::Remoting::Messaging::CallType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_CALLTYPE_OFFSET))(this);
		}

		::System::Boolean NeedsOutProcessing(::System::Int32& outCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_NEEDSOUTPROCESSING_OFFSET))(this, outCount);
		}
	};
}
