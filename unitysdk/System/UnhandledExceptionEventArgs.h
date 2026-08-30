#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }

#define SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_EXCEPTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC80590)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_ISTERMINATING_OFFSET UNITYSDK_OFFSET(0x1BC805A0)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC80550)

namespace System
{
	inline static constexpr unsigned int UnhandledExceptionEventArgs_TypeDefinitionIndex = 360;

	class UnhandledExceptionEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* _Exception; // 0x10
		::System::Boolean _IsTerminating; // 0x18

		::System::Void _ctor(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_ExceptionObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_EXCEPTIONOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsTerminating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_ISTERMINATING_OFFSET))(this);
		}
	};
}
