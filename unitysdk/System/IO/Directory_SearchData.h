#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_DIRECTORY_SEARCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17959440)

namespace System::IO
{
	inline static constexpr unsigned int Directory_SearchData_TypeDefinitionIndex = 663;

	class Directory_SearchData : public ::System::Object
	{
	public:
		::System::String* userPath; // 0x10
		::System::String* fullPath; // 0x18
		::System::IO::SearchOption searchOption; // 0x20

		::System::Void _ctor(::System::String* fullPath, ::System::String* userPath, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_SEARCHDATA__CTOR_OFFSET))(this, fullPath, userPath, searchOption);
		}
	};
}
