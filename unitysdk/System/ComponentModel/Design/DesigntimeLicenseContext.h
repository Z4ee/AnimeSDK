#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/LicenseContext.h"
#include "unitysdk/System/ComponentModel/LicenseUsageMode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1DAB1470)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT_GET_USAGEMODE_OFFSET UNITYSDK_OFFSET(0x1DAB1460)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1DAB1480)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB14D0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesigntimeLicenseContext_TypeDefinitionIndex = 3052;

	class DesigntimeLicenseContext : public ::System::ComponentModel::LicenseContext
	{
	public:
		::System::Collections::Hashtable* savedLicenseKeys; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::LicenseUsageMode get_UsageMode()
		{
			return ((::System::ComponentModel::LicenseUsageMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT_GET_USAGEMODE_OFFSET))(this);
		}

		::System::String* GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET))(this, type, resourceAssembly);
		}

		::System::Void SetSavedLicenseKey(::System::Type* type, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET))(this, type, key);
		}
	};
}
