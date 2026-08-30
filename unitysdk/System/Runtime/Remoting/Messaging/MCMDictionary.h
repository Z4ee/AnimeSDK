#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MessageDictionary.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19440880)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x19440810)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MCMDictionary_TypeDefinitionIndex = 1322;

	class MCMDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_InternalKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MCMDictionary_TypeDefinitionIndex)->GetStaticField(0x12CA0);
		}

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY__CCTOR_OFFSET))();
		}
	};
}
