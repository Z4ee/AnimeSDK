#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"

namespace System { class String; }
namespace ZXing { class Writer; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::Common { class EncodingOptions; }
namespace ZXing::Rendering { template <typename T> class IBarcodeRenderer_1; }

namespace ZXing
{
	inline static constexpr unsigned int BarcodeWriterGeneric_1_TypeDefinitionIndex = 6416;

	template <typename TOutput>
	class BarcodeWriterGeneric_1 : public ::System::Object
	{
	public:
		::ZXing::Common::EncodingOptions* options; // 0x0
		::ZXing::BarcodeFormat _Format_k__BackingField; // 0x0
		::ZXing::Writer* _Encoder_k__BackingField; // 0x0
		::ZXing::Rendering::IBarcodeRenderer_1<TOutput>* _Renderer_k__BackingField; // 0x0
	};
}
