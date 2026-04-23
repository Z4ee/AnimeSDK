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

#define ZXING_ONED_CODE128WRITER_CHOOSECODE_OFFSET UNITYSDK_OFFSET(0x1A755AD0)
#define ZXING_ONED_CODE128WRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1A755450)
#define ZXING_ONED_CODE128WRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1A754E70)
#define ZXING_ONED_CODE128WRITER_FINDCTYPE_OFFSET UNITYSDK_OFFSET(0x1A755E40)
#define ZXING_ONED_CODE128WRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74E8A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code128Writer_TypeDefinitionIndex = 6113;

	class Code128Writer : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		::System::Boolean forceCodesetB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* contents)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_ENCODE_1_OFFSET))(this, contents);
		}

		static ::ZXing::OneD::Code128Writer_CType findCType(::System::String* value, ::System::Int32 start)
		{
			return ((::ZXing::OneD::Code128Writer_CType(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_FINDCTYPE_OFFSET))(value, start);
		}

		::System::Int32 chooseCode(::System::String* value, ::System::Int32 start, ::System::Int32 oldCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128WRITER_CHOOSECODE_OFFSET))(this, value, start, oldCode);
		}
	};
}
