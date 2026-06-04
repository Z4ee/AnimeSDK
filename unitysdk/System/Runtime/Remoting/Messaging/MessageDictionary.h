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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1878E720)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ALLOCINTERNALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1878E420)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1878F310)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1878F3C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1878F830)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1878FA30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETINTERNALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x187899E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1878AF30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1878F740)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_INTERNALDICTIONARY_OFFSET UNITYSDK_OFFSET(0x18786600)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1878E540)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1878E550)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1878F810)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1878E560)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1878E900)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1878F820)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1878EE10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x18786480)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ISOVERRIDENKEY_OFFSET UNITYSDK_OFFSET(0x1878E480)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1878F560)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x1878B8E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1878E710)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SET_METHODKEYS_OFFSET UNITYSDK_OFFSET(0x1878E410)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1878F8F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1878AB80)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MessageDictionary_TypeDefinitionIndex = 1314;

	class MessageDictionary : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _methodKeys; // 0x10
		::System::Runtime::Remoting::Messaging::IMethodMessage* _message; // 0x18
		::System::Collections::IDictionary* _internalProperties; // 0x20
		::System::Boolean _ownProperties; // 0x28

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HasUserData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_HASUSERDATA_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_InternalDictionary()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_INTERNALDICTIONARY_OFFSET))(this);
		}

		::System::Void set_MethodKeys(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SET_METHODKEYS_OFFSET))(this, a1);
		}

		::System::Collections::IDictionary* AllocInternalProperties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ALLOCINTERNALPROPERTIES_OFFSET))(this);
		}

		::System::Collections::IDictionary* GetInternalProperties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETINTERNALPROPERTIES_OFFSET))(this);
		}

		::System::Boolean IsOverridenKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ISOVERRIDENKEY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* GetMethodProperty(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GETMETHODPROPERTY_OFFSET))(this, a1);
		}

		::System::Void SetMethodProperty(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_SETMETHODPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_REMOVE_OFFSET))(this, a1);
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

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MESSAGEDICTIONARY_COPYTO_OFFSET))(this, a1, a2);
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
