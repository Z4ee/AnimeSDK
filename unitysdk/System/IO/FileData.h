#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_FILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2C740)

namespace System::IO
{
	inline static constexpr unsigned int FileData_TypeDefinitionIndex = 3218;

	class FileData : public ::System::Object
	{
	public:
		::System::String* Directory; // 0x10
		::System::DateTime CreationTime; // 0x18
		::System::DateTime LastWriteTime; // 0x20
		::System::IO::FileAttributes Attributes; // 0x28
		::System::Boolean NotExists; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEDATA__CTOR_OFFSET))(this);
		}
	};
}
