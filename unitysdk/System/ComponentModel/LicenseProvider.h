#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::ComponentModel { class License; }
namespace System::ComponentModel { class LicenseContext; }

#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E20B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseProvider_TypeDefinitionIndex = 2931;

	class LicenseProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
