#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileSystemWatcher_EventType_TypeDefinitionIndex = 3225;

	enum class FileSystemWatcher_EventType : ::System::Int32
	{
		FileSystemEvent = 0,
		ErrorEvent = 1,
		RenameEvent = 2,
	};
}
