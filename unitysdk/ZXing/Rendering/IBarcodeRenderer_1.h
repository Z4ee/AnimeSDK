#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"

namespace System { class String; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::Common { class EncodingOptions; }

namespace ZXing::Rendering
{
	inline static constexpr unsigned int IBarcodeRenderer_1_TypeDefinitionIndex = 6418;

	template <typename TOutput>
	class IBarcodeRenderer_1
	{
	public:
	};
}
