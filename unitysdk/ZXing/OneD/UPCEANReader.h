#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }

#define ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x1B559780)
#define ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x1B559560)
#define ZXING_ONED_UPCEANREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B55F980)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANReader_TypeDefinitionIndex = 6428;

	class UPCEANReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_AND_G_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C60);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C68);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_START_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C70);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C78);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C80);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x2660);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x2664);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER__CCTOR_OFFSET))();
		}

		static ::System::Boolean checkStandardUPCEANChecksum(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Int32> getStandardUPCEANChecksum(::System::String* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET))(a1);
		}
	};
}
