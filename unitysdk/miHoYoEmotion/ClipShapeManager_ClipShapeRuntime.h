#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/ElementManager_BaseShapeRuntime.h"

namespace miHoYoEmotion { class ClipShapeElement; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBindingGrp; }

#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CLIPSHAPERUNTIME_UPDATERUNTIMEINDEX_OFFSET UNITYSDK_OFFSET(0x1BAF6EF0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CLIPSHAPERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF79B0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_ClipShapeRuntime_TypeDefinitionIndex = 39360;

	class ClipShapeManager_ClipShapeRuntime : public ::miHoYoEmotion::ElementManager_BaseShapeRuntime
	{
	public:
		::miHoYoEmotion::ClipShapeManager_CurveBindingGrp* mainBindingGrp; // 0x18
		::miHoYoEmotion::ClipShapeManager_CurveBindingGrp* postBindingGrp; // 0x20
		::miHoYoEmotion::ClipShapeManager_CurveBindingGrp* blinkBindingGrp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CLIPSHAPERUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRuntimeIndex(::miHoYoEmotion::ClipShapeElement* shapeElement)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipShapeElement*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CLIPSHAPERUNTIME_UPDATERUNTIMEINDEX_OFFSET))(this, shapeElement);
		}
	};
}
