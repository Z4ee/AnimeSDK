#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Iterator_1.h"
#include "unitysdk/System/IO/SearchOption.h"

namespace Microsoft::Win32 { class Win32Native_WIN32_FIND_DATA; }
namespace Microsoft::Win32::SafeHandles { class SafeFindHandle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Directory_SearchData; }
namespace System::IO { class SearchResult; }
namespace System::IO { template <typename T> class SearchResultHandler_1; }

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEnumerableIterator_1_TypeDefinitionIndex = 674;

	template <typename TSource>
	class FileSystemEnumerableIterator_1 : public ::System::IO::Iterator_1<TSource>
	{
	public:
		::System::IO::SearchResultHandler_1<TSource>* _resultHandler; // 0x0
		::System::Collections::Generic::List_1<::System::IO::Directory_SearchData*>* searchStack; // 0x0
		::System::IO::Directory_SearchData* searchData; // 0x0
		::System::String* searchCriteria; // 0x0
		::Microsoft::Win32::SafeHandles::SafeFindHandle* _hnd; // 0x0
		::System::Boolean needsParentPathDiscoveryDemand; // 0x0
		::System::Boolean empty; // 0x0
		::System::String* userPath; // 0x0
		::System::IO::SearchOption searchOption; // 0x0
		::System::String* fullPath; // 0x0
		::System::String* normalizedSearchPath; // 0x0
		::System::Boolean _checkHost; // 0x0
	};
}
