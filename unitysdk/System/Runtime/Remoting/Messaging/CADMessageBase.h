#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting::Messaging { class CADArgHolder; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x163AA520)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x163A7B00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x163A8080)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_ISPOSSIBLETOIGNOREMARSHAL_OFFSET UNITYSDK_OFFSET(0x163A9130)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x163A9FA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENT_OFFSET UNITYSDK_OFFSET(0x163A9250)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x163A83D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_SAVELOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x163AA1E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x163AA0C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENT_OFFSET UNITYSDK_OFFSET(0x163A9490)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x163A8F30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x163A7750)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMessageBase_TypeDefinitionIndex = 1292;

	class CADMessageBase : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::CADArgHolder* _callContext; // 0x10
		::Il2CppArray<::System::Byte>* serializedMethod; // 0x18
		::Il2CppArray<::System::Byte>* _serializedArgs; // 0x20
		::Il2CppArray<::System::Object*>* _args; // 0x28
		::System::Int32 _propertyCount; // 0x30

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE__CTOR_OFFSET))(this, msg);
		}

		::System::Reflection::MethodBase* GetMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETMETHOD_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* GetSignature(::System::Reflection::MethodBase* methodBase, ::System::Boolean load)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Reflection::MethodBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETSIGNATURE_OFFSET))(methodBase, load);
		}

		static ::System::Int32 MarshalProperties(::System::Collections::IDictionary* dict, ::System::Collections::ArrayList*& args)
		{
			return ((::System::Int32(*)(::System::Collections::IDictionary*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALPROPERTIES_OFFSET))(dict, args);
		}

		static ::System::Void UnmarshalProperties(::System::Collections::IDictionary* dict, ::System::Int32 count, ::System::Collections::ArrayList* args)
		{
			return ((::System::Void(*)(::System::Collections::IDictionary*, ::System::Int32, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALPROPERTIES_OFFSET))(dict, count, args);
		}

		static ::System::Boolean IsPossibleToIgnoreMarshal(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_ISPOSSIBLETOIGNOREMARSHAL_OFFSET))(obj);
		}

		::System::Object* MarshalArgument(::System::Object* arg, ::System::Collections::ArrayList*& args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENT_OFFSET))(this, arg, args);
		}

		::System::Object* UnmarshalArgument(::System::Object* arg, ::System::Collections::ArrayList* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENT_OFFSET))(this, arg, args);
		}

		::Il2CppArray<::System::Object*>* MarshalArguments(::Il2CppArray<::System::Object*>* arguments, ::System::Collections::ArrayList*& args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENTS_OFFSET))(this, arguments, args);
		}

		::Il2CppArray<::System::Object*>* UnmarshalArguments(::Il2CppArray<::System::Object*>* arguments, ::System::Collections::ArrayList* args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENTS_OFFSET))(this, arguments, args);
		}

		::System::Void SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* msg, ::System::Collections::ArrayList*& serializeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_SAVELOGICALCALLCONTEXT_OFFSET))(this, msg, serializeList);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(::System::Collections::ArrayList* args)
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETLOGICALCALLCONTEXT_OFFSET))(this, args);
		}
	};
}
