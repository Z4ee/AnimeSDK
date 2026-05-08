#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int VREffectsCBuffer_TypeDefinitionIndex = 30403;

	struct alignas(4) VREffectsCBuffer
	{
		::UnityEngine::Vector4 _HSVParams; // 0x10
		::UnityEngine::Vector4 _ContrastParams; // 0x20
		::UnityEngine::Vector4 _ColorTintNear; // 0x30
		::UnityEngine::Vector4 _ColorTintFar; // 0x40
		::UnityEngine::Vector4 _ScanlineParams; // 0x50
		::UnityEngine::Vector4 _SliceParams; // 0x60
		::UnityEngine::Vector4 _SliceColorA; // 0x70
		::UnityEngine::Vector4 _SliceColorB; // 0x80
		::UnityEngine::Vector4 _SliceBlendModes; // 0x90
		::UnityEngine::Vector4 _ScanStart; // 0xA0
		::UnityEngine::Vector4 _ScanEnd; // 0xB0
		::UnityEngine::Vector4 _ScanStartInvSoftness; // 0xC0
		::UnityEngine::Vector4 _ScanEndInvSoftness; // 0xD0
		::UnityEngine::Vector4 _ScanBlendModes; // 0xE0
		::UnityEngine::Vector4 _ScanColor0; // 0xF0
		::UnityEngine::Vector4 _ScanColor0End; // 0x100
		::UnityEngine::Vector4 _ScanColor1; // 0x110
		::UnityEngine::Vector4 _ScanColor1End; // 0x120
		::UnityEngine::Vector4 _ScanColor2; // 0x130
		::UnityEngine::Vector4 _ScanColor2End; // 0x140
		::UnityEngine::Vector4 _ScanColor3; // 0x150
		::UnityEngine::Vector4 _ScanColor3End; // 0x160
		::UnityEngine::Vector4 _RGBSeparateParams0; // 0x170
		::UnityEngine::Vector4 _RGBSeparateParams1; // 0x180
		::UnityEngine::Vector4 _ColorR; // 0x190
		::UnityEngine::Vector4 _ColorG; // 0x1A0
		::UnityEngine::Vector4 _ColorB; // 0x1B0
		::UnityEngine::Vector4 _GridParams; // 0x1C0
		::UnityEngine::Vector4 _GridColor; // 0x1D0
		::UnityEngine::Vector4 _TextureSheetParams; // 0x1E0
		::UnityEngine::Vector4 _TextureSheetColor; // 0x1F0
		::UnityEngine::Vector4 _CustomScanCenter; // 0x200
		::UnityEngine::Vector4 _CustomScanParams; // 0x210
		::UnityEngine::Matrix4x4 _LocalInvViewProjMatrix; // 0x220
		::UnityEngine::Vector4 _Distortion_Params1; // 0x260
		::UnityEngine::Vector4 _Distortion_Params2; // 0x270
		::UnityEngine::Vector4 _DistortionRgbShift; // 0x280
		::UnityEngine::Vector4 _ScanMaskTexChannel; // 0x290
		::UnityEngine::Vector4 _ScanMaskTexTilingOffset; // 0x2A0
		::UnityEngine::Vector4 _ScanMaskIntensities; // 0x2B0
		::UnityEngine::Vector4 _ScanMaskUVSpeedAndYFade; // 0x2C0
		::UnityEngine::Vector4 _DistanceDistortionColorizationParams0; // 0x2D0
		::UnityEngine::Vector4 _DistanceDistortionColorizationParams1; // 0x2E0
		::UnityEngine::Vector4 _DistanceDistortionColorizationParams2; // 0x2F0
		::UnityEngine::Vector4 _DistanceDistortionColorizationParams3; // 0x300
		::UnityEngine::Vector4 _DistanceDistortionColorizationParams4; // 0x310
	};
}
