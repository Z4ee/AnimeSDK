#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_RESOURCEMANAGER_CULTURENAMERESOURCESETPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9CAC0)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceManager_CultureNameResourceSetPair_TypeDefinitionIndex = 512;

	class ResourceManager_CultureNameResourceSetPair : public ::System::Object
	{
	public:
		::System::Resources::ResourceSet* lastResourceSet; // 0x10
		::System::String* lastCultureName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_CULTURENAMERESOURCESETPAIR__CTOR_OFFSET))(this);
		}
	};
}
