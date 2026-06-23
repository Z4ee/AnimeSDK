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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETARG_OFFSET UNITYSDK_OFFSET(0x1D0B6770)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D0B67B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x1D0B6090)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D0B60A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D0B60B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x1D0B6100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1D0B6220)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1D0B63E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x1D0B6520)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D0B65D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1D0B6660)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1D0B6300)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_URI_OFFSET UNITYSDK_OFFSET(0x1D0B6670)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D0B5B70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1D0B6E70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x1D0B6750)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1D0B6E80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x1D0B6760)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0B5610)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D0B5720)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D0B5AA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B5500)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodResponse_TypeDefinitionIndex = 1358;

	class MethodResponse : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x10
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x18
		::System::Object* _returnValue; // 0x20
		::System::Exception* _exception; // 0x28
		::System::Collections::IDictionary* InternalProperties; // 0x30
		::System::Runtime::Remoting::Messaging::IMethodCallMessage* _callMsg; // 0x38
		::System::String* _methodName; // 0x40
		::System::String* _uri; // 0x48
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x50
		::System::Collections::IDictionary* ExternalProperties; // 0x58
		::Il2CppArray<::System::Object*>* _outArgs; // 0x60
		::System::Reflection::MethodBase* _methodBase; // 0x68
		::System::String* _typeName; // 0x70
		::Il2CppArray<::System::Type*>* _methodSignature; // 0x78
		::Il2CppArray<::System::Object*>* _args; // 0x80

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
