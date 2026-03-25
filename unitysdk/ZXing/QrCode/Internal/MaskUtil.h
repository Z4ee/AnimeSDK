#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::QrCode::Internal { class ByteMatrix; }

#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1INTERNAL_OFFSET UNITYSDK_OFFSET(0x18D303A0)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1_OFFSET UNITYSDK_OFFSET(0x18D2BB70)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE2_OFFSET UNITYSDK_OFFSET(0x18D2BBA0)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE3_OFFSET UNITYSDK_OFFSET(0x18D2BD80)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE4_OFFSET UNITYSDK_OFFSET(0x18D2C4E0)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_GETDATAMASKBIT_OFFSET UNITYSDK_OFFSET(0x18D30720)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18D30620)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEVERTICAL_OFFSET UNITYSDK_OFFSET(0x18D30690)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int MaskUtil_TypeDefinitionIndex = 6040;

	class MaskUtil : public ::System::Object
	{
	public:
		static ::System::Int32 applyMaskPenaltyRule1(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1_OFFSET))(matrix);
		}

		static ::System::Int32 applyMaskPenaltyRule2(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE2_OFFSET))(matrix);
		}

		static ::System::Int32 applyMaskPenaltyRule3(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE3_OFFSET))(matrix);
		}

		static ::System::Boolean isWhiteHorizontal(::Il2CppArray<::System::Byte>* rowArray, ::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEHORIZONTAL_OFFSET))(rowArray, from, to);
		}

		static ::System::Boolean isWhiteVertical(::Il2CppArray<::Il2CppArray<::System::Byte>*>* array, ::System::Int32 col, ::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::Il2CppArray<::System::Byte>*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEVERTICAL_OFFSET))(array, col, from, to);
		}

		static ::System::Int32 applyMaskPenaltyRule4(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE4_OFFSET))(matrix);
		}

		static ::System::Boolean getDataMaskBit(::System::Int32 maskPattern, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_GETDATAMASKBIT_OFFSET))(maskPattern, x, y);
		}

		static ::System::Int32 applyMaskPenaltyRule1Internal(::ZXing::QrCode::Internal::ByteMatrix* matrix, ::System::Boolean isHorizontal)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1INTERNAL_OFFSET))(matrix, isHorizontal);
		}
	};
}
