#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/LicenseProvider.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class License; }
namespace System::ComponentModel { class LicenseContext; }

#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C864F70)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETLICENSE_OFFSET UNITYSDK_OFFSET(0x1C865000)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_ISKEYVALID_OFFSET UNITYSDK_OFFSET(0x1C864F30)
#define SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8653C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicFileLicenseProvider_TypeDefinitionIndex = 2923;

	class LicFileLicenseProvider : public ::System::ComponentModel::LicenseProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsKeyValid(::System::String* key, ::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_ISKEYVALID_OFFSET))(this, key, type);
		}

		::System::String* GetKey(::System::Type* type)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETKEY_OFFSET))(this, type);
		}

		::System::ComponentModel::License* GetLicense(::System::ComponentModel::LicenseContext* context, ::System::Type* type, ::System::Object* instance, ::System::Boolean allowExceptions)
		{
			return ((::System::ComponentModel::License*(*)(::PVOID, ::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICFILELICENSEPROVIDER_GETLICENSE_OFFSET))(this, context, type, instance, allowExceptions);
		}
	};
}
