#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }

#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF82E0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP___C__DISPLAYCLASS3_0__PUTCURVEBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x1BAF8510)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_CurveBindingGrp___c__DisplayClass3_0_TypeDefinitionIndex = 39356;

	class ClipShapeManager_CurveBindingGrp___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::miHoYoEmotion::ClipShapeManager_CurveBinding* binding; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PutCurveBinding_b__0(::miHoYoEmotion::ClipShapeManager_CurveBinding* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipShapeManager_CurveBinding*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDINGGRP___C__DISPLAYCLASS3_0__PUTCURVEBINDING_B__0_OFFSET))(this, v);
		}
	};
}
