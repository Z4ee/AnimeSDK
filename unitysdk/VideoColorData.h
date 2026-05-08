#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/VideoColorData_VideoEntry.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define VIDEOCOLORDATA_ADDVIDEODATA_OFFSET UNITYSDK_OFFSET(0x18EC0BD0)
#define VIDEOCOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC0D00)

inline static constexpr unsigned int VideoColorData_TypeDefinitionIndex = 59798;

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
