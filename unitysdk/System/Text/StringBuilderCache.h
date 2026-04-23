#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_TEXT_STRINGBUILDERCACHE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x1784D710)
#define SYSTEM_TEXT_STRINGBUILDERCACHE_GETSTRINGANDRELEASE_OFFSET UNITYSDK_OFFSET(0x1784D8B0)
#define SYSTEM_TEXT_STRINGBUILDERCACHE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1784D830)

namespace System::Text
{
	inline static constexpr unsigned int StringBuilderCache_TypeDefinitionIndex = 497;

	class StringBuilderCache : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_CachedInstance()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderCache_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Text::StringBuilder* Acquire(::System::Int32 capacity)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDERCACHE_ACQUIRE_OFFSET))(capacity);
		}

		static ::System::Void Release(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDERCACHE_RELEASE_OFFSET))(sb);
		}

		static ::System::String* GetStringAndRelease(::System::Text::StringBuilder* sb)
		{
			return ((::System::String*(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDERCACHE_GETSTRINGANDRELEASE_OFFSET))(sb);
		}
	};
}
