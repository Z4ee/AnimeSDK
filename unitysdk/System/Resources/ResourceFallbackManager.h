#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16386210)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x163861C0)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16386120)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceFallbackManager_TypeDefinitionIndex = 522;

	class ResourceFallbackManager : public ::System::Object
	{
	public:
		::System::Globalization::CultureInfo* m_startingCulture; // 0x10
		::System::Globalization::CultureInfo* m_neutralResourcesCulture; // 0x18
		::System::Boolean m_useParents; // 0x20

		::System::Void _ctor(::System::Globalization::CultureInfo* startingCulture, ::System::Globalization::CultureInfo* neutralResourcesCulture, ::System::Boolean useParents)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__CTOR_OFFSET))(this, startingCulture, neutralResourcesCulture, useParents);
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
