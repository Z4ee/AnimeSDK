#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BDABE60)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BDABE10)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDABD70)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceFallbackManager_TypeDefinitionIndex = 524;

	class ResourceFallbackManager : public ::System::Object
	{
	public:
		::System::Globalization::CultureInfo* m_neutralResourcesCulture; // 0x10
		::System::Globalization::CultureInfo* m_startingCulture; // 0x18
		::System::Boolean m_useParents; // 0x20

		::System::Void _ctor(::System::Globalization::CultureInfo* a1, ::System::Globalization::CultureInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_GETENUMERATOR_OFFSET))(this);
		}
	};
}
