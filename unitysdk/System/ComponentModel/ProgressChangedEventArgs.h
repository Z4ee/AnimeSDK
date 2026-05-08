#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_PROGRESSPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x19EE84F0)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_USERSTATE_OFFSET UNITYSDK_OFFSET(0x19EE8500)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE8490)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ProgressChangedEventArgs_TypeDefinitionIndex = 2957;

	class ProgressChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* userState; // 0x10
		::System::Int32 progressPercentage; // 0x18

		::System::Void _ctor(::System::Int32 progressPercentage, ::System::Object* userState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS__CTOR_OFFSET))(this, progressPercentage, userState);
		}

		::System::Int32 get_ProgressPercentage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_PROGRESSPERCENTAGE_OFFSET))(this);
		}

		::System::Object* get_UserState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_USERSTATE_OFFSET))(this);
		}
	};
}
