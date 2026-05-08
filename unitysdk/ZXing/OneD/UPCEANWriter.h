#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

#define ZXING_ONED_UPCEANWRITER_GET_DEFAULTMARGIN_OFFSET UNITYSDK_OFFSET(0x1887F660)
#define ZXING_ONED_UPCEANWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x188789D0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANWriter_TypeDefinitionIndex = 8618;

	class UPCEANWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANWRITER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DefaultMargin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANWRITER_GET_DEFAULTMARGIN_OFFSET))(this);
		}
	};
}
