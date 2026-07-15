#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MutableDecimal.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DECIMALDECCALC_D32ADDCARRY_OFFSET UNITYSDK_OFFSET(0x1D126A10)
#define SYSTEM_DECIMALDECCALC_D32DIVMOD1E9_OFFSET UNITYSDK_OFFSET(0x1D126930)
#define SYSTEM_DECIMALDECCALC_DECADDINT32_OFFSET UNITYSDK_OFFSET(0x1D1269F0)
#define SYSTEM_DECIMALDECCALC_DECADD_OFFSET UNITYSDK_OFFSET(0x1D126AE0)
#define SYSTEM_DECIMALDECCALC_DECDIVMOD1E9_OFFSET UNITYSDK_OFFSET(0x1D126970)
#define SYSTEM_DECIMALDECCALC_DECMUL10_OFFSET UNITYSDK_OFFSET(0x1D126A30)
#define SYSTEM_DECIMALDECCALC_DECSHIFTLEFT_OFFSET UNITYSDK_OFFSET(0x1D126AC0)

namespace System
{
	inline static constexpr unsigned int DecimalDecCalc_TypeDefinitionIndex = 4952;

	class DecimalDecCalc : public ::System::Object
	{
	public:
		static ::System::UInt32 D32DivMod1E9(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_D32DIVMOD1E9_OFFSET))(a1, a2);
		}

		static ::System::UInt32 DecDivMod1E9(::System::MutableDecimal& a1)
		{
			return ((::System::UInt32(*)(::System::MutableDecimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECDIVMOD1E9_OFFSET))(a1);
		}

		static ::System::Void DecAddInt32(::System::MutableDecimal& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::MutableDecimal&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECADDINT32_OFFSET))(a1, a2);
		}

		static ::System::Boolean D32AddCarry(::System::UInt32& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_D32ADDCARRY_OFFSET))(a1, a2);
		}

		static ::System::Void DecMul10(::System::MutableDecimal& a1)
		{
			return ((::System::Void(*)(::System::MutableDecimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECMUL10_OFFSET))(a1);
		}

		static ::System::Void DecShiftLeft(::System::MutableDecimal& a1)
		{
			return ((::System::Void(*)(::System::MutableDecimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECSHIFTLEFT_OFFSET))(a1);
		}

		static ::System::Void DecAdd(::System::MutableDecimal& a1, ::System::MutableDecimal a2)
		{
			return ((::System::Void(*)(::System::MutableDecimal&, ::System::MutableDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECADD_OFFSET))(a1, a2);
		}
	};
}
