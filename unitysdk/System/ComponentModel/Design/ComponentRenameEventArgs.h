#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1A56CBD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS_GET_NEWNAME_OFFSET UNITYSDK_OFFSET(0x1A56CBF0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS_GET_OLDNAME_OFFSET UNITYSDK_OFFSET(0x1A56CBE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56CC00)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ComponentRenameEventArgs_TypeDefinitionIndex = 3041;

	class ComponentRenameEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* component; // 0x10
		::System::String* oldName; // 0x18
		::System::String* newName; // 0x20

		::System::Void _ctor(::System::Object* component, ::System::String* oldName, ::System::String* newName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS__CTOR_OFFSET))(this, component, oldName, newName);
		}

		::System::Object* get_Component()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS_GET_COMPONENT_OFFSET))(this);
		}

		::System::String* get_OldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS_GET_OLDNAME_OFFSET))(this);
		}

		::System::String* get_NewName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_COMPONENTRENAMEEVENTARGS_GET_NEWNAME_OFFSET))(this);
		}
	};
}
