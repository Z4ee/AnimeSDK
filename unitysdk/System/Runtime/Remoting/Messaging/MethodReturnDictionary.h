#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MessageDictionary.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class IMethodReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19446EE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x19446360)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodReturnDictionary_TypeDefinitionIndex = 1326;

	class MethodReturnDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_InternalReturnKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MethodReturnDictionary_TypeDefinitionIndex)->GetStaticField(0x13030);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_InternalExceptionKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MethodReturnDictionary_TypeDefinitionIndex)->GetStaticField(0x13038);
		}

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CCTOR_OFFSET))();
		}
	};
}
