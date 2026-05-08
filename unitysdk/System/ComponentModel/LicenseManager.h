#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/LicenseUsageMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::ComponentModel { class License; }
namespace System::ComponentModel { class LicenseContext; }
namespace System::ComponentModel { class LicenseProvider; }

#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CACHEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A56E0A0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x1A56E400)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A56E390)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDNOLICENSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A56EA30)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A56EC20)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A56EB00)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETLICENSEINTEROPHELPERTYPE_OFFSET UNITYSDK_OFFSET(0x1A56ED40)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A56DC60)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_USAGEMODE_OFFSET UNITYSDK_OFFSET(0x1A56DFE0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISLICENSED_OFFSET UNITYSDK_OFFSET(0x1A56ED90)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_1_OFFSET UNITYSDK_OFFSET(0x1A56F0E0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A56EF80)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LOCKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A56E710)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_SET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A56DE50)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_UNLOCKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A56E8A0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNALRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A56F1B0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A56EEF0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_1_OFFSET UNITYSDK_OFFSET(0x1A56F870)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1A56F6E0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A56F9A0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56DC50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseManager_TypeDefinitionIndex = 2929;

	class LicenseManager : public ::System::Object
	{
	public:
		static ::System::ComponentModel::LicenseContext** StaticGet_context()
		{
			return (::System::ComponentModel::LicenseContext**)Il2CppClass::FromTypeDefinitionIndex(LicenseManager_TypeDefinitionIndex)->GetStaticField(0x3020);
		}
		static ::System::Object** StaticGet_selfLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LicenseManager_TypeDefinitionIndex)->GetStaticField(0x3028);
		}
		static ::System::Collections::Hashtable** StaticGet_providers()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(LicenseManager_TypeDefinitionIndex)->GetStaticField(0x3030);
		}
		static ::System::Collections::Hashtable** StaticGet_providerInstances()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(LicenseManager_TypeDefinitionIndex)->GetStaticField(0x3038);
		}
		static ::System::Object** StaticGet_contextLockHolder()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LicenseManager_TypeDefinitionIndex)->GetStaticField(0x3040);
		}
		static ::System::Object** StaticGet_internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LicenseManager_TypeDefinitionIndex)->GetStaticField(0x3048);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::ComponentModel::LicenseContext* get_CurrentContext()
		{
			return ((::System::ComponentModel::LicenseContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_CURRENTCONTEXT_OFFSET))();
		}

		static ::System::Void set_CurrentContext(::System::ComponentModel::LicenseContext* value)
		{
			return ((::System::Void(*)(::System::ComponentModel::LicenseContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_SET_CURRENTCONTEXT_OFFSET))(value);
		}

		static ::System::ComponentModel::LicenseUsageMode get_UsageMode()
		{
			return ((::System::ComponentModel::LicenseUsageMode(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_USAGEMODE_OFFSET))();
		}

		static ::System::Void CacheProvider(::System::Type* type, ::System::ComponentModel::LicenseProvider* provider)
		{
			return ((::System::Void(*)(::System::Type*, ::System::ComponentModel::LicenseProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CACHEPROVIDER_OFFSET))(type, provider);
		}

		static ::System::Object* CreateWithContext(::System::Type* type, ::System::ComponentModel::LicenseContext* creationContext)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::ComponentModel::LicenseContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_OFFSET))(type, creationContext);
		}

		static ::System::Object* CreateWithContext_1(::System::Type* type, ::System::ComponentModel::LicenseContext* creationContext, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::ComponentModel::LicenseContext*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_1_OFFSET))(type, creationContext, args);
		}

		static ::System::Boolean GetCachedNoLicenseProvider(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDNOLICENSEPROVIDER_OFFSET))(type);
		}

		static ::System::ComponentModel::LicenseProvider* GetCachedProvider(::System::Type* type)
		{
			return ((::System::ComponentModel::LicenseProvider*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDER_OFFSET))(type);
		}

		static ::System::ComponentModel::LicenseProvider* GetCachedProviderInstance(::System::Type* providerType)
		{
			return ((::System::ComponentModel::LicenseProvider*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDERINSTANCE_OFFSET))(providerType);
		}

		static ::System::IntPtr GetLicenseInteropHelperType()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETLICENSEINTEROPHELPERTYPE_OFFSET))();
		}

		static ::System::Boolean IsLicensed(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISLICENSED_OFFSET))(type);
		}

		static ::System::Boolean IsValid(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_OFFSET))(type);
		}

		static ::System::Boolean IsValid_1(::System::Type* type, ::System::Object* instance, ::System::ComponentModel::License*& license)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*, ::System::ComponentModel::License*&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_1_OFFSET))(type, instance, license);
		}

		static ::System::Void LockContext(::System::Object* contextUser)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LOCKCONTEXT_OFFSET))(contextUser);
		}

		static ::System::Void UnlockContext(::System::Object* contextUser)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_UNLOCKCONTEXT_OFFSET))(contextUser);
		}

		static ::System::Boolean ValidateInternal(::System::Type* type, ::System::Object* instance, ::System::Boolean allowExceptions, ::System::ComponentModel::License*& license)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*, ::System::Boolean, ::System::ComponentModel::License*&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNAL_OFFSET))(type, instance, allowExceptions, license);
		}

		static ::System::Boolean ValidateInternalRecursive(::System::ComponentModel::LicenseContext* context, ::System::Type* type, ::System::Object* instance, ::System::Boolean allowExceptions, ::System::ComponentModel::License*& license, ::System::String*& licenseKey)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, ::System::Boolean, ::System::ComponentModel::License*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNALRECURSIVE_OFFSET))(context, type, instance, allowExceptions, license, licenseKey);
		}

		static ::System::Void Validate(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_OFFSET))(type);
		}

		static ::System::ComponentModel::License* Validate_1(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::ComponentModel::License*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_1_OFFSET))(type, instance);
		}
	};
}
