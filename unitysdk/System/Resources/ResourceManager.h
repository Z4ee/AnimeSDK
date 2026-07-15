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

#define SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET UNITYSDK_OFFSET(0x1A8166B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET UNITYSDK_OFFSET(0x1A814FB0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET UNITYSDK_OFFSET(0x1A813FB0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETFIRSTRESOURCESET_OFFSET UNITYSDK_OFFSET(0x1A815950)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x1A8156F0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x1A8160B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x1A817BF0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A8187B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1A818720)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_BASENAME_OFFSET UNITYSDK_OFFSET(0x1A8156D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_FALLBACKLOCATION_OFFSET UNITYSDK_OFFSET(0x1A8156E0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A814B50)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_1_OFFSET UNITYSDK_OFFSET(0x1A816930)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x1A816900)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A8154F0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A8154D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A815660)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_SETAPPXCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1A814FA0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A819140)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A814CE0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A815120)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A814BD0)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceManager_TypeDefinitionIndex = 523;

	class ResourceManager : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet__minResourceSet()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x10030);
		}
		static ::System::String** StaticGet_ResSetTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x10038);
		}
		static ::System::String** StaticGet_ResReaderTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x10040);
		}
		static ::System::String** StaticGet_MscorlibName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x10048);
		}
		static ::System::Int32* StaticGet_MagicNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x56C0);
		}
		static ::System::Int32* StaticGet_DEBUG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x56C4);
		}
		static ::System::Int32* StaticGet_HeaderVersionNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x56C8);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* _resourceSets; // 0x10
		::System::Type* _locationInfo; // 0x18
		::System::Reflection::RuntimeAssembly* m_callingAssembly; // 0x20
		::System::String* BaseNameField; // 0x28
		::System::Resources::IResourceGroveler* resourceGroveler; // 0x30
		::System::String* moduleDir; // 0x38
		::System::Reflection::Assembly* _callingAssembly; // 0x40
		::System::Globalization::CultureInfo* _neutralResourcesCulture; // 0x48
		::System::Version* _satelliteContractVersion; // 0x50
		::System::Collections::Hashtable* ResourceSets; // 0x58
		::System::Reflection::Assembly* MainAssembly; // 0x60
		::System::Type* _userResourceSet; // 0x68
		::System::Resources::ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache; // 0x70
		::System::Resources::UltimateResourceFallbackLocation _fallbackLoc; // 0x78
		::System::Boolean _ignoreCase; // 0x7C
		::System::Boolean UseManifest; // 0x7D
		::System::Boolean UseSatelliteAssem; // 0x7E
		::System::Boolean _lookedForSatelliteContractVersion; // 0x7F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET))(this, a1);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET))(this, a1);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET))(this, a1);
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

		::System::String* GetResourceFileName(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET))(this, a1);
		}

		::System::Resources::ResourceSet* GetFirstResourceSet(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETFIRSTRESOURCESET_OFFSET))(this, a1);
		}

		::System::Resources::ResourceSet* GetResourceSet(::System::Globalization::CultureInfo* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET))(this, a1, a2, a3);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET))(this, a1, a2, a3);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet_1(::System::Globalization::CultureInfo* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void AddResourceSet(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* a1, ::System::String* a2, ::System::Resources::ResourceSet*& a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::String*, ::System::Resources::ResourceSet*&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET))(a1, a2, a3);
		}

		static ::System::Version* GetSatelliteContractVersion(::System::Reflection::Assembly* a1)
		{
			return ((::System::Version*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET))(a1);
		}

		static ::System::Boolean CompareNames(::System::String* a1, ::System::String* a2, ::System::Reflection::AssemblyName* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET))(a1, a2, a3);
		}

		::System::Void SetAppXConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_SETAPPXCONFIGURATION_OFFSET))(this);
		}

		::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_OFFSET))(this, a1);
		}

		::System::String* GetString_1(::System::String* a1, ::System::Globalization::CultureInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_1_OFFSET))(this, a1, a2);
		}
	};
}
