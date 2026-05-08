#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class StringCollection; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19202050)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19202150)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19202230)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19202310)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19201F70)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringEnumerator_TypeDefinitionIndex = 3932;

	class StringEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IEnumerable* temp; // 0x10
		::System::Collections::IEnumerator* baseEnumerator; // 0x18

		::System::Void _ctor(::System::Collections::Specialized::StringCollection* mappings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::StringCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR__CTOR_OFFSET))(this, mappings);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
