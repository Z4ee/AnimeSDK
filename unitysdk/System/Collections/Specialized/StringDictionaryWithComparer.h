#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/StringDictionary.h"

namespace System { class String; }
namespace System::Collections { class IEqualityComparer; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_ADD_OFFSET UNITYSDK_OFFSET(0x1B1E2B30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1B1E2BC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1E2A00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B1E2C50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1E2AA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E28B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E26F0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringDictionaryWithComparer_TypeDefinitionIndex = 3939;

	class StringDictionaryWithComparer : public ::System::Collections::Specialized::StringDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER__CTOR_1_OFFSET))(this, comparer);
		}

		::System::String* get_Item(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_ADD_OFFSET))(this, key, value);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Void Remove(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARYWITHCOMPARER_REMOVE_OFFSET))(this, key);
		}
	};
}
