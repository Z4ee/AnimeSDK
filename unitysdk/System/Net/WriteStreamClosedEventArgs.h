#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1D89C160)
#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89C110)

namespace System::Net
{
	inline static constexpr unsigned int WriteStreamClosedEventArgs_TypeDefinitionIndex = 3363;

	class WriteStreamClosedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTARGS_GET_ERROR_OFFSET))(this);
		}
	};
}
