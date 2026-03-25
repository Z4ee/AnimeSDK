#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x18680A10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18680B20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x18677070)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringDictionary_TypeDefinitionIndex = 2995;

	class StringDictionary : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* contents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}
	};
}
