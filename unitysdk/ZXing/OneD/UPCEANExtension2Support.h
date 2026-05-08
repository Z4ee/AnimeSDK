#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define ZXING_ONED_UPCEANEXTENSION2SUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1887E360)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANExtension2Support_TypeDefinitionIndex = 8688;

	class UPCEANExtension2Support : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* decodeRowStringBuffer; // 0x10
		::Il2CppArray<::System::Int32>* decodeMiddleCounters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANEXTENSION2SUPPORT__CTOR_OFFSET))(this);
		}
	};
}
