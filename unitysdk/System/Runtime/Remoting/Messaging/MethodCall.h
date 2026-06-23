#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class ArgInfo; }
namespace System::Runtime::Remoting::Messaging { class CADMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_CASTTO_OFFSET UNITYSDK_OFFSET(0x1CD93AD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETARG_OFFSET UNITYSDK_OFFSET(0x1CD93A90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CD92A10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETTYPENAMEFROMASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1CD93D30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x1CD930A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_GENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1CD93CE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD930B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x1CD93100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1CD93760)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1CD937A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CD93910)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CD93A00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_URI_OFFSET UNITYSDK_OFFSET(0x1CD93A60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1CD93940)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1CD92580)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_RESOLVEMETHOD_OFFSET UNITYSDK_OFFSET(0x1CD93130)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1CD93DF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x1CD93A70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1CD93E00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x1CD93A80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD923D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CD92570)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD922F0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodCall_TypeDefinitionIndex = 1354;

	class MethodCall : public ::System::Object
	{
	public:
		::System::String* _typeName; // 0x10
		::System::Collections::IDictionary* ExternalProperties; // 0x18
		::Il2CppArray<::System::Object*>* _args; // 0x20
		::System::String* _methodName; // 0x28
		::Il2CppArray<::System::Type*>* _genericArguments; // 0x30
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x38
		::System::Collections::IDictionary* InternalProperties; // 0x40
		::Il2CppArray<::System::Type*>* _methodSignature; // 0x48
		::System::Reflection::MethodBase* _methodBase; // 0x50
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x58
		::System::String* _uri; // 0x60
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x68

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_1_OFFSET))(this, msg);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_2_OFFSET))(this);
		}

		::System::Void InitMethodProperty(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITMETHODPROPERTY_OFFSET))(this, key, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODBASE_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODNAME_OFFSET))(this);
		}

		::System::Object* get_MethodSignature()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODSIGNATURE_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void InitDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITDICTIONARY_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_URI_OFFSET))(this);
		}

		::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET))(this, value);
		}

		::System::Object* GetArg(::System::Int32 argNum)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETARG_OFFSET))(this, argNum);
		}

		::System::Void ResolveMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_RESOLVEMETHOD_OFFSET))(this);
		}

		::System::Type* CastTo(::System::String* clientType, ::System::Type* serverType)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_CASTTO_OFFSET))(this, clientType, serverType);
		}

		static ::System::String* GetTypeNameFromAssemblyQualifiedName(::System::String* aqname)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETTYPENAMEFROMASSEMBLYQUALIFIEDNAME_OFFSET))(aqname);
		}

		::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Type*>* get_GenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_GENERICARGUMENTS_OFFSET))(this);
		}
	};
}
