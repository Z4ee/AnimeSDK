#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/VideoColorData_VideoEntry.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define VIDEOCOLORDATA_ADDVIDEODATA_OFFSET UNITYSDK_OFFSET(0x1B5AE920)
#define VIDEOCOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AEA60)

inline static constexpr unsigned int VideoColorData_TypeDefinitionIndex = 82279;

class VideoColorData : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::VideoColorData_VideoEntry>* videoEntries; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOCOLORDATA__CTOR_OFFSET))(this);
	}

	::System::Void AddVideoData(::System::String* path, ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + VIDEOCOLORDATA_ADDVIDEODATA_OFFSET))(this, path, colors);
	}
};
