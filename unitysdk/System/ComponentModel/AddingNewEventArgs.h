#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_GET_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1D453720)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_SET_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1D453730)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4536C0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D453670)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventArgs_TypeDefinitionIndex = 2805;

	class AddingNewEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* newObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* newObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_1_OFFSET))(this, newObject);
		}

		::System::Object* get_NewObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_GET_NEWOBJECT_OFFSET))(this);
		}

		::System::Void set_NewObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_SET_NEWOBJECT_OFFSET))(this, value);
		}
	};
}
