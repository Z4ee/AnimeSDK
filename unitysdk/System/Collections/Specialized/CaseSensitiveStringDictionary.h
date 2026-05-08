#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/StringDictionary.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x19201DC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19201E50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19201C90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x19201EE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19201D30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x19201BF0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int CaseSensitiveStringDictionary_TypeDefinitionIndex = 3909;

	class CaseSensitiveStringDictionary : public ::System::Collections::Specialized::StringDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::String* get_Item(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Void Remove(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_REMOVE_OFFSET))(this, key);
		}
	};
}
