#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class FileLocations_CEFDirs; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GETCEFDIRS_OFFSET UNITYSDK_OFFSET(0x1FA070A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GET_DIRS_OFFSET UNITYSDK_OFFSET(0x1FA03E30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FileLocations_TypeDefinitionIndex = 33320;

	class FileLocations : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs** StaticGet__dirs()
		{
			return (::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs**)Il2CppClass::FromTypeDefinitionIndex(FileLocations_TypeDefinitionIndex)->GetStaticField(0x28760);
		}
		// static const ::System::String* SlaveExecutable; // 0x0

		static ::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* get_Dirs()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GET_DIRS_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* GetCEFDirs()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_GETCEFDIRS_OFFSET))();
		}
	};
}
