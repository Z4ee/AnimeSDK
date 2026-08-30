#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Text; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class DownloadManager_Download; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C7E8BB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CANCELALL_OFFSET UNITYSDK_OFFSET(0x1C7EA610)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1C7EA7D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GETUSERDOWNLOADFOLDER_OFFSET UNITYSDK_OFFSET(0x1C7E95E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C7E9D60)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTARTED_OFFSET UNITYSDK_OFFSET(0x1C7E8E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7E99F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_MANAGEDOWNLOADS_OFFSET UNITYSDK_OFFSET(0x1C7E8CD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_PAUSEALL_OFFSET UNITYSDK_OFFSET(0x1C7EA290)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_RESUMEALL_OFFSET UNITYSDK_OFFSET(0x1C7EA450)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_SHGETKNOWNFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1C7EA840)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C7E9CB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EA8E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DownloadManager_TypeDefinitionIndex = 38200;

	class DownloadManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean manageAllBrowsers; // 0x18
		::System::Boolean promptForFileNames; // 0x19
		::System::String* saveFolder; // 0x20
		::UnityEngine::UI::Text* statusBar; // 0x28
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::DownloadManager_Download*>* downloads; // 0x30
		::System::Text::StringBuilder* sb; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void ManageDownloads(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_MANAGEDOWNLOADS_OFFSET))(this, a1);
		}

		::System::Void HandleDownloadStarted(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::System::Int32 a2, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTARTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HandleDownloadStatus(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::System::Int32 a2, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void PauseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_PAUSEALL_OFFSET))(this);
		}

		::System::Void ResumeAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_RESUMEALL_OFFSET))(this);
		}

		::System::Void CancelAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CANCELALL_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CLEARALL_OFFSET))(this);
		}

		::System::String* get_Status()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GET_STATUS_OFFSET))(this);
		}

		static ::System::String* GetUserDownloadFolder()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GETUSERDOWNLOADFOLDER_OFFSET))();
		}

		static ::System::Int32 SHGetKnownFolderPath(::System::Guid a1, ::System::UInt32 a2, ::System::IntPtr a3, ::System::IntPtr& a4)
		{
			return ((::System::Int32(*)(::System::Guid, ::System::UInt32, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_SHGETKNOWNFOLDERPATH_OFFSET))(a1, a2, a3, a4);
		}
	};
}
