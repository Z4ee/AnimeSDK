#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Resources { class ResourceManager_ResourceManagerMediator; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET UNITYSDK_OFFSET(0x19602230)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_FINDRESOURCEFILE_OFFSET UNITYSDK_OFFSET(0x19602130)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x19601DF0)
#define SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER__CTOR_OFFSET UNITYSDK_OFFSET(0x19601DE0)

namespace System::Resources
{
	inline static constexpr unsigned int FileBasedResourceGroveler_TypeDefinitionIndex = 501;

	class FileBasedResourceGroveler : public ::System::Object
	{
	public:
		::System::Resources::ResourceManager_ResourceManagerMediator* _mediator; // 0x10

		::System::Void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Resources::ResourceManager_ResourceManagerMediator*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER__CTOR_OFFSET))(this, mediator);
		}

		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* localResourceSets, ::System::Boolean tryParents, ::System::Boolean createIfNotExists, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(this, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
		}

		::System::String* FindResourceFile(::System::Globalization::CultureInfo* culture, ::System::String* fileName)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_FINDRESOURCEFILE_OFFSET))(this, culture, fileName);
		}

		::System::Resources::ResourceSet* CreateResourceSet(::System::String* file)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FILEBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET))(this, file);
		}
	};
}
