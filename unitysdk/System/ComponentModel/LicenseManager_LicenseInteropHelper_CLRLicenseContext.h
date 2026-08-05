#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/LicenseContext.h"
#include "unitysdk/System/ComponentModel/LicenseUsageMode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1DEB5EF0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT_GET_USAGEMODE_OFFSET UNITYSDK_OFFSET(0x1DEB5EE0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1DEB5F00)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5ED0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseManager_LicenseInteropHelper_CLRLicenseContext_TypeDefinitionIndex = 2930;

	class LicenseManager_LicenseInteropHelper_CLRLicenseContext : public ::System::ComponentModel::LicenseContext
	{
	public:
		::System::String* key; // 0x10
		::System::Type* type; // 0x18
		::System::ComponentModel::LicenseUsageMode usageMode; // 0x20

		::System::Void _ctor(::System::ComponentModel::LicenseUsageMode usageMode, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::LicenseUsageMode, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT__CTOR_OFFSET))(this, usageMode, type);
		}

		::System::ComponentModel::LicenseUsageMode get_UsageMode()
		{
			return ((::System::ComponentModel::LicenseUsageMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT_GET_USAGEMODE_OFFSET))(this);
		}

		::System::String* GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET))(this, type, resourceAssembly);
		}

		::System::Void SetSavedLicenseKey(::System::Type* type, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_CLRLICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET))(this, type, key);
		}
	};
}
