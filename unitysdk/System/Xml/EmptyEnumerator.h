#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_EMPTYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x185713E0)
#define SYSTEM_XML_EMPTYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x185713C0)
#define SYSTEM_XML_EMPTYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x185713D0)
#define SYSTEM_XML_EMPTYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18571450)

namespace System::Xml
{
	inline static constexpr unsigned int EmptyEnumerator_TypeDefinitionIndex = 1912;

	class EmptyEnumerator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
