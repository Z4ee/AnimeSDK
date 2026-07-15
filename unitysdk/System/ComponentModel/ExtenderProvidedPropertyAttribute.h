#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System::ComponentModel { class IExtenderProvider; }

#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1914EDB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExtenderProvidedPropertyAttribute_TypeDefinitionIndex = 2590;

	class ExtenderProvidedPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::IExtenderProvider* provider; // 0x10

		::System::ComponentModel::IExtenderProvider* get_Provider()
		{
			return ((::System::ComponentModel::IExtenderProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_PROVIDER_OFFSET))(this);
		}
	};
}
