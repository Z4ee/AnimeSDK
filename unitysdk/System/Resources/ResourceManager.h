#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Resources/UltimateResourceFallbackLocation.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Resources { class IResourceGroveler; }
namespace System::Resources { class ResourceManager_CultureNameResourceSetPair; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET UNITYSDK_OFFSET(0x16387BA0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET UNITYSDK_OFFSET(0x163869C0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET UNITYSDK_OFFSET(0x16385BD0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETFIRSTRESOURCESET_OFFSET UNITYSDK_OFFSET(0x16387130)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x16386FC0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x16387690)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x16388CC0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x16389410)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x163893F0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_BASENAME_OFFSET UNITYSDK_OFFSET(0x16386FA0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_FALLBACKLOCATION_OFFSET UNITYSDK_OFFSET(0x16386FB0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x163865D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_1_OFFSET UNITYSDK_OFFSET(0x16387DE0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x16387DB0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x16386DD0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x16386DB0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x16386F30)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_SETAPPXCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x163869B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16389A90)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16386760)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16386B30)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16386650)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceManager_TypeDefinitionIndex = 524;

	class ResourceManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ResSetTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x64E0);
		}
		static ::System::String** StaticGet_ResReaderTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x64E8);
		}
		static ::System::Type** StaticGet__minResourceSet()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x64F0);
		}
		static ::System::String** StaticGet_MscorlibName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x64F8);
		}
		static ::System::Int32* StaticGet_HeaderVersionNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x3BC0);
		}
		static ::System::Int32* StaticGet_MagicNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x3BC4);
		}
		static ::System::Int32* StaticGet_DEBUG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x3BC8);
		}
		::System::Reflection::Assembly* _callingAssembly; // 0x10
		::System::Resources::ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache; // 0x18
		::System::String* BaseNameField; // 0x20
		::System::Type* _userResourceSet; // 0x28
		::System::Resources::IResourceGroveler* resourceGroveler; // 0x30
		::System::Reflection::Assembly* MainAssembly; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* _resourceSets; // 0x40
		::System::Type* _locationInfo; // 0x48
		::System::Version* _satelliteContractVersion; // 0x50
		::System::Reflection::RuntimeAssembly* m_callingAssembly; // 0x58
		::System::Globalization::CultureInfo* _neutralResourcesCulture; // 0x60
		::System::Collections::Hashtable* ResourceSets; // 0x68
		::System::String* moduleDir; // 0x70
		::System::Boolean UseManifest; // 0x78
		::System::Boolean UseSatelliteAssem; // 0x79
		::System::Boolean _ignoreCase; // 0x7A
		::System::Boolean _lookedForSatelliteContractVersion; // 0x7B
		::System::Resources::UltimateResourceFallbackLocation _fallbackLoc; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* baseName, ::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_1_OFFSET))(this, baseName, assembly);
		}

		::System::Void _ctor_2(::System::Type* resourceSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_2_OFFSET))(this, resourceSource);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void CommonAssemblyInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET))(this);
		}

		::System::String* get_BaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GET_BASENAME_OFFSET))(this);
		}

		::System::Resources::UltimateResourceFallbackLocation get_FallbackLocation()
		{
			return ((::System::Resources::UltimateResourceFallbackLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GET_FALLBACKLOCATION_OFFSET))(this);
		}

		::System::String* GetResourceFileName(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET))(this, culture);
		}

		::System::Resources::ResourceSet* GetFirstResourceSet(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETFIRSTRESOURCESET_OFFSET))(this, culture);
		}

		::System::Resources::ResourceSet* GetResourceSet(::System::Globalization::CultureInfo* culture, ::System::Boolean createIfNotExists, ::System::Boolean tryParents)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET))(this, culture, createIfNotExists, tryParents);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* culture, ::System::Boolean createIfNotExists, ::System::Boolean tryParents)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET))(this, culture, createIfNotExists, tryParents);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet_1(::System::Globalization::CultureInfo* requestedCulture, ::System::Boolean createIfNotExists, ::System::Boolean tryParents, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_1_OFFSET))(this, requestedCulture, createIfNotExists, tryParents, stackMark);
		}

		static ::System::Void AddResourceSet(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* localResourceSets, ::System::String* cultureName, ::System::Resources::ResourceSet*& rs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::String*, ::System::Resources::ResourceSet*&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET))(localResourceSets, cultureName, rs);
		}

		static ::System::Version* GetSatelliteContractVersion(::System::Reflection::Assembly* a)
		{
			return ((::System::Version*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET))(a);
		}

		static ::System::Boolean CompareNames(::System::String* asmTypeName1, ::System::String* typeName2, ::System::Reflection::AssemblyName* asmName2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET))(asmTypeName1, typeName2, asmName2);
		}

		::System::Void SetAppXConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_SETAPPXCONFIGURATION_OFFSET))(this);
		}

		::System::String* GetString(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_OFFSET))(this, name);
		}

		::System::String* GetString_1(::System::String* name, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_1_OFFSET))(this, name, culture);
		}
	};
}
