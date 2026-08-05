#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_GETTYPES_OFFSET UNITYSDK_OFFSET(0x1E446E30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1E447020)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E447490)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodRef_TypeDefinitionIndex = 1334;

	class CADMethodRef : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* generic_arg_names; // 0x10
		::System::String* methodName; // 0x18
		::System::String* typeName; // 0x20
		::Il2CppArray<::System::String*>* param_names; // 0x28
		::System::Boolean ctor; // 0x30

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF__CTOR_OFFSET))(this, msg);
		}

		::Il2CppArray<::System::Type*>* GetTypes(::Il2CppArray<::System::String*>* typeArray)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_GETTYPES_OFFSET))(this, typeArray);
		}

		::System::Reflection::MethodBase* Resolve()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_RESOLVE_OFFSET))(this);
		}
	};
}
