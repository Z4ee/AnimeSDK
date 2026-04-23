#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_DOWNLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BAEC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DownloadManager_Download_TypeDefinitionIndex = 36260;

	class DownloadManager_Download : public ::System::Object
	{
	public:
		::System::String* path; // 0x10
		::System::String* name; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x20
		::System::String* status; // 0x28
		::System::Int32 percent; // 0x30
		::System::Int32 downloadId; // 0x34
		::System::Int32 speed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_DOWNLOAD__CTOR_OFFSET))(this);
		}
	};
}
