#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ComitDotCBuffer_TypeDefinitionIndex = 26806;

	struct alignas(4) ComitDotCBuffer
	{
		::UnityEngine::Vector4 _FXCD_DotColor0; // 0x10
		::UnityEngine::Vector4 _FXCD_DotColor1; // 0x20
		::UnityEngine::Vector4 _FXCD_DotParams0; // 0x30
		::UnityEngine::Vector4 _FXCD_DotParams1; // 0x40
		::UnityEngine::Vector4 _FXCD_DotParams2; // 0x50
		::UnityEngine::Vector4 _FXCD_DotParams3; // 0x60
		::UnityEngine::Vector4 _FXCD_AlphaByLuminanceParams0; // 0x70
		::UnityEngine::Vector4 _FXCD_AlphaByLuminanceParams1; // 0x80
		::UnityEngine::Vector4 _FXCD_ZClipParams0; // 0x90
		::UnityEngine::Vector4 _FXCD_ZClipParams1; // 0xA0
		::UnityEngine::Vector4 _FXCD_Packed0; // 0xB0
		::UnityEngine::Vector4 _FXCD_Packed1; // 0xC0
	};
}
