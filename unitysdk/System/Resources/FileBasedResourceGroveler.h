#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Resources { class ResourceManager_ResourceManagerMediator; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET UNITYSDK_OFFSET(0x1BDA7B10)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_FINDRESOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1BDA7910)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x1BDA74B0)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA74A0)

namespace System::Resources
{
	inline static constexpr unsigned int FileBasedResourceGroveler_TypeDefinitionIndex = 517;

	class FileBasedResourceGroveler : public ::System::Object
	{
	public:
		::System::Resources::ResourceManager_ResourceManagerMediator* _mediator; // 0x10

		::System::Void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Resources::ResourceManager_ResourceManagerMediator*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER__CTOR_OFFSET))(this, a1);
		}

		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Threading::StackCrawlMark& a5)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* FindResourceFile(::System::Globalization::CultureInfo* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_FINDRESOURCEFILE_OFFSET))(this, a1, a2);
		}

		::System::Resources::ResourceSet* CreateResourceSet(::System::String* a1)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET))(this, a1);
		}
	};
}
