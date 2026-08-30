#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class ArgInfo; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Remoting::Messaging { class MethodReturnDictionary; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x19449310)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x19448E50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x19448E70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x19449340)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x19448E80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x19448EB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x19448EC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x19448F50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x19449350)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19449160)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x194493F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x194491C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x194492D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x194492E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x19449400)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x194492F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x19449410)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x19449300)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19448C30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x194489F0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ReturnMessage_TypeDefinitionIndex = 1333;

	class ReturnMessage : public ::System::Object
	{
	public:
		::System::String* _typeName; // 0x10
		::Il2CppArray<::System::Object*>* _args; // 0x18
		::Il2CppArray<::System::Type*>* _methodSignature; // 0x20
		::System::Object* _returnValue; // 0x28
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x30
		::System::Runtime::Remoting::Messaging::MethodReturnDictionary* _properties; // 0x38
		::System::String* _uri; // 0x40
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callCtx; // 0x48
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x50
		::System::Exception* _exception; // 0x58
		::System::Reflection::MethodBase* _methodBase; // 0x60
		::Il2CppArray<::System::Object*>* _outArgs; // 0x68
		::System::String* _methodName; // 0x70

		::System::Void _ctor(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Int32 a3, ::System::Runtime::Remoting::Messaging::LogicalCallContext* a4, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::Exception* a1, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ArgCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODBASE_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Object* get_MethodSignature()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODSIGNATURE_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void set_Uri(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SET_URI_OFFSET))(this, a1);
		}

		::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET))(this, a1);
		}

		::System::Object* GetArg(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GETARG_OFFSET))(this, a1);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_EXCEPTION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_OUTARGS_OFFSET))(this);
		}

		::System::Object* get_ReturnValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_RETURNVALUE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET))(this, a1);
		}
	};
}
