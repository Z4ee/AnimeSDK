#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack_FrameCell.h"

namespace miHoYoEmotion { class BaseShape; }

#define MIHOYOEMOTION_FRAMEEMOBLINKTRACK_BUILDFRAMES_OFFSET UNITYSDK_OFFSET(0x1D047920)
#define MIHOYOEMOTION_FRAMEEMOBLINKTRACK_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1D047600)
#define MIHOYOEMOTION_FRAMEEMOBLINKTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D047490)
#define MIHOYOEMOTION_FRAMEEMOBLINKTRACK___BASE_BUILDFRAMES_OFFSET UNITYSDK_OFFSET(0x1D048620)
#define MIHOYOEMOTION_FRAMEEMOBLINKTRACK___BASE_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1D049000)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameEmoBlinkTrack_TypeDefinitionIndex = 40065;

	class FrameEmoBlinkTrack : public ::miHoYoEmotion::FrameEmoTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOBLINKTRACK__CTOR_OFFSET))(this);
		}

		::System::Void EnableShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOBLINKTRACK_ENABLESHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void BuildFrames(::miHoYoEmotion::FrameEmoTrack_FrameCell& preCell, ::miHoYoEmotion::FrameEmoTrack_FrameCell& curCell, ::miHoYoEmotion::FrameEmoTrack_FrameCell& tickCell)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOBLINKTRACK_BUILDFRAMES_OFFSET))(this, preCell, curCell, tickCell);
		}

		::System::Void __base_BuildFrames(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::miHoYoEmotion::FrameEmoTrack_FrameCell& P1, ::miHoYoEmotion::FrameEmoTrack_FrameCell& P2)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOBLINKTRACK___BASE_BUILDFRAMES_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_EnableShape(::miHoYoEmotion::BaseShape* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOBLINKTRACK___BASE_ENABLESHAPE_OFFSET))(this, P0, P1);
		}
	};
}
