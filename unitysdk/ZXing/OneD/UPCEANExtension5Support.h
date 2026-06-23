#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define ZXING_ONED_UPCEANEXTENSION5SUPPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB53A50)
#define ZXING_ONED_UPCEANEXTENSION5SUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB539A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANExtension5Support_TypeDefinitionIndex = 19092;

	class UPCEANExtension5Support : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHECK_DIGIT_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANExtension5Support_TypeDefinitionIndex)->GetStaticField(0x8DA0);
		}
		::System::Text::StringBuilder* decodeRowStringBuffer; // 0x10
		::Il2CppArray<::System::Int32>* decodeMiddleCounters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANEXTENSION5SUPPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANEXTENSION5SUPPORT__CCTOR_OFFSET))();
		}
	};
}
