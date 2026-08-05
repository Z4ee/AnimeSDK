#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1DEB6960)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6900)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventArgs_TypeDefinitionIndex = 2960;

	class PropertyChangingEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* propertyName; // 0x10

		::System::Void _ctor(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS__CTOR_OFFSET))(this, propertyName);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_GET_PROPERTYNAME_OFFSET))(this);
		}
	};
}
