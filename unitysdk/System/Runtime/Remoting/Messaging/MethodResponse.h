#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class ArgInfo; }
namespace System::Runtime::Remoting::Messaging { class CADMethodReturnMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETARG_OFFSET UNITYSDK_OFFSET(0x163B5970)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163B59B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x163B5240)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x163B5250)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x163B5260)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x163B5270)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x163B52A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x163B53C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x163B5580)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x163B56A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x163AED50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x163B5850)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x163B54A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_URI_OFFSET UNITYSDK_OFFSET(0x163B5860)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x163B4D70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SET_URI_OFFSET UNITYSDK_OFFSET(0x163B5940)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x163B6090)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x163B5950)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x163B60A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x163B5960)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163AE8F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x163B4A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x163AEBF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x163AEA10)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodResponse_TypeDefinitionIndex = 1315;

	class MethodResponse : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x10
		::System::Collections::IDictionary* ExternalProperties; // 0x18
		::Il2CppArray<::System::Object*>* _args; // 0x20
		::System::Object* _returnValue; // 0x28
		::System::Exception* _exception; // 0x30
		::System::Runtime::Remoting::Messaging::IMethodCallMessage* _callMsg; // 0x38
		::Il2CppArray<::System::Object*>* _outArgs; // 0x40
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x48
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x50
		::Il2CppArray<::System::Type*>* _methodSignature; // 0x58
		::System::Collections::IDictionary* InternalProperties; // 0x60
		::System::String* _methodName; // 0x68
		::System::String* _typeName; // 0x70
		::System::String* _uri; // 0x78
		::System::Reflection::MethodBase* _methodBase; // 0x80

		::System::Void _ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_OFFSET))(this, e, msg);
		}

		::System::Void _ctor_1(::System::Object* returnValue, ::Il2CppArray<::System::Object*>* outArgs, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_1_OFFSET))(this, returnValue, outArgs, callCtx, msg);
		}

		::System::Void _ctor_2(::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_2_OFFSET))(this, msg, retmsg);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Void InitMethodProperty(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_INITMETHODPROPERTY_OFFSET))(this, key, value);
		}

		::System::Int32 get_ArgCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGS_OFFSET))(this);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODBASE_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Object* get_MethodSignature()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODSIGNATURE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_OUTARGS_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Object* get_ReturnValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_RETURNVALUE_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_URI_OFFSET))(this);
		}

		::System::Void set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SET_URI_OFFSET))(this, value);
		}

		::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET))(this, value);
		}

		::System::Object* GetArg(::System::Int32 argNum)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETARG_OFFSET))(this, argNum);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET))(this, value);
		}
	};
}
