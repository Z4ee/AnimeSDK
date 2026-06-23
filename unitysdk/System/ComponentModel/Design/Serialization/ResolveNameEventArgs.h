#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C64D830)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C64D840)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C64D850)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_RESOLVENAMEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64D7D0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int ResolveNameEventArgs_TypeDefinitionIndex = 3113;

	class ResolveNameEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* name; // 0x10
		::System::Object* value; // 0x18

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
