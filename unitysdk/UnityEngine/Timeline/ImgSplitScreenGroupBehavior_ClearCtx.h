#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_CLEARCTX__CTOR_OFFSET UNITYSDK_OFFSET(0xABD290)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupBehavior_ClearCtx_TypeDefinitionIndex = 32974;

	struct alignas(8) ImgSplitScreenGroupBehavior_ClearCtx
	{
		::System::Double time; // 0x10
		::System::Int32 clearTag; // 0x18

		::System::Void _ctor(::System::Double time, ::System::Int32 clearTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR_CLEARCTX__CTOR_OFFSET))(this, time, clearTag);
		}
	};
}
