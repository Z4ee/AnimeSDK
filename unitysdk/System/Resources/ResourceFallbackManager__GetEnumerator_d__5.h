#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class CultureInfo; }
namespace System::Resources { class ResourceFallbackManager; }

#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16386280)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_GLOBALIZATION_CULTUREINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16386510)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16386570)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16386520)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16386270)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x16386260)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceFallbackManager__GetEnumerator_d__5_TypeDefinitionIndex = 523;

	class ResourceFallbackManager__GetEnumerator_d__5 : public ::System::Object
	{
	public:
		::System::Globalization::CultureInfo* __2__current; // 0x10
		::System::Globalization::CultureInfo* _currentCulture_5__1; // 0x18
		::System::Resources::ResourceFallbackManager* __4__this; // 0x20
		::System::Boolean _reachedNeutralResourcesCulture_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* System_Collections_Generic_IEnumerator_System_Globalization_CultureInfo__get_Current()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_GLOBALIZATION_CULTUREINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
