#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Common { class BitMatrix; }

#define ZXING_AZTEC_INTERNAL_AZTECCODE_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1BE679D0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_CODEWORDS_OFFSET UNITYSDK_OFFSET(0x1BE679C0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_ISCOMPACT_OFFSET UNITYSDK_OFFSET(0x1BE67990)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_LAYERS_OFFSET UNITYSDK_OFFSET(0x1BE679B0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1BE679E0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BE679A0)
#define ZXING_AZTEC_INTERNAL_AZTECCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE679F0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int AztecCode_TypeDefinitionIndex = 19479;

	class AztecCode : public ::System::Object
	{
	public:
		::ZXing::Common::BitMatrix* _Matrix_k__BackingField; // 0x10
		::System::Boolean _isCompact_k__BackingField; // 0x18
		::System::Int32 _Size_k__BackingField; // 0x1C
		::System::Int32 _CodeWords_k__BackingField; // 0x20
		::System::Int32 _Layers_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE__CTOR_OFFSET))(this);
		}

		::System::Void set_isCompact(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_ISCOMPACT_OFFSET))(this, value);
		}

		::System::Void set_Size(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void set_Layers(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_LAYERS_OFFSET))(this, value);
		}

		::System::Void set_CodeWords(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_CODEWORDS_OFFSET))(this, value);
		}

		::ZXing::Common::BitMatrix* get_Matrix()
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_GET_MATRIX_OFFSET))(this);
		}

		::System::Void set_Matrix(::ZXing::Common::BitMatrix* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitMatrix*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_AZTECCODE_SET_MATRIX_OFFSET))(this, value);
		}
	};
}
