#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class ComponentCollection; }

#define SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE_FILTERCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1A23F0D0)
#define SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23F0C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ContainerFilterService_TypeDefinitionIndex = 2845;

	class ContainerFilterService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::ComponentCollection* FilterComponents(::System::ComponentModel::ComponentCollection* components)
		{
			return ((::System::ComponentModel::ComponentCollection*(*)(::PVOID, ::System::ComponentModel::ComponentCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE_FILTERCOMPONENTS_OFFSET))(this, components);
		}
	};
}
