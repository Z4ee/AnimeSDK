#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class ITypeDescriptorContext; }

#define SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_EDITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C64CDA0)
#define SYSTEM_COMPONENTMODEL_COMPONENTEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64CDC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentEditor_TypeDefinitionIndex = 2820;

	class ComponentEditor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTEDITOR__CTOR_OFFSET))(this);
		}

		::System::Boolean EditComponent(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_EDITCOMPONENT_OFFSET))(this, component);
		}
	};
}
