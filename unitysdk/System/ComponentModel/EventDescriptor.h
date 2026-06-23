#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MemberDescriptor.h"

namespace System { class Attribute; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C00A5B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C00A5C0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00A5A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventDescriptor_TypeDefinitionIndex = 2877;

	class EventDescriptor : public ::System::ComponentModel::MemberDescriptor
	{
	public:
		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR__CTOR_OFFSET))(this, name, attrs);
		}

		::System::Void _ctor_1(::System::ComponentModel::MemberDescriptor* descr)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR__CTOR_1_OFFSET))(this, descr);
		}

		::System::Void _ctor_2(::System::ComponentModel::MemberDescriptor* descr, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MemberDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR__CTOR_2_OFFSET))(this, descr, attrs);
		}
	};
}
