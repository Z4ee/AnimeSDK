#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace miHoYoEmotion { class ClipShapeCurveCell; }
namespace miHoYoEmotion { class ClipShapeElement; }
namespace miHoYoEmotion { class ClipShapeManager_ClipShapeRuntime; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }

#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKBINDING_OFFSET UNITYSDK_OFFSET(0x92ED80)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKCURVE_OFFSET UNITYSDK_OFFSET(0x92ED70)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINBINDING_OFFSET UNITYSDK_OFFSET(0x92E930)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINCURVE_OFFSET UNITYSDK_OFFSET(0x92E920)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTBINDING_OFFSET UNITYSDK_OFFSET(0x92EAF0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTCURVE_OFFSET UNITYSDK_OFFSET(0x92EAE0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x92EC70)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCURVECNT_OFFSET UNITYSDK_OFFSET(0x92ECB0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPBINDINGVALID_OFFSET UNITYSDK_OFFSET(0x92EBB0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPVALID_OFFSET UNITYSDK_OFFSET(0x92EB00)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCURVEVALID_OFFSET UNITYSDK_OFFSET(0x92ECA0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCLIPVALID_OFFSET UNITYSDK_OFFSET(0x92E780)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCURVEVALID_OFFSET UNITYSDK_OFFSET(0x92E7B0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCLIPVALID_OFFSET UNITYSDK_OFFSET(0x92E940)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCURVEVALID_OFFSET UNITYSDK_OFFSET(0x92EA10)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x92ED90)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x92E7A0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCURVECNT_OFFSET UNITYSDK_OFFSET(0x92E860)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x92EA00)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCURVECNT_OFFSET UNITYSDK_OFFSET(0x92EA20)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoTrack_ClipCell_TypeDefinitionIndex = 39384;

	struct alignas(8) ClipEmoTrack_ClipCell
	{
		::miHoYoEmotion::ClipShapeElement* element; // 0x10
		::miHoYoEmotion::ClipShapeManager_ClipShapeRuntime* shapeRuntime; // 0x18

		::System::Boolean get_IsMainClipValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCLIPVALID_OFFSET))(this);
		}

		::System::Single get_MainClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCLIPDURATION_OFFSET))(this);
		}

		::System::Boolean get_IsMainCurveValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCURVEVALID_OFFSET))(this);
		}

		::System::Int32 get_MainCurveCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCURVECNT_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeCurveCell* GetMainCurve(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeCurveCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINCURVE_OFFSET))(this, index);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetMainBinding(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINBINDING_OFFSET))(this, index);
		}

		::System::Boolean get_IsPostClipValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCLIPVALID_OFFSET))(this);
		}

		::System::Single get_PostClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCLIPDURATION_OFFSET))(this);
		}

		::System::Boolean get_IsPostCurveValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCURVEVALID_OFFSET))(this);
		}

		::System::Int32 get_PostCurveCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCURVECNT_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeCurveCell* GetPostCurve(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeCurveCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTCURVE_OFFSET))(this, index);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetPostBinding(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTBINDING_OFFSET))(this, index);
		}

		::System::Boolean get_IsBlinkClipValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPVALID_OFFSET))(this);
		}

		::System::Boolean get_IsBlinkClipBindingValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPBINDINGVALID_OFFSET))(this);
		}

		::System::Single get_BlinkClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCLIPDURATION_OFFSET))(this);
		}

		::System::Boolean get_IsBlinkCurveValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCURVEVALID_OFFSET))(this);
		}

		::System::Int32 get_BlinkCurveCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCURVECNT_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeCurveCell* GetBlinkCurve(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeCurveCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKCURVE_OFFSET))(this, index);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetBlinkBinding(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKBINDING_OFFSET))(this, index);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISVALID_OFFSET))(this);
		}
	};
}
