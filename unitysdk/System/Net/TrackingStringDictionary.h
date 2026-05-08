#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/StringDictionary.h"

namespace System { class String; }

#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x19E3B5F0)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19E3B680)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x19E3B5D0)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19E3B790)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x19E3B710)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x19E3B5E0)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19E3B7A0)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E3B530)
#define SYSTEM_NET_TRACKINGSTRINGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3B490)

namespace System::Net
{
	inline static constexpr unsigned int TrackingStringDictionary_TypeDefinitionIndex = 3439;

	class TrackingStringDictionary : public ::System::Collections::Specialized::StringDictionary
	{
	public:
		::System::Boolean isChanged; // 0x18
		::System::Boolean isReadOnly; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean isReadOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY__CTOR_1_OFFSET))(this, isReadOnly);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Void Remove(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::String* get_Item(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGSTRINGDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}
	};
}
