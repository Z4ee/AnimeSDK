#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class Win32Native_WIN32_FIND_DATA; }
namespace System { class String; }

#define SYSTEM_IO_SEARCHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BFCD0)

namespace System::IO
{
	inline static constexpr unsigned int SearchResult_TypeDefinitionIndex = 643;

	class SearchResult : public ::System::Object
	{
	public:
		::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData; // 0x10
		::System::String* userPath; // 0x18
		::System::String* fullPath; // 0x20

		::System::Void _ctor(::System::String* fullPath, ::System::String* userPath, ::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHRESULT__CTOR_OFFSET))(this, fullPath, userPath, findData);
		}
	};
}
