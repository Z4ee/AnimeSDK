#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_TIMELINE_SPLITSCREENEVENT_CUSTOMIMGPOSMODIFYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2A70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SplitScreenEvent_CustomImgPosModifyInfo_TypeDefinitionIndex = 32333;

	class SplitScreenEvent_CustomImgPosModifyInfo : public ::System::Object
	{
	public:
		::MoleMole::ComicImgPart imgTarget; // 0x10
		::UnityEngine::Vector2 posOffsetBeforeSplit; // 0x14
		::UnityEngine::Vector2 posOffsetAfterSplit; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SPLITSCREENEVENT_CUSTOMIMGPOSMODIFYINFO__CTOR_OFFSET))(this);
		}
	};
}
