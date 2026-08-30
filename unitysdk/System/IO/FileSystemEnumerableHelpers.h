#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class Win32Native_WIN32_FIND_DATA; }

#define SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISDIR_OFFSET UNITYSDK_OFFSET(0x1D464070)
#define SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISFILE_OFFSET UNITYSDK_OFFSET(0x1D464150)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEnumerableHelpers_TypeDefinitionIndex = 678;

	class FileSystemEnumerableHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsDir(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* a1)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISDIR_OFFSET))(a1);
		}

		static ::System::Boolean IsFile(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* a1)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMENUMERABLEHELPERS_ISFILE_OFFSET))(a1);
		}
	};
}
