#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace ZXing::Common::ReedSolomon { class GenericGF; }
namespace ZXing::Common::ReedSolomon { class GenericGFPoly; }

#define ZXING_COMMON_REEDSOLOMON_REEDSOLOMONENCODER_BUILDGENERATOR_OFFSET UNITYSDK_OFFSET(0x1AB326B0)
#define ZXING_COMMON_REEDSOLOMON_REEDSOLOMONENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB28F80)
#define ZXING_COMMON_REEDSOLOMON_REEDSOLOMONENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB28C30)

namespace ZXing::Common::ReedSolomon
{
	inline static constexpr unsigned int ReedSolomonEncoder_TypeDefinitionIndex = 19110;

	class ReedSolomonEncoder : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::ZXing::Common::ReedSolomon::GenericGFPoly*>* cachedGenerators; // 0x10
		::ZXing::Common::ReedSolomon::GenericGF* field; // 0x18

		::System::Void _ctor(::ZXing::Common::ReedSolomon::GenericGF* field)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::ReedSolomon::GenericGF*))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_REEDSOLOMONENCODER__CTOR_OFFSET))(this, field);
		}

		::ZXing::Common::ReedSolomon::GenericGFPoly* buildGenerator(::System::Int32 degree)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGFPoly*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_REEDSOLOMONENCODER_BUILDGENERATOR_OFFSET))(this, degree);
		}

		::System::Void encode(::Il2CppArray<::System::Int32>* toEncode, ::System::Int32 ecBytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_REEDSOLOMON_REEDSOLOMONENCODER_ENCODE_OFFSET))(this, toEncode, ecBytes);
		}
	};
}
