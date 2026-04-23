#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A6BC520)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A6BC530)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BC4F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExceptionEventArgs_TypeDefinitionIndex = 36305;

	class ExceptionEventArgs : public ::System::EventArgs
	{
	public:
		::System::Exception* _Exception_k__BackingField; // 0x10

		::System::Void _ctor(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS__CTOR_OFFSET))(this, exception);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Void set_Exception(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS_SET_EXCEPTION_OFFSET))(this, value);
		}
	};
}
