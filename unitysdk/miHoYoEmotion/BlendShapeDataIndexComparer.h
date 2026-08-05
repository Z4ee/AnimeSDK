#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x980030)
#define MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980140)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeDataIndexComparer_TypeDefinitionIndex = 39994;

	struct alignas(1) BlendShapeDataIndexComparer
	{
		/*
		::System::Boolean Equals(::miHoYoEmotion::BlendShapeData x, ::miHoYoEmotion::BlendShapeData y)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_EQUALS_OFFSET))(this, x, y);
		}
		*/

		/*
		::System::Int32 GetHashCode(::miHoYoEmotion::BlendShapeData obj)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
		*/
	};
}
