#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_VOLATILE_READ_1_OFFSET UNITYSDK_OFFSET(0x1787F180)
#define SYSTEM_THREADING_VOLATILE_READ_OFFSET UNITYSDK_OFFSET(0x1787F170)
#define SYSTEM_THREADING_VOLATILE_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1787F1A0)
#define SYSTEM_THREADING_VOLATILE_WRITE_OFFSET UNITYSDK_OFFSET(0x1787F190)

namespace System::Threading
{
	inline static constexpr unsigned int Volatile_TypeDefinitionIndex = 880;

	class Volatile : public ::System::Object
	{
	public:
		static ::System::Boolean Read(::System::Boolean& location)
		{
			return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_OFFSET))(location);
		}

		static ::System::Int32 Read_1(::System::Int32& location)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_1_OFFSET))(location);
		}

		static ::System::Void Write(::System::Boolean& location, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_OFFSET))(location, value);
		}

		static ::System::Void Write_1(::System::Int32& location, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_1_OFFSET))(location, value);
		}
	};
}
