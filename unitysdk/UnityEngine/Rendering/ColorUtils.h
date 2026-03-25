#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_COLORUTILS_CIEXYTOLMS_OFFSET UNITYSDK_OFFSET(0x188CA790)
#define UNITYENGINE_RENDERING_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET UNITYSDK_OFFSET(0x188CA810)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100FROMAVGLUMINANCE_OFFSET UNITYSDK_OFFSET(0x188CAF40)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100_OFFSET UNITYSDK_OFFSET(0x188CAE50)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEISO_OFFSET UNITYSDK_OFFSET(0x188CAF90)
#define UNITYENGINE_RENDERING_COLORUTILS_CONVERTEV100TOEXPOSURE_OFFSET UNITYSDK_OFFSET(0x188CAEB0)
#define UNITYENGINE_RENDERING_COLORUTILS_CONVERTEXPOSURETOEV100_OFFSET UNITYSDK_OFFSET(0x188CAEE0)
#define UNITYENGINE_RENDERING_COLORUTILS_LUMINANCE_OFFSET UNITYSDK_OFFSET(0x188CADE0)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARELIFTGAMMAGAIN_OFFSET UNITYSDK_OFFSET(0x188CAB40)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET UNITYSDK_OFFSET(0x188CA900)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARESPLITTONING_OFFSET UNITYSDK_OFFSET(0x188CAE10)
#define UNITYENGINE_RENDERING_COLORUTILS_STANDARDILLUMINANTY_OFFSET UNITYSDK_OFFSET(0x188CA760)
#define UNITYENGINE_RENDERING_COLORUTILS_TOHEX_OFFSET UNITYSDK_OFFSET(0x188CAFE0)
#define UNITYENGINE_RENDERING_COLORUTILS_TORGBA_OFFSET UNITYSDK_OFFSET(0x188CB030)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorUtils_TypeDefinitionIndex = 27884;

	class ColorUtils : public ::System::Object
	{
	public:
		static ::System::Single StandardIlluminantY(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_STANDARDILLUMINANTY_OFFSET))(x);
		}

		static ::UnityEngine::Vector3 CIExyToLMS(::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CIEXYTOLMS_OFFSET))(x, y);
		}

		static ::UnityEngine::Vector3 ColorBalanceToLMSCoeffs(::System::Single temperature, ::System::Single tint)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET))(temperature, tint);
		}

		static ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareShadowsMidtonesHighlights(::UnityEngine::Vector4& inShadows, ::UnityEngine::Vector4& inMidtones, ::UnityEngine::Vector4& inHighlights)
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET))(inShadows, inMidtones, inHighlights);
		}

		static ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareLiftGammaGain(::UnityEngine::Vector4& inLift, ::UnityEngine::Vector4& inGamma, ::UnityEngine::Vector4& inGain)
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARELIFTGAMMAGAIN_OFFSET))(inLift, inGamma, inGain);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareSplitToning(::UnityEngine::Vector4& inShadows, ::UnityEngine::Vector4& inHighlights, ::System::Single balance)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARESPLITTONING_OFFSET))(inShadows, inHighlights, balance);
		}

		static ::System::Single Luminance(::UnityEngine::Color& color)
		{
			return ((::System::Single(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_LUMINANCE_OFFSET))(color);
		}

		static ::System::Single ComputeEV100(::System::Single aperture, ::System::Single shutterSpeed, ::System::Single ISO)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100_OFFSET))(aperture, shutterSpeed, ISO);
		}

		static ::System::Single ConvertEV100ToExposure(::System::Single EV100)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CONVERTEV100TOEXPOSURE_OFFSET))(EV100);
		}

		static ::System::Single ConvertExposureToEV100(::System::Single exposure)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CONVERTEXPOSURETOEV100_OFFSET))(exposure);
		}

		static ::System::Single ComputeEV100FromAvgLuminance(::System::Single avgLuminance)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100FROMAVGLUMINANCE_OFFSET))(avgLuminance);
		}

		static ::System::Single ComputeISO(::System::Single aperture, ::System::Single shutterSpeed, ::System::Single targetEV100)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEISO_OFFSET))(aperture, shutterSpeed, targetEV100);
		}

		static ::System::UInt32 ToHex(::UnityEngine::Color c)
		{
			return ((::System::UInt32(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_TOHEX_OFFSET))(c);
		}

		static ::UnityEngine::Color ToRGBA(::System::UInt32 hex)
		{
			return ((::UnityEngine::Color(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_TORGBA_OFFSET))(hex);
		}
	};
}
