#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class DirectoryInfo; }
namespace System::IO { class FileInfo; }

#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18DAB2F0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DAB7B0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18DAB740)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DAB820)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18DAB7A0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18DAB750)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DAB1D0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAAAE0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18DAB1F0)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo__CreateEnumerateFilesIterator_d__43_TypeDefinitionIndex = 710;

	class DirectoryInfo__CreateEnumerateFilesIterator_d__43 : public ::System::Object
	{
	public:
		::System::String* __3__searchPattern; // 0x10
		::System::IO::FileInfo* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap1; // 0x20
		::System::IO::DirectoryInfo* __4__this; // 0x28
		::System::String* searchPattern; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::IO::SearchOption __3__searchOption; // 0x40
		::System::IO::SearchOption searchOption; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43___M__FINALLY1_OFFSET))(this);
		}

		::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
		{
			return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEFILESITERATOR_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
