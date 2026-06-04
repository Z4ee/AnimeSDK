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

#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4F5FB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CANCELALL_OFFSET UNITYSDK_OFFSET(0x1B4F79A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1B4F7B60)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GETUSERDOWNLOADFOLDER_OFFSET UNITYSDK_OFFSET(0x1B4F69E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B4F70F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTARTED_OFFSET UNITYSDK_OFFSET(0x1B4F6250)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1B4F6DF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_MANAGEDOWNLOADS_OFFSET UNITYSDK_OFFSET(0x1B4F60D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_PAUSEALL_OFFSET UNITYSDK_OFFSET(0x1B4F7620)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_RESUMEALL_OFFSET UNITYSDK_OFFSET(0x1B4F77E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_SHGETKNOWNFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1B4F7BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B4F70B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7C70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DownloadManager_TypeDefinitionIndex = 36559;

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
