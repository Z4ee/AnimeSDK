#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYACTIVE_OFFSET UNITYSDK_OFFSET(0x18A11560)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x18A11530)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A11580)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A115C0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETPAPERWHITEINNITS_OFFSET UNITYSDK_OFFSET(0x18A11600)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A116A0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A11680)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A116C0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GETUSENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x18A11640)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x18A11540)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x18A11520)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A11570)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_MINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A115B0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x18A115F0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A11690)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A11670)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A116B0)
#define UNITYENGINE_HDROUTPUTSETTINGS_GET_USENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x18A11630)
#define UNITYENGINE_HDROUTPUTSETTINGS_REQUESTENABLEHDR_OFFSET UNITYSDK_OFFSET(0x18A116D0)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETHDRDISPLAYACTIVE_OFFSET UNITYSDK_OFFSET(0x18A116E0)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A115A0)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A115E0)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETPAPERWHITEINNITS_OFFSET UNITYSDK_OFFSET(0x18A11620)
#define UNITYENGINE_HDROUTPUTSETTINGS_SETUSENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x18A11660)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A11590)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_MINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x18A115D0)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x18A11610)
#define UNITYENGINE_HDROUTPUTSETTINGS_SET_USENATIVEBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x18A11650)

namespace UnityEngine
{
	inline static constexpr unsigned int HDROutputSettings_TypeDefinitionIndex = 3938;

	class HDROutputSettings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_debugFakeHDRActive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HDROutputSettings_TypeDefinitionIndex)->GetStaticField(0x59A0);
		}

		static ::System::Boolean get_available()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_AVAILABLE_OFFSET))();
		}

		static ::System::Boolean get_active()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_ACTIVE_OFFSET))();
		}

		static ::System::Single get_maxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_MAXLUMINANCE_OFFSET))();
		}

		static ::System::Void set_maxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_MAXLUMINANCE_OFFSET))(value);
		}

		static ::System::Single get_minLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_MINLUMINANCE_OFFSET))();
		}

		static ::System::Void set_minLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_MINLUMINANCE_OFFSET))(value);
		}

		static ::System::Single get_paperWhite()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_PAPERWHITE_OFFSET))();
		}

		static ::System::Void set_paperWhite(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_PAPERWHITE_OFFSET))(value);
		}

		static ::System::Boolean get_useNativeBackbuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_USENATIVEBACKBUFFER_OFFSET))();
		}

		static ::System::Void set_useNativeBackbuffer(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SET_USENATIVEBACKBUFFER_OFFSET))(value);
		}

		static ::System::Single get_systemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single get_systemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single get_systemCalibratedMinLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))();
		}

		static ::System::Void RequestEnableHDR(::System::Boolean yes)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_REQUESTENABLEHDR_OFFSET))(yes);
		}

		static ::System::Single GetMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single GetMinLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETMINLUMINANCE_OFFSET))();
		}

		static ::System::Single GetPaperWhiteInNits()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETPAPERWHITEINNITS_OFFSET))();
		}

		static ::System::Boolean GetHDRDisplayActive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYACTIVE_OFFSET))();
		}

		static ::System::Boolean GetUseNativeBackbuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETUSENATIVEBACKBUFFER_OFFSET))();
		}

		static ::System::Void SetHDRDisplayActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETHDRDISPLAYACTIVE_OFFSET))(active);
		}

		static ::System::Void SetMaxLuminance(::System::Single max)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETMAXLUMINANCE_OFFSET))(max);
		}

		static ::System::Void SetMinLuminance(::System::Single min)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETMINLUMINANCE_OFFSET))(min);
		}

		static ::System::Void SetPaperWhiteInNits(::System::Single paperWhite)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETPAPERWHITEINNITS_OFFSET))(paperWhite);
		}

		static ::System::Void SetUseNativeBackbuffer(::System::Boolean yes)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_SETUSENATIVEBACKBUFFER_OFFSET))(yes);
		}

		static ::System::Boolean GetHDRDisplayAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETHDRDISPLAYAVAILABLE_OFFSET))();
		}

		static ::System::Single GetSystemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single GetSystemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))();
		}

		static ::System::Single GetSystemCalibratedMinLuminance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_HDROUTPUTSETTINGS_GETSYSTEMCALIBRATEDMINLUMINANCE_OFFSET))();
		}
	};
}
