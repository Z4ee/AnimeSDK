#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define SYSTEM_IO_FILESYSTEMENUMERABLEFACTORY_CREATEFILENAMEITERATOR_OFFSET UNITYSDK_OFFSET(0x1BE23B90)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEnumerableFactory_TypeDefinitionIndex = 638;

	class FileSystemEnumerableFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* CreateFileNameIterator(::System::String* path, ::System::String* originalUserPath, ::System::String* searchPattern, ::System::Boolean includeFiles, ::System::Boolean includeDirs, ::System::IO::SearchOption searchOption, ::System::Boolean checkHost)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::IO::SearchOption, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMENUMERABLEFACTORY_CREATEFILENAMEITERATOR_OFFSET))(path, originalUserPath, searchPattern, includeFiles, includeDirs, searchOption, checkHost);
		}
	};
}
