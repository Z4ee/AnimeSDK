#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/ZXing/BarcodeFormat.h"

namespace System { class String; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::Common { class EncodingOptions; }

#define ZXING_COLOR32RENDERER_GET_BACKGROUND_OFFSET UNITYSDK_OFFSET(0x1EFDB330)
#define ZXING_COLOR32RENDERER_GET_FOREGROUND_OFFSET UNITYSDK_OFFSET(0x1EFDB310)
#define ZXING_COLOR32RENDERER_RENDER_OFFSET UNITYSDK_OFFSET(0x1EFDB350)
#define ZXING_COLOR32RENDERER_SET_BACKGROUND_OFFSET UNITYSDK_OFFSET(0x1EFDB340)
#define ZXING_COLOR32RENDERER_SET_FOREGROUND_OFFSET UNITYSDK_OFFSET(0x1EFDB320)
#define ZXING_COLOR32RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDB2D0)

namespace ZXing
{
	inline static constexpr unsigned int Color32Renderer_TypeDefinitionIndex = 7001;

	class Color32Renderer : public ::System::Object
	{
	public:
		::UnityEngine::Color32 _Background_k__BackingField; // 0x10
		::UnityEngine::Color32 _Foreground_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COLOR32RENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color32 get_Foreground()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COLOR32RENDERER_GET_FOREGROUND_OFFSET))(this);
		}

		::System::Void set_Foreground(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + ZXING_COLOR32RENDERER_SET_FOREGROUND_OFFSET))(this, a1);
		}

		::UnityEngine::Color32 get_Background()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COLOR32RENDERER_GET_BACKGROUND_OFFSET))(this);
		}

		::System::Void set_Background(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + ZXING_COLOR32RENDERER_SET_BACKGROUND_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color32>* Render(::ZXing::Common::BitMatrix* a1, ::ZXing::BarcodeFormat a2, ::System::String* a3, ::ZXing::Common::EncodingOptions* a4)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::ZXing::Common::BitMatrix*, ::ZXing::BarcodeFormat, ::System::String*, ::ZXing::Common::EncodingOptions*))((::PBYTE)hIl2Cpp + ZXING_COLOR32RENDERER_RENDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
