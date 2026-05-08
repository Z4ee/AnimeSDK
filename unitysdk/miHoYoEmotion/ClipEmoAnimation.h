#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseEmoAnimation.h"

namespace miHoYoEmotion { class ElementManager; }

#define MIHOYOEMOTION_CLIPEMOANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0x19777480)
#define MIHOYOEMOTION_CLIPEMOANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19777980)
#define MIHOYOEMOTION_CLIPEMOANIMATION___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x19777A00)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoAnimation_TypeDefinitionIndex = 37690;

	class ClipEmoAnimation : public ::miHoYoEmotion::BaseEmoAnimation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* elemManager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOANIMATION_INIT_OFFSET))(this, elemManager);
		}

		::System::Void __base_Init(::miHoYoEmotion::ElementManager* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOANIMATION___BASE_INIT_OFFSET))(this, P0);
		}
	};
}
