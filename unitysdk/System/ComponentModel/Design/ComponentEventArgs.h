#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::ComponentModel { class IComponent; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTARGS_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1AFDD620)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDD630)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentEventArgs_TypeDefinitionIndex = 3039;

	class ComponentEventArgs : public ::System::EventArgs
	{
	public:
		::System::ComponentModel::IComponent* component; // 0x10

		::System::Void _ctor(::System::ComponentModel::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTARGS__CTOR_OFFSET))(this, component);
		}

		::System::ComponentModel::IComponent* get_Component()
		{
			return ((::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTEVENTARGS_GET_COMPONENT_OFFSET))(this);
		}
	};
}
