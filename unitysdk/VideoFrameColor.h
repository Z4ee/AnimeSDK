#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define VIDEOFRAMECOLOR_GETFRAMECOLOR_OFFSET UNITYSDK_OFFSET(0x1E35EB10)
#define VIDEOFRAMECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E35EBA0)

inline static constexpr unsigned int VideoFrameColor_TypeDefinitionIndex = 51362;

class VideoFrameColor : public ::System::Object
{
public:
	::System::String* sourceName; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Color>* frameMeanColors; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOFRAMECOLOR__CTOR_OFFSET))(this);
	}

	::UnityEngine::Color GetFrameColor(::System::Int32 index)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VIDEOFRAMECOLOR_GETFRAMECOLOR_OFFSET))(this, index);
	}
};
