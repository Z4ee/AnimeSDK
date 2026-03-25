#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common::ReedSolomon { class GenericGF; }

#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_ADDORSUBTRACT_OFFSET UNITYSDK_OFFSET(0x18D04EC0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_DIVIDE_OFFSET UNITYSDK_OFFSET(0x18D05740)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GETCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x18D04E80)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_COEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x18D04E10)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x18D04E20)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x18D04E40)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLYBYMONOMIAL_OFFSET UNITYSDK_OFFSET(0x18D055A0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18D05180)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18D059B0)
#define ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY__CTOR_OFFSET UNITYSDK_OFFSET(0x18D04530)

namespace ZXing::Common::ReedSolomon
{
	inline static constexpr unsigned int GenericGFPoly_TypeDefinitionIndex = 6039;

	class GenericGFPoly : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* coefficients; // 0x10
		::ZXing::Common::ReedSolomon::GenericGF* field; // 0x18

		::System::Void _ctor(::ZXing::Common::ReedSolomon::GenericGF* field, ::Il2CppArray<::System::Int32>* coefficients)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGF*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY__CTOR_OFFSET))(this, field, coefficients);
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

		::System::Int32 getCoefficient(::System::Int32 degree)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_GETCOEFFICIENT_OFFSET))(this, degree);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* addOrSubtract(::ZXing::Common::ReedSolomon::GenericGFPoly* other)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGFPoly*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_ADDORSUBTRACT_OFFSET))(this, other);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* multiply(::ZXing::Common::ReedSolomon::GenericGFPoly* other)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGFPoly*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLY_OFFSET))(this, other);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* multiplyByMonomial(::System::Int32 degree, ::System::Int32 coefficient)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_MULTIPLYBYMONOMIAL_OFFSET))(this, degree, coefficient);
		}

		::Il2CppArray<::ZXing::Common::ReedSolomon::GenericGFPoly*>* divide(::ZXing::Common::ReedSolomon::GenericGFPoly* other)
		{
			return ((::Il2CppArray<::ZXing::Common::ReedSolomon::GenericGFPoly*>*(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGFPoly*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_DIVIDE_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_GENERICGFPOLY_TOSTRING_OFFSET))(this);
		}
	};
}
