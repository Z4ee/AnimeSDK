#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define SYSTEM_IO_ERROREVENTARGS_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x193B2A30)
#define SYSTEM_IO_ERROREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x193B29D0)

namespace System::IO
{
	inline static constexpr unsigned int ErrorEventArgs_TypeDefinitionIndex = 3220;

	class ErrorEventArgs : public ::System::EventArgs
	{
	public:
		::System::Exception* exception; // 0x10

		::System::Void _ctor(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROREVENTARGS__CTOR_OFFSET))(this, exception);
		}

		::System::Exception* GetException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROREVENTARGS_GETEXCEPTION_OFFSET))(this);
		}
	};
}
