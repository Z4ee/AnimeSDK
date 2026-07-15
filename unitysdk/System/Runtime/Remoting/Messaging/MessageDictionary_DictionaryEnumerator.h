#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Runtime::Remoting::Messaging { class MessageDictionary; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x178F3C40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x178F3C70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x178F4370)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x178F4390)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x178F3EB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x178F4260)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x178F3AB0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MessageDictionary_DictionaryEnumerator_TypeDefinitionIndex = 1317;

	class MessageDictionary_DictionaryEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IDictionaryEnumerator* _hashtableEnum; // 0x10
		::System::Runtime::Remoting::Messaging::MessageDictionary* _methodDictionary; // 0x18
		::System::Int32 _posMethod; // 0x20

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::MessageDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_DICTIONARYENUMERATOR_GET_VALUE_OFFSET))(this);
		}
	};
}
