#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E925C20)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E925BF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangedEventArgs_TypeDefinitionIndex = 2615;

	class PropertyChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* propertyName; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET))(this);
		}
	};
}
