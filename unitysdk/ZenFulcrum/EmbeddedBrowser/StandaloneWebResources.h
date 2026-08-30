#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/StandaloneWebResources_IndexEntry.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/WebResources.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES_HANDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x1EFA63F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES_LOADINDEX_OFFSET UNITYSDK_OFFSET(0x1EFA5E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1EFA6810)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA5DB0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int StandaloneWebResources_TypeDefinitionIndex = 38266;

	class StandaloneWebResources : public ::ZenFulcrum::EmbeddedBrowser::WebResources
	{
	public:
		// static const ::System::String* FileHeader; // 0x0
		// static const ::System::String* DefaultPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::StandaloneWebResources_IndexEntry>* toc; // 0x10
		::System::String* dataFile; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES__CTOR_OFFSET))(this, a1);
		}

		::System::Void LoadIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES_LOADINDEX_OFFSET))(this);
		}

		::System::Void HandleRequest(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES_HANDLEREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void WriteData(::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES_WRITEDATA_OFFSET))(this, a1);
		}
	};
}
