#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MutableDecimal.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DECIMALDECCALC_D32ADDCARRY_OFFSET UNITYSDK_OFFSET(0x1BA1D810)
#define SYSTEM_DECIMALDECCALC_D32DIVMOD1E9_OFFSET UNITYSDK_OFFSET(0x1BA1D730)
#define SYSTEM_DECIMALDECCALC_DECADDINT32_OFFSET UNITYSDK_OFFSET(0x1BA1D7F0)
#define SYSTEM_DECIMALDECCALC_DECADD_OFFSET UNITYSDK_OFFSET(0x1BA1D8E0)
#define SYSTEM_DECIMALDECCALC_DECDIVMOD1E9_OFFSET UNITYSDK_OFFSET(0x1BA1D770)
#define SYSTEM_DECIMALDECCALC_DECMUL10_OFFSET UNITYSDK_OFFSET(0x1BA1D830)
#define SYSTEM_DECIMALDECCALC_DECSHIFTLEFT_OFFSET UNITYSDK_OFFSET(0x1BA1D8C0)

namespace System
{
	inline static constexpr unsigned int DecimalDecCalc_TypeDefinitionIndex = 7539;

	class DecimalDecCalc : public ::System::Object
	{
	public:
		static ::System::UInt32 D32DivMod1E9(::System::UInt32 hi32, ::System::UInt32& lo32)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_D32DIVMOD1E9_OFFSET))(hi32, lo32);
		}

		static ::System::UInt32 DecDivMod1E9(::System::MutableDecimal& value)
		{
			return ((::System::UInt32(*)(::System::MutableDecimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECDIVMOD1E9_OFFSET))(value);
		}

		static ::System::Void DecAddInt32(::System::MutableDecimal& value, ::System::UInt32 i)
		{
			return ((::System::Void(*)(::System::MutableDecimal&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECADDINT32_OFFSET))(value, i);
		}

		static ::System::Boolean D32AddCarry(::System::UInt32& value, ::System::UInt32 i)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_D32ADDCARRY_OFFSET))(value, i);
		}

		static ::System::Void DecMul10(::System::MutableDecimal& value)
		{
			return ((::System::Void(*)(::System::MutableDecimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECMUL10_OFFSET))(value);
		}

		static ::System::Void DecShiftLeft(::System::MutableDecimal& value)
		{
			return ((::System::Void(*)(::System::MutableDecimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECSHIFTLEFT_OFFSET))(value);
		}

		static ::System::Void DecAdd(::System::MutableDecimal& value, ::System::MutableDecimal d)
		{
			return ((::System::Void(*)(::System::MutableDecimal&, ::System::MutableDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECADD_OFFSET))(value, d);
		}
	};
}
