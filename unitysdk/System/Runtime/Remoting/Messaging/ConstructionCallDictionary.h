#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MessageDictionary.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_GETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A3AA7A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_SETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A3AAB50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3AAD60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AA730)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionCallDictionary_TypeDefinitionIndex = 1342;

	class ConstructionCallDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_InternalKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstructionCallDictionary_TypeDefinitionIndex)->GetStaticField(0x1B0);
		}

		::System::Void _ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CTOR_OFFSET))(this, message);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY__CCTOR_OFFSET))();
		}

		::System::Object* GetMethodProperty(::System::String* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_GETMETHODPROPERTY_OFFSET))(this, key);
		}

		::System::Void SetMethodProperty(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_SETMETHODPROPERTY_OFFSET))(this, key, value);
		}
	};
}
