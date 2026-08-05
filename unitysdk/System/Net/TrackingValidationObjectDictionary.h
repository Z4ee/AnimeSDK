#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/StringDictionary.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Net { class TrackingValidationObjectDictionary_ValidateAndParseValue; }

#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1DECB5B0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DECB5C0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1DECB230)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DECB590)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_INTERNALGET_OFFSET UNITYSDK_OFFSET(0x1DECB250)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_INTERNALSET_OFFSET UNITYSDK_OFFSET(0x1DECB3E0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_PERSISTVALUE_OFFSET UNITYSDK_OFFSET(0x1DECADF0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DECB6C0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1DECB240)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DECB5A0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECAD50)

namespace System::Net
{
	inline static constexpr unsigned int TrackingValidationObjectDictionary_TypeDefinitionIndex = 3439;

	class TrackingValidationObjectDictionary : public ::System::Collections::Specialized::StringDictionary
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Object*>* internalObjects; // 0x18
		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>* validators; // 0x20
		::System::Boolean _IsChanged_k__BackingField; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>* validators)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY__CTOR_OFFSET))(this, validators);
		}

		::System::Void PersistValue(::System::String* key, ::System::String* value, ::System::Boolean addValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_PERSISTVALUE_OFFSET))(this, key, value, addValue);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Object* InternalGet(::System::String* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_INTERNALGET_OFFSET))(this, key);
		}

		::System::Void InternalSet(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_INTERNALSET_OFFSET))(this, key, value);
		}

		::System::String* get_Item(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Void Remove(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_REMOVE_OFFSET))(this, key);
		}
	};
}
