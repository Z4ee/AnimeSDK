#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define ZXING_ONED_UPCEANEXTENSION2SUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB538F0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANExtension2Support_TypeDefinitionIndex = 19186;

	class UPCEANExtension2Support : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* decodeMiddleCounters; // 0x10
		::System::Text::StringBuilder* decodeRowStringBuffer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANEXTENSION2SUPPORT__CTOR_OFFSET))(this);
		}
	};
}
