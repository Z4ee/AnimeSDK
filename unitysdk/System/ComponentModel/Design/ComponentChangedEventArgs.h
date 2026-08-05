#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::ComponentModel { class MemberDescriptor; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1C8642B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1C8642C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x1C8642D0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0x1C8642E0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8642F0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentChangedEventArgs_TypeDefinitionIndex = 3034;

	class ComponentChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* newValue; // 0x10
		::System::Object* oldValue; // 0x18
		::System::ComponentModel::MemberDescriptor* member; // 0x20
		::System::Object* component; // 0x28

		::System::Void _ctor(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member, ::System::Object* oldValue, ::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::MemberDescriptor*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS__CTOR_OFFSET))(this, component, member, oldValue, newValue);
		}

		::System::Object* get_Component()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_COMPONENT_OFFSET))(this);
		}

		::System::ComponentModel::MemberDescriptor* get_Member()
		{
			return ((::System::ComponentModel::MemberDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_MEMBER_OFFSET))(this);
		}

		::System::Object* get_NewValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_NEWVALUE_OFFSET))(this);
		}

		::System::Object* get_OldValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGEDEVENTARGS_GET_OLDVALUE_OFFSET))(this);
		}
	};
}
