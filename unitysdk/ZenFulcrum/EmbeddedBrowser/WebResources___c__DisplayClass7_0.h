#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class FileInfo; }
namespace ZenFulcrum::EmbeddedBrowser { class WebResources; }

#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CEBD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES___C__DISPLAYCLASS7_0__SENDFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1A6CFF60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int WebResources___c__DisplayClass7_0_TypeDefinitionIndex = 36336;

	class WebResources___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::IO::FileInfo* file; // 0x10
		::ZenFulcrum::EmbeddedBrowser::WebResources* __4__this; // 0x18
		::System::Boolean forceDownload; // 0x20
		::System::Int32 id; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendFile_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES___C__DISPLAYCLASS7_0__SENDFILE_B__0_OFFSET))(this);
		}
	};
}
