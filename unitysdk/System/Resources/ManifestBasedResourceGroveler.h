#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Resources/UltimateResourceFallbackLocation.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::IO { class Stream; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Resources { class ResourceManager_ResourceManagerMediator; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CANUSEDEFAULTRESOURCECLASSES_OFFSET UNITYSDK_OFFSET(0x16385360)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET UNITYSDK_OFFSET(0x163855D0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET UNITYSDK_OFFSET(0x163842A0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x16384070)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x16385300)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGE_OFFSET UNITYSDK_OFFSET(0x16385070)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x16385AC0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x163838A0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x16383180)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLERESOURCESTREAMMISSING_OFFSET UNITYSDK_OFFSET(0x16384CB0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLESATELLITEMISSING_OFFSET UNITYSDK_OFFSET(0x16383BA0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_ULTIMATEFALLBACKFIXUP_OFFSET UNITYSDK_OFFSET(0x163836A0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER__CTOR_OFFSET UNITYSDK_OFFSET(0x16383170)

namespace System::Resources
{
	inline static constexpr unsigned int ManifestBasedResourceGroveler_TypeDefinitionIndex = 518;

	class ManifestBasedResourceGroveler : public ::System::Object
	{
	public:
		::System::Resources::ResourceManager_ResourceManagerMediator* _mediator; // 0x10

		::System::Void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Resources::ResourceManager_ResourceManagerMediator*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER__CTOR_OFFSET))(this, mediator);
		}

		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* localResourceSets, ::System::Boolean tryParents, ::System::Boolean createIfNotExists, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(this, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
		}

		::System::Globalization::CultureInfo* UltimateFallbackFixup(::System::Globalization::CultureInfo* lookForCulture)
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_ULTIMATEFALLBACKFIXUP_OFFSET))(this, lookForCulture);
		}

		static ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ::System::Resources::UltimateResourceFallbackLocation& fallbackLocation)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Reflection::Assembly*, ::System::Resources::UltimateResourceFallbackLocation&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGE_OFFSET))(a, fallbackLocation);
		}

		::System::Resources::ResourceSet* CreateResourceSet(::System::IO::Stream* store, ::System::Reflection::Assembly* assembly)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::IO::Stream*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET))(this, store, assembly);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::Reflection::RuntimeAssembly* satellite, ::System::String* fileName, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Reflection::RuntimeAssembly*, ::System::String*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETMANIFESTRESOURCESTREAM_OFFSET))(this, satellite, fileName, stackMark);
		}

		::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* satellite, ::System::String* name)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Reflection::RuntimeAssembly*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET))(this, satellite, name);
		}

		::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(::System::Globalization::CultureInfo* lookForCulture, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLY_OFFSET))(this, lookForCulture, stackMark);
		}

		::System::Boolean CanUseDefaultResourceClasses(::System::String* readerTypeName, ::System::String* resSetTypeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CANUSEDEFAULTRESOURCECLASSES_OFFSET))(this, readerTypeName, resSetTypeName);
		}

		::System::String* GetSatelliteAssemblyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLYNAME_OFFSET))(this);
		}

		::System::Void HandleSatelliteMissing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLESATELLITEMISSING_OFFSET))(this);
		}

		::System::Void HandleResourceStreamMissing(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLERESOURCESTREAMMISSING_OFFSET))(this, fileName);
		}

		static ::System::Boolean GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ::System::String*& cultureName, ::System::Int16& fallbackLocation)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::String*&, ::System::Int16&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGEATTRIBUTE_OFFSET))(assembly, cultureName, fallbackLocation);
		}
	};
}
