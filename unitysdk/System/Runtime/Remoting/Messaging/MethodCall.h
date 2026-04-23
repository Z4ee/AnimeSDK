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
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_CASTTO_OFFSET UNITYSDK_OFFSET(0x179E0A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_COPYFROM_OFFSET UNITYSDK_OFFSET(0x179DFB40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETARG_OFFSET UNITYSDK_OFFSET(0x179E0940)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x179D9A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETTYPENAMEFROMASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x179E1290)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x179DFFC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x179DFFE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_GENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x179E1240)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x179DFFF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x179E0020)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x179E0640)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x179E0680)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x179DA100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x179E08A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_URI_OFFSET UNITYSDK_OFFSET(0x179E0900)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITDICTIONARY_OFFSET UNITYSDK_OFFSET(0x179E07E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x179D92F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INIT_OFFSET UNITYSDK_OFFSET(0x179E0980)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_RESOLVEMETHOD_OFFSET UNITYSDK_OFFSET(0x179E0050)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SET_URI_OFFSET UNITYSDK_OFFSET(0x179E0910)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x179E1350)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x179E0920)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x179E1360)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x179E0930)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179DF9E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x179D8D20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x179D8D40)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodCall_TypeDefinitionIndex = 1313;

	class MethodCall : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* _genericArguments; // 0x10
		::Il2CppArray<::System::Type*>* _methodSignature; // 0x18
		::System::String* _uri; // 0x20
		::System::Collections::IDictionary* InternalProperties; // 0x28
		::Il2CppArray<::System::Object*>* _args; // 0x30
		::System::Reflection::MethodBase* _methodBase; // 0x38
		::System::Collections::IDictionary* ExternalProperties; // 0x40
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x48
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x50
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x58
		::System::String* _methodName; // 0x60
		::System::String* _typeName; // 0x68

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

		::System::Void CopyFrom(::System::Runtime::Remoting::Messaging::IMethodMessage* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_COPYFROM_OFFSET))(this, call);
		}

		::System::Void InitMethodProperty(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITMETHODPROPERTY_OFFSET))(this, key, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Int32 get_ArgCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGCOUNT_OFFSET))(this);
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

		::System::Void set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SET_URI_OFFSET))(this, value);
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

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INIT_OFFSET))(this);
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
