#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_GETTYPES_OFFSET UNITYSDK_OFFSET(0x1BDDA240)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1BDD6490)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD5D30)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodRef_TypeDefinitionIndex = 1301;

	class CADMethodRef : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* param_names; // 0x10
		::System::String* typeName; // 0x18
		::Il2CppArray<::System::String*>* generic_arg_names; // 0x20
		::System::String* methodName; // 0x28
		::System::Boolean ctor; // 0x30

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF__CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* GetTypes(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_GETTYPES_OFFSET))(this, a1);
		}

		::System::Reflection::MethodBase* Resolve()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_RESOLVE_OFFSET))(this);
		}
	};
}
