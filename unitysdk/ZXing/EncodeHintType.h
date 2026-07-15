#pragma once
#include "unitysdk/unitysdk.h"

namespace ZXing
{
	inline static constexpr unsigned int EncodeHintType_TypeDefinitionIndex = 6445;

	enum class EncodeHintType : ::System::Int32
	{
		WIDTH = 0,
		HEIGHT = 1,
		PURE_BARCODE = 2,
		ERROR_CORRECTION = 3,
		CHARACTER_SET = 4,
		MARGIN = 5,
		PDF417_COMPACT = 6,
		PDF417_COMPACTION = 7,
		PDF417_DIMENSIONS = 8,
		DISABLE_ECI = 9,
		DATA_MATRIX_SHAPE = 10,
		MIN_SIZE = 11,
		MAX_SIZE = 12,
		CODE128_FORCE_CODESET_B = 13,
		DATA_MATRIX_DEFAULT_ENCODATION = 14,
		AZTEC_LAYERS = 15,
		QR_VERSION = 16,
	};
}
