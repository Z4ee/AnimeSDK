#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BF12080)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF11FD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventArgs_TypeDefinitionIndex = 9518;

	class PropertyChangingEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_PropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET))(this, a1);
		}
	};
}
