#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE_KEYEQUALS_OFFSET UNITYSDK_OFFSET(0x18343570)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18343560)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateHashtable_TypeDefinitionIndex = 1131;

	class SurrogateHashtable : public ::System::Collections::Hashtable
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KeyEquals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE_KEYEQUALS_OFFSET))(this, a1, a2);
		}
	};
}
