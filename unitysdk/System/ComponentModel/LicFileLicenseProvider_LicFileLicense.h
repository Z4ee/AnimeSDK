#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/License.h"

namespace System { class String; }
namespace System::ComponentModel { class LicFileLicenseProvider; }

#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_LICFILELICENSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5CC7C0)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_LICFILELICENSE_GET_LICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1D5CC7B0)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_LICFILELICENSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC7A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicFileLicenseProvider_LicFileLicense_TypeDefinitionIndex = 2924;

	class LicFileLicenseProvider_LicFileLicense : public ::System::ComponentModel::License
	{
	public:
		::System::String* key; // 0x10

		::System::Void _ctor(::System::ComponentModel::LicFileLicenseProvider* owner, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::LicFileLicenseProvider*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_LICFILELICENSE__CTOR_OFFSET))(this, owner, key);
		}

		::System::String* get_LicenseKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_LICFILELICENSE_GET_LICENSEKEY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_LICFILELICENSE_DISPOSE_OFFSET))(this);
		}
	};
}
