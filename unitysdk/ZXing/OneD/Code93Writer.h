#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_CODE93WRITER_APPENDPATTERN_OFFSET UNITYSDK_OFFSET(0x18D1C430)
#define ZXING_ONED_CODE93WRITER_COMPUTECHECKSUMINDEX_OFFSET UNITYSDK_OFFSET(0x18D1C570)
#define ZXING_ONED_CODE93WRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x18D1B6D0)
#define ZXING_ONED_CODE93WRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x18D1B630)
#define ZXING_ONED_CODE93WRITER_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x18D1C360)
#define ZXING_ONED_CODE93WRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D132A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code93Writer_TypeDefinitionIndex = 6031;

	class Code93Writer : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93WRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93WRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* contents)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93WRITER_ENCODE_1_OFFSET))(this, contents);
		}

		static ::System::Void toIntArray(::System::Int32 a, ::Il2CppArray<::System::Int32>* toReturn)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93WRITER_TOINTARRAY_OFFSET))(a, toReturn);
		}

		static ::System::Int32 appendPattern(::Il2CppArray<::System::Boolean>* target, ::System::Int32 pos, ::Il2CppArray<::System::Int32>* pattern)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Boolean>*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93WRITER_APPENDPATTERN_OFFSET))(target, pos, pattern);
		}

		static ::System::Int32 computeChecksumIndex(::System::String* contents, ::System::Int32 maxWeight)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93WRITER_COMPUTECHECKSUMINDEX_OFFSET))(contents, maxWeight);
		}
	};
}
