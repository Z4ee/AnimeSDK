#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_PLESSEYWRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x16D64D70)
#define ZXING_ONED_PLESSEYWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D64CC0)
#define ZXING_ONED_PLESSEYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D65F30)
#define ZXING_ONED_PLESSEYWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D56F80)

namespace ZXing::OneD
{
	inline static constexpr unsigned int PlesseyWriter_TypeDefinitionIndex = 6983;

	class PlesseyWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_startWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BB0);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_numberWidths()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BB8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_crc0Widths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BC0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_crcGrid()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BC8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_endWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BD0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_crc1Widths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BD8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_terminationWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlesseyWriter_TypeDefinitionIndex)->GetStaticField(0x31BE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER__CCTOR_OFFSET))();
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER_ENCODE_1_OFFSET))(this, a1);
		}
	};
}
