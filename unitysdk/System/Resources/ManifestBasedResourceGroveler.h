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

#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CANUSEDEFAULTRESOURCECLASSES_OFFSET UNITYSDK_OFFSET(0x1C445A70)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET UNITYSDK_OFFSET(0x1C445CE0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET UNITYSDK_OFFSET(0x1C444160)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x1C443EE0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C445A10)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1C445780)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1C4463D0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C443500)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x1C442DC0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLERESOURCESTREAMMISSING_OFFSET UNITYSDK_OFFSET(0x1C4451D0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLESATELLITEMISSING_OFFSET UNITYSDK_OFFSET(0x1C443810)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_ULTIMATEFALLBACKFIXUP_OFFSET UNITYSDK_OFFSET(0x1C443270)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C442DB0)

namespace System::Resources
{
	inline static constexpr unsigned int ManifestBasedResourceGroveler_TypeDefinitionIndex = 520;

	class ManifestBasedResourceGroveler : public ::System::Object
	{
	public:
		::System::Resources::ResourceManager_ResourceManagerMediator* _mediator; // 0x10

		::System::Void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Resources::ResourceManager_ResourceManagerMediator*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER__CTOR_OFFSET))(this, a1);
		}

		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Threading::StackCrawlMark& a5)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Globalization::CultureInfo* UltimateFallbackFixup(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_ULTIMATEFALLBACKFIXUP_OFFSET))(this, a1);
		}

		static ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a1, ::System::Resources::UltimateResourceFallbackLocation& a2)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Reflection::Assembly*, ::System::Resources::UltimateResourceFallbackLocation&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGE_OFFSET))(a1, a2);
		}

		::System::Resources::ResourceSet* CreateResourceSet(::System::IO::Stream* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::IO::Stream*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET))(this, a1, a2);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::Reflection::RuntimeAssembly* a1, ::System::String* a2, ::System::Threading::StackCrawlMark& a3)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Reflection::RuntimeAssembly*, ::System::String*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETMANIFESTRESOURCESTREAM_OFFSET))(this, a1, a2, a3);
		}

		::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* a1, ::System::String* a2)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Reflection::RuntimeAssembly*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET))(this, a1, a2);
		}

		::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(::System::Globalization::CultureInfo* a1, ::System::Threading::StackCrawlMark& a2)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLY_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanUseDefaultResourceClasses(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CANUSEDEFAULTRESOURCECLASSES_OFFSET))(this, a1, a2);
		}

		::System::String* GetSatelliteAssemblyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLYNAME_OFFSET))(this);
		}

		::System::Void HandleSatelliteMissing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLESATELLITEMISSING_OFFSET))(this);
		}

		::System::Void HandleResourceStreamMissing(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLERESOURCESTREAMMISSING_OFFSET))(this, a1);
		}

		static ::System::Boolean GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* a1, ::System::String*& a2, ::System::Int16& a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::String*&, ::System::Int16&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGEATTRIBUTE_OFFSET))(a1, a2, a3);
		}
	};
}
