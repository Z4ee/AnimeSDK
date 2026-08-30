#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common::ReedSolomon { class GenericGFPoly; }

#define ZXING_COMMON_REEDSOLOMON_GENERICGF_ADDORSUBTRACT_OFFSET UNITYSDK_OFFSET(0x1EFDE700)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_BUILDMONOMIAL_OFFSET UNITYSDK_OFFSET(0x1EFDE640)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_EXP_OFFSET UNITYSDK_OFFSET(0x1EFDE710)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_GENERATORBASE_OFFSET UNITYSDK_OFFSET(0x1EFDE8D0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EFDE630)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_INVERSE_OFFSET UNITYSDK_OFFSET(0x1EFDE7C0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_LOG_OFFSET UNITYSDK_OFFSET(0x1EFDE740)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EFDE860)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFDE8E0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFDEB50)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDE370)

namespace ZXing::Common::ReedSolomon
{
	inline static constexpr unsigned int GenericGF_TypeDefinitionIndex = 7038;

	class GenericGF : public ::System::Object
	{
	public:
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_8()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25B70);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_MAXICODE_FIELD_64()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25B78);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_12()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25B80);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_PARAM()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25B88);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_10()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25B90);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_QR_CODE_FIELD_256()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25B98);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_6()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25BA0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_DATA_MATRIX_FIELD_256()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x25BA8);
		}
		::ZXing::Common::ReedSolomon::GenericGFPoly* one; // 0x10
		::Il2CppArray<::System::Int32>* logTable; // 0x18
		::Il2CppArray<::System::Int32>* expTable; // 0x20
		::ZXing::Common::ReedSolomon::GenericGFPoly* zero; // 0x28
		::System::Int32 primitive; // 0x30
		::System::Int32 size; // 0x34
		::System::Int32 generatorBase; // 0x38

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF__CCTOR_OFFSET))();
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* get_Zero()
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_ZERO_OFFSET))(this);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* buildMonomial(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_BUILDMONOMIAL_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 addOrSubtract(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_ADDORSUBTRACT_OFFSET))(a1, a2);
		}

		::System::Int32 exp(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_EXP_OFFSET))(this, a1);
		}

		::System::Int32 log(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_LOG_OFFSET))(this, a1);
		}

		::System::Int32 inverse(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_INVERSE_OFFSET))(this, a1);
		}

		::System::Int32 multiply(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_MULTIPLY_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_GeneratorBase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_GENERATORBASE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_TOSTRING_OFFSET))(this);
		}
	};
}
