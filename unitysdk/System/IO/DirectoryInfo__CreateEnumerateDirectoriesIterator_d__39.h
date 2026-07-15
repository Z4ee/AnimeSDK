#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class DirectoryInfo; }

#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x172EA210)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_DIRECTORYINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172EA6A0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_DIRECTORYINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172EA630)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172EA730)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172EA690)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x172EA640)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172EA0F0)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39__CTOR_OFFSET UNITYSDK_OFFSET(0x172E9F60)
#define SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x172EA110)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo__CreateEnumerateDirectoriesIterator_d__39_TypeDefinitionIndex = 706;

	class DirectoryInfo__CreateEnumerateDirectoriesIterator_d__39 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap1; // 0x10
		::System::String* searchPattern; // 0x18
		::System::IO::DirectoryInfo* __2__current; // 0x20
		::System::IO::DirectoryInfo* __4__this; // 0x28
		::System::String* __3__searchPattern; // 0x30
		::System::IO::SearchOption __3__searchOption; // 0x38
		::System::IO::SearchOption searchOption; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39___M__FINALLY1_OFFSET))(this);
		}

		::System::IO::DirectoryInfo* System_Collections_Generic_IEnumerator_System_IO_DirectoryInfo__get_Current()
		{
			return ((::System::IO::DirectoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_DIRECTORYINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::IO::DirectoryInfo*>* System_Collections_Generic_IEnumerable_System_IO_DirectoryInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::IO::DirectoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_DIRECTORYINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CREATEENUMERATEDIRECTORIESITERATOR_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
