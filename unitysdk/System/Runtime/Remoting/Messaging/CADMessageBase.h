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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x18787A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x187852A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x187857A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_ISPOSSIBLETOIGNOREMARSHAL_OFFSET UNITYSDK_OFFSET(0x187868D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18787500)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENT_OFFSET UNITYSDK_OFFSET(0x187869F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18785A90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_SAVELOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x18787700)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18787600)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENT_OFFSET UNITYSDK_OFFSET(0x18786C40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x187866D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18784F20)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMessageBase_TypeDefinitionIndex = 1293;

	class CADMessageBase : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* serializedMethod; // 0x10
		::System::Runtime::Remoting::Messaging::CADArgHolder* _callContext; // 0x18
		::Il2CppArray<::System::Object*>* _args; // 0x20
		::Il2CppArray<::System::Byte>* _serializedArgs; // 0x28
		::System::Int32 _propertyCount; // 0x30

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Reflection::MethodBase* GetMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETMETHOD_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* GetSignature(::System::Reflection::MethodBase* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Reflection::MethodBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETSIGNATURE_OFFSET))(a1, a2);
		}

		static ::System::Int32 MarshalProperties(::System::Collections::IDictionary* a1, ::System::Collections::ArrayList*& a2)
		{
			return ((::System::Int32(*)(::System::Collections::IDictionary*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALPROPERTIES_OFFSET))(a1, a2);
		}

		static ::System::Void UnmarshalProperties(::System::Collections::IDictionary* a1, ::System::Int32 a2, ::System::Collections::ArrayList* a3)
		{
			return ((::System::Void(*)(::System::Collections::IDictionary*, ::System::Int32, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALPROPERTIES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsPossibleToIgnoreMarshal(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_ISPOSSIBLETOIGNOREMARSHAL_OFFSET))(a1);
		}

		::System::Object* MarshalArgument(::System::Object* a1, ::System::Collections::ArrayList*& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENT_OFFSET))(this, a1, a2);
		}

		::System::Object* UnmarshalArgument(::System::Object* a1, ::System::Collections::ArrayList* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENT_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* MarshalArguments(::Il2CppArray<::System::Object*>* a1, ::System::Collections::ArrayList*& a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENTS_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* UnmarshalArguments(::Il2CppArray<::System::Object*>* a1, ::System::Collections::ArrayList* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENTS_OFFSET))(this, a1, a2);
		}

		::System::Void SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* a1, ::System::Collections::ArrayList*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*, ::System::Collections::ArrayList*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_SAVELOGICALCALLCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(::System::Collections::ArrayList* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETLOGICALCALLCONTEXT_OFFSET))(this, a1);
		}
	};
}
