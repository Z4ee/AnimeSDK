#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class Win32Native_WIN32_FIND_DATA; }
namespace System { class String; }

#define SYSTEM_IO_SEARCHRESULT_GET_FINDDATA_OFFSET UNITYSDK_OFFSET(0x1D46BC60)
#define SYSTEM_IO_SEARCHRESULT_GET_USERPATH_OFFSET UNITYSDK_OFFSET(0x1D46BC50)
#define SYSTEM_IO_SEARCHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46BC40)

namespace System::IO
{
	inline static constexpr unsigned int SearchResult_TypeDefinitionIndex = 677;

	class SearchResult : public ::System::Object
	{
	public:
		::System::String* fullPath; // 0x10
		::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData; // 0x18
		::System::String* userPath; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHRESULT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_UserPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHRESULT_GET_USERPATH_OFFSET))(this);
		}

		::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* get_FindData()
		{
			return ((::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHRESULT_GET_FINDDATA_OFFSET))(this);
		}
	};
}
