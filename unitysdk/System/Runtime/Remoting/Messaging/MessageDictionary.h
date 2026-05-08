#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1A7C3440)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ALLOCINTERNALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A7C30C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7C4A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A7C4B10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A7C5000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A7C5150)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETINTERNALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A7C25F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A7C3660)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A7C4EE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_INTERNALDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1A7C3010)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A7C3230)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A7C3240)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A7C4FE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A7C3250)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1A7C3F60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A7C4FF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1A7C44D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x1A7C2EC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ISOVERRIDENKEY_OFFSET UNITYSDK_OFFSET(0x1A7C3160)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A7C4CF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A7C3CE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A7C3430)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A7C5100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C2EB0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MessageDictionary_TypeDefinitionIndex = 1357;

	class MessageDictionary : public ::System::Object
	{
	public:
		::System::Collections::IDictionary* _internalProperties; // 0x10
		::Il2CppArray<::System::String*>* _methodKeys; // 0x18
		::System::Runtime::Remoting::Messaging::IMethodMessage* _message; // 0x20
		::System::Boolean _ownProperties; // 0x28

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY__CTOR_OFFSET))(this, message);
		}

		::System::Boolean HasUserData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_HASUSERDATA_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_InternalDictionary()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_INTERNALDICTIONARY_OFFSET))(this);
		}

		::System::Collections::IDictionary* AllocInternalProperties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ALLOCINTERNALPROPERTIES_OFFSET))(this);
		}

		::System::Collections::IDictionary* GetInternalProperties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETINTERNALPROPERTIES_OFFSET))(this);
		}

		::System::Boolean IsOverridenKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ISOVERRIDENKEY_OFFSET))(this, key);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Object* GetMethodProperty(::System::String* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETMETHODPROPERTY_OFFSET))(this, key);
		}

		::System::Void SetMethodProperty(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SETMETHODPROPERTY_OFFSET))(this, key, value);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}
	};
}
