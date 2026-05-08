#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/UPCEANReader.h"

namespace System { class String; }

#define ZXING_ONED_UPCEREADER_CONVERTUPCETOUPCA_OFFSET UNITYSDK_OFFSET(0x1887F6E0)
#define ZXING_ONED_UPCEREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1887FE30)
#define ZXING_ONED_UPCEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1887F670)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEReader_TypeDefinitionIndex = 8657;

	class UPCEReader : public ::ZXing::OneD::UPCEANReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEReader_TypeDefinitionIndex)->GetStaticField(0x7B80);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_NUMSYS_AND_CHECK_DIGIT_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEReader_TypeDefinitionIndex)->GetStaticField(0x7B88);
		}
		::Il2CppArray<::System::Int32>* decodeMiddleCounters; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER__CCTOR_OFFSET))();
		}

		static ::System::String* convertUPCEtoUPCA(::System::String* upce)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER_CONVERTUPCETOUPCA_OFFSET))(upce);
		}
	};
}
