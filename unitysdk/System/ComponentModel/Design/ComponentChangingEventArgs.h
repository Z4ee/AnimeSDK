#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::ComponentModel { class MemberDescriptor; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTARGS_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1DEB2C80)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTARGS_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1DEB2C90)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB2CA0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentChangingEventArgs_TypeDefinitionIndex = 3036;

	class ComponentChangingEventArgs : public ::System::EventArgs
	{
	public:
		::System::ComponentModel::MemberDescriptor* member; // 0x10
		::System::Object* component; // 0x18

		::System::Void _ctor(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTARGS__CTOR_OFFSET))(this, component, member);
		}

		::System::Object* get_Component()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTARGS_GET_COMPONENT_OFFSET))(this);
		}

		::System::ComponentModel::MemberDescriptor* get_Member()
		{
			return ((::System::ComponentModel::MemberDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTCHANGINGEVENTARGS_GET_MEMBER_OFFSET))(this);
		}
	};
}
