#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Resources { class ResourceReader; }

#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C324780)
#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1C3247D0)
#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C324680)
#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C324CB0)
#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C324630)
#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C324DB0)
#define SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C324610)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceReader_ResourceEnumerator_TypeDefinitionIndex = 516;

	class ResourceReader_ResourceEnumerator : public ::System::Object
	{
	public:
		::System::Resources::ResourceReader* _reader; // 0x10
		::System::Int32 _currentName; // 0x18
		::System::Int32 _dataPosition; // 0x1C
		::System::Boolean _currentIsValid; // 0x20

		::System::Void _ctor(::System::Resources::ResourceReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Resources::ResourceReader*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR__CTOR_OFFSET))(this, reader);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_RESOURCEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
