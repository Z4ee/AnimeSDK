#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_VOLATILE_READ_1_OFFSET UNITYSDK_OFFSET(0x18637990)
#define SYSTEM_THREADING_VOLATILE_READ_OFFSET UNITYSDK_OFFSET(0x18637980)
#define SYSTEM_THREADING_VOLATILE_WRITE_1_OFFSET UNITYSDK_OFFSET(0x186379B0)
#define SYSTEM_THREADING_VOLATILE_WRITE_OFFSET UNITYSDK_OFFSET(0x186379A0)

namespace System::Threading
{
	inline static constexpr unsigned int Volatile_TypeDefinitionIndex = 879;

	class Volatile : public ::System::Object
	{
	public:
		static ::System::Boolean Read(::System::Boolean& a1)
		{
			return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_OFFSET))(a1);
		}

		static ::System::Int32 Read_1(::System::Int32& a1)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_1_OFFSET))(a1);
		}

		static ::System::Void Write(::System::Boolean& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_OFFSET))(a1, a2);
		}

		static ::System::Void Write_1(::System::Int32& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_1_OFFSET))(a1, a2);
		}
	};
}
