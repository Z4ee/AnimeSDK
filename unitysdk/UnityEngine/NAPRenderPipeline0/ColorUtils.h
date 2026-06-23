#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_CIEXYTOLMS_OFFSET UNITYSDK_OFFSET(0x1D2A2100)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET UNITYSDK_OFFSET(0x1D2A2180)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_PREPARESPLITTONING_OFFSET UNITYSDK_OFFSET(0x1D2A2270)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_STANDARDILLUMINANTY_OFFSET UNITYSDK_OFFSET(0x1D2A20D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorUtils_TypeDefinitionIndex = 5990;

	class ColorUtils : public ::System::Object
	{
	public:
		static ::System::Single StandardIlluminantY(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_STANDARDILLUMINANTY_OFFSET))(x);
		}

		static ::UnityEngine::Vector3 CIExyToLMS(::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_CIEXYTOLMS_OFFSET))(x, y);
		}

		static ::UnityEngine::Vector3 ColorBalanceToLMSCoeffs(::System::Single temperature, ::System::Single tint)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET))(temperature, tint);
		}

		static ::System::Void PrepareSplitToning(::UnityEngine::Vector4 inShadows, ::UnityEngine::Vector4 inHighlights, ::System::Single balance, ::UnityEngine::Vector4& shadows, ::UnityEngine::Vector4& highlights)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORUTILS_PREPARESPLITTONING_OFFSET))(inShadows, inHighlights, balance, shadows, highlights);
		}
	};
}
