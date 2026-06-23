#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B744CF0)
#define SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B744C90)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataErrorsChangedEventArgs_TypeDefinitionIndex = 2849;

	class DataErrorsChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* propertyName; // 0x10

		::System::Void _ctor(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS__CTOR_OFFSET))(this, propertyName);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET))(this);
		}
	};
}
