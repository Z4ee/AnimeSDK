#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }

#define ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x18D1D590)
#define ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x18D1D370)
#define ZXING_ONED_UPCEANREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D224A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANReader_TypeDefinitionIndex = 6043;

	class UPCEANReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8848);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_AND_G_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8850);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_START_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8858);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x8860);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x4620);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x4624);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER__CCTOR_OFFSET))();
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
