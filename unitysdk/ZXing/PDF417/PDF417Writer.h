#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::PDF417::Internal { class PDF417; }

#define ZXING_PDF417_PDF417WRITER_BITMATRIXFROMBITARRAY_OFFSET UNITYSDK_OFFSET(0x15562C40)
#define ZXING_PDF417_PDF417WRITER_BITMATRIXFROMENCODER_OFFSET UNITYSDK_OFFSET(0x155628F0)
#define ZXING_PDF417_PDF417WRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x15560C30)
#define ZXING_PDF417_PDF417WRITER_ROTATEARRAY_OFFSET UNITYSDK_OFFSET(0x15562A20)
#define ZXING_PDF417_PDF417WRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x155482A0)

namespace ZXing::PDF417
{
	inline static constexpr unsigned int PDF417Writer_TypeDefinitionIndex = 6495;

	class PDF417Writer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::ZXing::Common::BitMatrix* bitMatrixFromEncoder(::ZXing::PDF417::Internal::PDF417* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::PDF417::Internal::PDF417*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_BITMATRIXFROMENCODER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::ZXing::Common::BitMatrix* bitMatrixFromBitArray(::Il2CppArray<::Il2CppArray<::System::SByte>*>* a1, ::System::Int32 a2)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::Il2CppArray<::Il2CppArray<::System::SByte>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_BITMATRIXFROMBITARRAY_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Il2CppArray<::System::SByte>*>* rotateArray(::Il2CppArray<::Il2CppArray<::System::SByte>*>* a1)
		{
			return ((::Il2CppArray<::Il2CppArray<::System::SByte>*>*(*)(::Il2CppArray<::Il2CppArray<::System::SByte>*>*))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_ROTATEARRAY_OFFSET))(a1);
		}
	};
}
