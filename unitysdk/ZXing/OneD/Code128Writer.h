#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
#include "unitysdk/ZXing/OneD/Code128Writer_CType.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_CODE128WRITER_CHOOSECODE_OFFSET UNITYSDK_OFFSET(0x16D5D680)
#define ZXING_ONED_CODE128WRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x16D5CD70)
#define ZXING_ONED_CODE128WRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D5C430)
#define ZXING_ONED_CODE128WRITER_FINDCTYPE_OFFSET UNITYSDK_OFFSET(0x16D5D9E0)
#define ZXING_ONED_CODE128WRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D56DF0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code128Writer_TypeDefinitionIndex = 7036;

	class Code128Writer : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		::System::Boolean forceCodesetB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_ENCODE_1_OFFSET))(this, a1);
		}

		static ::ZXing::OneD::Code128Writer_CType findCType(::System::String* a1, ::System::Int32 a2)
		{
			return ((::ZXing::OneD::Code128Writer_CType(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_FINDCTYPE_OFFSET))(a1, a2);
		}

		::System::Int32 chooseCode(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_CHOOSECODE_OFFSET))(this, a1, a2, a3);
		}
	};
}
