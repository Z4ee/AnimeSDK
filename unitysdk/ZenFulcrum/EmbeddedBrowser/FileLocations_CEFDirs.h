#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_CEFDIRS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BED10)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FileLocations_CEFDirs_TypeDefinitionIndex = 36268;

	class FileLocations_CEFDirs : public ::System::Object
	{
	public:
		::System::String* resourcesPath; // 0x10
		::System::String* logFile; // 0x18
		::System::String* subprocessFile; // 0x20
		::System::String* localesPath; // 0x28
		::System::String* cachePath; // 0x30
		::System::String* binariesPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FILELOCATIONS_CEFDIRS__CTOR_OFFSET))(this);
		}
	};
}
