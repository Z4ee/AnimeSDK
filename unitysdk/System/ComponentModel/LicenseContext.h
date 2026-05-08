#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/LicenseUsageMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1939AAE0)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1939AAF0)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GET_USAGEMODE_OFFSET UNITYSDK_OFFSET(0x1939AAD0)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1939AB00)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1939AB10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseContext_TypeDefinitionIndex = 2927;

	class LicenseContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::LicenseUsageMode get_UsageMode()
		{
			return ((::System::ComponentModel::LicenseUsageMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GET_USAGEMODE_OFFSET))(this);
		}

		::System::String* GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET))(this, type, resourceAssembly);
		}

		::System::Object* GetService(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSERVICE_OFFSET))(this, type);
		}

		::System::Void SetSavedLicenseKey(::System::Type* type, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET))(this, type, key);
		}
	};
}
