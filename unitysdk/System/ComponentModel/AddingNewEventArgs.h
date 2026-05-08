#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_GET_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1AFDCCE0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_SET_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1AFDCCF0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFDCC80)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDCC30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventArgs_TypeDefinitionIndex = 2806;

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
