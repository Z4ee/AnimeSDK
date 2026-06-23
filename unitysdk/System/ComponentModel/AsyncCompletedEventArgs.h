#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_CANCELLED_OFFSET UNITYSDK_OFFSET(0x1C2DFE30)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1C2DFE40)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET UNITYSDK_OFFSET(0x1C2DFE50)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_RAISEEXCEPTIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1C2DFE60)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2DFDC0)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DFD70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncCompletedEventArgs_TypeDefinitionIndex = 2811;

	class AsyncCompletedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* userState; // 0x10
		::System::Exception* error; // 0x18
		::System::Boolean cancelled; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Exception* error, ::System::Boolean cancelled, ::System::Object* userState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this, error, cancelled, userState);
		}

		::System::Boolean get_Cancelled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_CANCELLED_OFFSET))(this);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_ERROR_OFFSET))(this);
		}

		::System::Object* get_UserState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET))(this);
		}

		::System::Void RaiseExceptionIfNecessary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_RAISEEXCEPTIONIFNECESSARY_OFFSET))(this);
		}
	};
}
