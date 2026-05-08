#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class Win32Native_WIN32_FIND_DATA; }

#define SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISDIR_OFFSET UNITYSDK_OFFSET(0x1AC91110)
#define SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISFILE_OFFSET UNITYSDK_OFFSET(0x1AC91230)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEnumerableHelpers_TypeDefinitionIndex = 644;

	class FileSystemEnumerableHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsDir(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* data)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISDIR_OFFSET))(data);
		}

		static ::System::Boolean IsFile(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* data)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISFILE_OFFSET))(data);
		}
	};
}
