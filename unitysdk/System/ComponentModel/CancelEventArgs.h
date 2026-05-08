#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1A23E480)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_SET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1A23E490)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A23E420)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23E3C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CancelEventArgs_TypeDefinitionIndex = 2829;

	class CancelEventArgs : public ::System::EventArgs
	{
	public:
		::System::Boolean cancel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean cancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS__CTOR_1_OFFSET))(this, cancel);
		}

		::System::Boolean get_Cancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_GET_CANCEL_OFFSET))(this);
		}

		::System::Void set_Cancel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_SET_CANCEL_OFFSET))(this, value);
		}
	};
}
