#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A23FB10)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A23FB20)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A23FB30)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23FAB0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int ResolveNameEventArgs_TypeDefinitionIndex = 3114;

	class ResolveNameEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* value; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_GET_NAME_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_SET_VALUE_OFFSET))(this, value);
		}
	};
}
