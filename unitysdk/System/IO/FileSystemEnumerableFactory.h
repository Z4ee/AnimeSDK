#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define SYSTEM_IO_FILESYSTEMENUMERABLEFACTORY_CREATEFILENAMEITERATOR_OFFSET UNITYSDK_OFFSET(0x1D463FB0)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEnumerableFactory_TypeDefinitionIndex = 672;

	class FileSystemEnumerableFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* CreateFileNameIterator(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::IO::SearchOption a6, ::System::Boolean a7)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::IO::SearchOption, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMENUMERABLEFACTORY_CREATEFILENAMEITERATOR_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
