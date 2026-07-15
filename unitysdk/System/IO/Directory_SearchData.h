#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_DIRECTORY_SEARCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172E8E50)

namespace System::IO
{
	inline static constexpr unsigned int Directory_SearchData_TypeDefinitionIndex = 662;

	class Directory_SearchData : public ::System::Object
	{
	public:
		::System::String* fullPath; // 0x10
		::System::String* userPath; // 0x18
		::System::IO::SearchOption searchOption; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_SEARCHDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
