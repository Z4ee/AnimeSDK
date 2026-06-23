#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace miHoYoEmotion { class FrameShapeElement; }
namespace miHoYoEmotion { class FrameShapeManager_FrameShapeRuntime; }

#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x92F150)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_APPLY_OFFSET UNITYSDK_OFFSET(0x92F250)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_CLEARFRAME_OFFSET UNITYSDK_OFFSET(0x92F070)
#define MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_UPDATE_OFFSET UNITYSDK_OFFSET(0x92F160)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameEmoTrack_FrameElementCell_TypeDefinitionIndex = 39335;

	struct alignas(8) FrameEmoTrack_FrameElementCell
	{
		::miHoYoEmotion::FrameShapeElement* element; // 0x10
		::miHoYoEmotion::FrameShapeManager_FrameShapeRuntime* shapeRuntime; // 0x18
		::System::Int32 _frameCnt; // 0x20
		::System::Boolean _frameChanged; // 0x24
		::System::Single _frameTime; // 0x28
		::System::Single _timeCnt; // 0x2C
		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* _frames; // 0x30

		::System::Void ClearFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_CLEARFRAME_OFFSET))(this);
		}

		::System::Void AddFrame(::UnityEngine::Texture2D* frame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_ADDFRAME_OFFSET))(this, frame);
		}

		::System::Boolean Update(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_FRAMEELEMENTCELL_APPLY_OFFSET))(this);
		}
	};
}
