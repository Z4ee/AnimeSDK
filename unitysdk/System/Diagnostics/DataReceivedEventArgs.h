#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTARGS_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DAB2DE0)
#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAB2DF0)
#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2D80)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DataReceivedEventArgs_TypeDefinitionIndex = 2791;

	class DataReceivedEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* data; // 0x10

		::System::Void _ctor(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTARGS__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Data()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTARGS_GET_DATA_OFFSET))(this);
		}
	};
}
