#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common::ReedSolomon { class GenericGF; }

#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_ADDORSUBTRACT_OFFSET UNITYSDK_OFFSET(0x15538080)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_DIVIDE_OFFSET UNITYSDK_OFFSET(0x155388C0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GETCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x15538050)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_COEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x15537FF0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x15538000)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x15538020)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLYBYMONOMIAL_OFFSET UNITYSDK_OFFSET(0x155386A0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x155382F0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15538C70)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY__CTOR_OFFSET UNITYSDK_OFFSET(0x15537830)

namespace ZXing::Common::ReedSolomon
{
	inline static constexpr unsigned int GenericGFPoly_TypeDefinitionIndex = 6429;

	class GenericGFPoly : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* coefficients; // 0x10
		::ZXing::Common::ReedSolomon::GenericGF* field; // 0x18

		::System::Void _ctor(::ZXing::Common::ReedSolomon::GenericGF* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGF*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* get_Coefficients()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_COEFFICIENTS_OFFSET))(this);
		}

		::System::Int32 get_Degree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_DEGREE_OFFSET))(this);
		}

		::System::Boolean get_isZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_ISZERO_OFFSET))(this);
		}

		::System::Int32 getCoefficient(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GETCOEFFICIENT_OFFSET))(this, a1);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* addOrSubtract(::ZXing::Common::ReedSolomon::GenericGFPoly* a1)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGFPoly*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_ADDORSUBTRACT_OFFSET))(this, a1);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* multiply(::ZXing::Common::ReedSolomon::GenericGFPoly* a1)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGFPoly*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLY_OFFSET))(this, a1);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* multiplyByMonomial(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLYBYMONOMIAL_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::ZXing::Common::ReedSolomon::GenericGFPoly*>* divide(::ZXing::Common::ReedSolomon::GenericGFPoly* a1)
		{
			return ((::Il2CppArray<::ZXing::Common::ReedSolomon::GenericGFPoly*>*(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGFPoly*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_DIVIDE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_TOSTRING_OFFSET))(this);
		}
	};
}
