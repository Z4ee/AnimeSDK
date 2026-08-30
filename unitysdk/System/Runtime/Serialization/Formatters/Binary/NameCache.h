#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_GETCACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BE0DED0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_SETCACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BE0DF70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE0E010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0E000)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameCache_TypeDefinitionIndex = 1196;

	class NameCache : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Object*>** StaticGet_ht()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NameCache_TypeDefinitionIndex)->GetStaticField(0x15030);
		}
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE__CCTOR_OFFSET))();
		}

		::System::Object* GetCachedValue(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_GETCACHEDVALUE_OFFSET))(this, a1);
		}

		::System::Void SetCachedValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_SETCACHEDVALUE_OFFSET))(this, a1);
		}
	};
}
