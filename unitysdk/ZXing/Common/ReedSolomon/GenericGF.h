#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common::ReedSolomon { class GenericGFPoly; }

#define ZXING_COMMON_REEDSOLOMON_GENERICGF_ADDORSUBTRACT_OFFSET UNITYSDK_OFFSET(0x1885BAE0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_BUILDMONOMIAL_OFFSET UNITYSDK_OFFSET(0x1885BA20)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_EXP_OFFSET UNITYSDK_OFFSET(0x1885BAF0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_GENERATORBASE_OFFSET UNITYSDK_OFFSET(0x1885BD20)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1885BA10)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_INVERSE_OFFSET UNITYSDK_OFFSET(0x1885BBC0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_LOG_OFFSET UNITYSDK_OFFSET(0x1885BB30)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1885BC80)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1885BD30)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1885C050)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1885B710)

namespace ZXing::Common::ReedSolomon
{
	inline static constexpr unsigned int GenericGF_TypeDefinitionIndex = 8681;

	class GenericGF : public ::System::Object
	{
	public:
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_6()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x7890);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_8()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x7898);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_MAXICODE_FIELD_64()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x78A0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_10()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x78A8);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_PARAM()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x78B0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_12()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x78B8);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_DATA_MATRIX_FIELD_256()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x78C0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_QR_CODE_FIELD_256()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x78C8);
		}
		::ZXing::Common::ReedSolomon::GenericGFPoly* one; // 0x10
		::ZXing::Common::ReedSolomon::GenericGFPoly* zero; // 0x18
		::Il2CppArray<::System::Int32>* logTable; // 0x20
		::Il2CppArray<::System::Int32>* expTable; // 0x28
		::System::Int32 size; // 0x30
		::System::Int32 primitive; // 0x34
		::System::Int32 generatorBase; // 0x38

		::System::Void _ctor(::System::Int32 primitive, ::System::Int32 size, ::System::Int32 genBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF__CTOR_OFFSET))(this, primitive, size, genBase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF__CCTOR_OFFSET))();
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* get_Zero()
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_ZERO_OFFSET))(this);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* buildMonomial(::System::Int32 degree, ::System::Int32 coefficient)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_BUILDMONOMIAL_OFFSET))(this, degree, coefficient);
		}

		static ::System::Int32 addOrSubtract(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_ADDORSUBTRACT_OFFSET))(a, b);
		}

		::System::Int32 exp(::System::Int32 a)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_EXP_OFFSET))(this, a);
		}

		::System::Int32 log(::System::Int32 a)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_LOG_OFFSET))(this, a);
		}

		::System::Int32 inverse(::System::Int32 a)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_INVERSE_OFFSET))(this, a);
		}

		::System::Int32 multiply(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGF_MULTIPLY_OFFSET))(this, a, b);
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
