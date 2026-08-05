#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace ZXing::OneD { class EANManufacturerOrgSupport; }
namespace ZXing::OneD { class UPCEANExtensionSupport; }

#define ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x1BE8E690)
#define ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x1BE8E3F0)
#define ZXING_ONED_UPCEANREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE94560)
#define ZXING_ONED_UPCEANREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8D540)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANReader_TypeDefinitionIndex = 19463;

	class UPCEANReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_AND_G_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8D00);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_START_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8D08);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8D10);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8D18);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x44E0);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x44E4);
		}
		::ZXing::OneD::EANManufacturerOrgSupport* eanManSupport; // 0x10
		::ZXing::OneD::UPCEANExtensionSupport* extensionReader; // 0x18
		::System::Text::StringBuilder* decodeRowStringBuffer; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean checkStandardUPCEANChecksum(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET))(s);
		}

		static ::System::Nullable_1<::System::Int32> getStandardUPCEANChecksum(::System::String* s)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET))(s);
		}
	};
}
