#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common::ReedSolomon { class GenericGFPoly; }

#define ZXING_COMMON_REEDSOLOMON_GENERICGF_ADDORSUBTRACT_OFFSET UNITYSDK_OFFSET(0x1AB31070)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_BUILDMONOMIAL_OFFSET UNITYSDK_OFFSET(0x1AB30FB0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_EXP_OFFSET UNITYSDK_OFFSET(0x1AB31080)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_GENERATORBASE_OFFSET UNITYSDK_OFFSET(0x1AB312B0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1AB30FA0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_INVERSE_OFFSET UNITYSDK_OFFSET(0x1AB31150)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_LOG_OFFSET UNITYSDK_OFFSET(0x1AB310C0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1AB31210)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB312C0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB315E0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB30CA0)

namespace ZXing::Common::ReedSolomon
{
	inline static constexpr unsigned int GenericGF_TypeDefinitionIndex = 19179;

	class GenericGF : public ::System::Object
	{
	public:
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_6()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_PARAM()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8AD8);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_MAXICODE_FIELD_64()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8AE0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_10()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8AE8);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_8()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8AF0);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_DATA_MATRIX_FIELD_256()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8AF8);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_QR_CODE_FIELD_256()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8B00);
		}
		static ::ZXing::Common::ReedSolomon::GenericGF** StaticGet_AZTEC_DATA_12()
		{
			return (::ZXing::Common::ReedSolomon::GenericGF**)Il2CppClass::FromTypeDefinitionIndex(GenericGF_TypeDefinitionIndex)->GetStaticField(0x8B08);
		}
		::ZXing::Common::ReedSolomon::GenericGFPoly* one; // 0x10
		::Il2CppArray<::System::Int32>* expTable; // 0x18
		::Il2CppArray<::System::Int32>* logTable; // 0x20
		::ZXing::Common::ReedSolomon::GenericGFPoly* zero; // 0x28
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
