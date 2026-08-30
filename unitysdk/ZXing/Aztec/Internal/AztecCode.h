#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Common { class BitMatrix; }

#define ZXING_AZTEC_INTERNAL_AZTECCODE_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1EFD47C0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_CODEWORDS_OFFSET UNITYSDK_OFFSET(0x1EFD47B0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_ISCOMPACT_OFFSET UNITYSDK_OFFSET(0x1EFD4780)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_LAYERS_OFFSET UNITYSDK_OFFSET(0x1EFD47A0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1EFD47D0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1EFD4790)
#define ZXING_AZTEC_INTERNAL_AZTECCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD47E0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int AztecCode_TypeDefinitionIndex = 6994;

	class AztecCode : public ::System::Object
	{
	public:
		::ZXing::Common::BitMatrix* _Matrix_k__BackingField; // 0x10
		::System::Int32 _Layers_k__BackingField; // 0x18
		::System::Int32 _Size_k__BackingField; // 0x1C
		::System::Boolean _isCompact_k__BackingField; // 0x20
		::System::Int32 _CodeWords_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE__CTOR_OFFSET))(this);
		}

		::System::Void set_isCompact(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_ISCOMPACT_OFFSET))(this, a1);
		}

		::System::Void set_Size(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Void set_Layers(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_LAYERS_OFFSET))(this, a1);
		}

		::System::Void set_CodeWords(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_CODEWORDS_OFFSET))(this, a1);
		}

		::ZXing::Common::BitMatrix* get_Matrix()
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_GET_MATRIX_OFFSET))(this);
		}

		::System::Void set_Matrix(::ZXing::Common::BitMatrix* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitMatrix*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_MATRIX_OFFSET))(this, a1);
		}
	};
}
