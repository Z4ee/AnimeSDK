#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define ZXING_COMMON_ENCODINGOPTIONS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x15536CD0)
#define ZXING_COMMON_ENCODINGOPTIONS_GET_HINTS_OFFSET UNITYSDK_OFFSET(0x15536CB0)
#define ZXING_COMMON_ENCODINGOPTIONS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x155370C0)
#define ZXING_COMMON_ENCODINGOPTIONS_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x15536F80)
#define ZXING_COMMON_ENCODINGOPTIONS_SET_HINTS_OFFSET UNITYSDK_OFFSET(0x15536CC0)
#define ZXING_COMMON_ENCODINGOPTIONS_SET_MARGIN_OFFSET UNITYSDK_OFFSET(0x155374B0)
#define ZXING_COMMON_ENCODINGOPTIONS_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x15537370)
#define ZXING_COMMON_ENCODINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x155375F0)

namespace ZXing::Common
{
	inline static constexpr unsigned int EncodingOptions_TypeDefinitionIndex = 6434;

	class EncodingOptions : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* _Hints_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* get_Hints()
		{
			return ((::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_GET_HINTS_OFFSET))(this);
		}

		::System::Void set_Hints(::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_SET_HINTS_OFFSET))(this, a1);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Void set_Margin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_ENCODINGOPTIONS_SET_MARGIN_OFFSET))(this, a1);
		}
	};
}
