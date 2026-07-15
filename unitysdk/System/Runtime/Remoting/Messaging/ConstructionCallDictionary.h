#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MessageDictionary.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_GETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x178ED5C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_SETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x178EE120)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x178EE6B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x178EBFF0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionCallDictionary_TypeDefinitionIndex = 1301;

	class ConstructionCallDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_InternalKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstructionCallDictionary_TypeDefinitionIndex)->GetStaticField(0x18AC0);
		}

		::System::Void _ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CCTOR_OFFSET))();
		}

		::System::Object* GetMethodProperty(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_GETMETHODPROPERTY_OFFSET))(this, a1);
		}

		::System::Void SetMethodProperty(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_SETMETHODPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
