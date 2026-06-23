#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScreenPlayData.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { template <typename T> class Action_1; }

#define VIDEOSCREENPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BC4B0)

inline static constexpr unsigned int VideoScreenPlayData_TypeDefinitionIndex = 62034;

class VideoScreenPlayData : public ::ScreenPlayData
{
public:
	::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoPrepared; // 0x50
	::System::Boolean DisableAutoPlay; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOSCREENPLAYDATA__CTOR_OFFSET))(this);
	}
};
