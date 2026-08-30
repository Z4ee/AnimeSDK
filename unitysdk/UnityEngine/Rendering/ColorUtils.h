#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_COLORUTILS_CIEXYTOLMS_OFFSET UNITYSDK_OFFSET(0x1CD05A60)
#define UNITYENGINE_RENDERING_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET UNITYSDK_OFFSET(0x1CD05AE0)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100FROMAVGLUMINANCE_OFFSET UNITYSDK_OFFSET(0x1CD06210)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100_OFFSET UNITYSDK_OFFSET(0x1CD06120)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEISO_OFFSET UNITYSDK_OFFSET(0x1CD06260)
#define UNITYENGINE_RENDERING_COLORUTILS_CONVERTEV100TOEXPOSURE_OFFSET UNITYSDK_OFFSET(0x1CD06180)
#define UNITYENGINE_RENDERING_COLORUTILS_CONVERTEXPOSURETOEV100_OFFSET UNITYSDK_OFFSET(0x1CD061B0)
#define UNITYENGINE_RENDERING_COLORUTILS_LUMINANCE_OFFSET UNITYSDK_OFFSET(0x1CD060B0)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARELIFTGAMMAGAIN_OFFSET UNITYSDK_OFFSET(0x1CD05E10)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET UNITYSDK_OFFSET(0x1CD05BD0)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARESPLITTONING_OFFSET UNITYSDK_OFFSET(0x1CD060E0)
#define UNITYENGINE_RENDERING_COLORUTILS_STANDARDILLUMINANTY_OFFSET UNITYSDK_OFFSET(0x1CD05A30)
#define UNITYENGINE_RENDERING_COLORUTILS_TOHEX_OFFSET UNITYSDK_OFFSET(0x1CD062B0)
#define UNITYENGINE_RENDERING_COLORUTILS_TORGBA_OFFSET UNITYSDK_OFFSET(0x1CD06300)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorUtils_TypeDefinitionIndex = 34928;

	class ColorUtils : public ::System::Object
	{
	public:
		static ::System::Single StandardIlluminantY(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_STANDARDILLUMINANTY_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 CIExyToLMS(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CIEXYTOLMS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 ColorBalanceToLMSCoeffs(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareShadowsMidtonesHighlights(::UnityEngine::Vector4& a1, ::UnityEngine::Vector4& a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET))(a1, a2, a3);
		}

		static ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareLiftGammaGain(::UnityEngine::Vector4& a1, ::UnityEngine::Vector4& a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARELIFTGAMMAGAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareSplitToning(::UnityEngine::Vector4& a1, ::UnityEngine::Vector4& a2, ::System::Single a3)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARESPLITTONING_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Luminance(::UnityEngine::Color& a1)
		{
			return ((::System::Single(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_LUMINANCE_OFFSET))(a1);
		}

		static ::System::Single ComputeEV100(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ConvertEV100ToExposure(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CONVERTEV100TOEXPOSURE_OFFSET))(a1);
		}

		static ::System::Single ConvertExposureToEV100(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CONVERTEXPOSURETOEV100_OFFSET))(a1);
		}

		static ::System::Single ComputeEV100FromAvgLuminance(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100FROMAVGLUMINANCE_OFFSET))(a1);
		}

		static ::System::Single ComputeISO(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEISO_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 ToHex(::UnityEngine::Color a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_TOHEX_OFFSET))(a1);
		}

		static ::UnityEngine::Color ToRGBA(::System::UInt32 a1)
		{
			return ((::UnityEngine::Color(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_TORGBA_OFFSET))(a1);
		}
	};
}
