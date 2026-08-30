#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class CookieCollection; }

#define SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E95D2C0)
#define SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E95D380)
#define SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E95D3F0)
#define SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E95D210)

namespace System::Net
{
	inline static constexpr unsigned int CookieCollection_CookieCollectionEnumerator_TypeDefinitionIndex = 2802;

	class CookieCollection_CookieCollectionEnumerator : public ::System::Object
	{
	public:
		::System::Net::CookieCollection* m_cookies; // 0x10
		::System::Int32 m_version; // 0x18
		::System::Int32 m_index; // 0x1C
		::System::Int32 m_count; // 0x20

		::System::Void _ctor(::System::Net::CookieCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COOKIECOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
