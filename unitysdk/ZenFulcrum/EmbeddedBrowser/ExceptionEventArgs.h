#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C511F50)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C511F60)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C511EF0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExceptionEventArgs_TypeDefinitionIndex = 31172;

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
