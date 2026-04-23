#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/StringDictionary.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1A0B15E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1520)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int CaseSensitiveStringDictionary_TypeDefinitionIndex = 2975;

	class CaseSensitiveStringDictionary : public ::System::Collections::Specialized::StringDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_CASESENSITIVESTRINGDICTIONARY_ADD_OFFSET))(this, key, value);
		}
	};
}
