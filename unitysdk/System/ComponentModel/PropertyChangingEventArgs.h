#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x188830B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18883070)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventArgs_TypeDefinitionIndex = 9227;

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
