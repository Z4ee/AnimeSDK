#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class DownloadManager; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF91340)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER___C__DISPLAYCLASS7_0__MANAGEDOWNLOADS_B__0_OFFSET UNITYSDK_OFFSET(0x1EF92EA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER___C__DISPLAYCLASS7_0__MANAGEDOWNLOADS_B__1_OFFSET UNITYSDK_OFFSET(0x1EF92ED0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DownloadManager___c__DisplayClass7_0_TypeDefinitionIndex = 38202;

	class DownloadManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::ZenFulcrum::EmbeddedBrowser::DownloadManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _ManageDownloads_b__0(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER___C__DISPLAYCLASS7_0__MANAGEDOWNLOADS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ManageDownloads_b__1(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER___C__DISPLAYCLASS7_0__MANAGEDOWNLOADS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
