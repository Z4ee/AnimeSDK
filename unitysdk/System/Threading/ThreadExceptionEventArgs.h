#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define SYSTEM_THREADING_THREADEXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A58F130)
#define SYSTEM_THREADING_THREADEXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58F0D0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadExceptionEventArgs_TypeDefinitionIndex = 2712;

	class ThreadExceptionEventArgs : public ::System::EventArgs
	{
	public:
		::System::Exception* exception; // 0x10

		::System::Void _ctor(::System::Exception* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADEXCEPTIONEVENTARGS__CTOR_OFFSET))(this, t);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADEXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET))(this);
		}
	};
}
