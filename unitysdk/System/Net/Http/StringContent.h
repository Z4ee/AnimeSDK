#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/ByteArrayContent.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_HTTP_STRINGCONTENT_GETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1E79D630)
#define SYSTEM_NET_HTTP_STRINGCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79D340)

namespace System::Net::Http
{
	inline static constexpr unsigned int StringContent_TypeDefinitionIndex = 3775;

	class StringContent : public ::System::Net::Http::ByteArrayContent
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Text::Encoding* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* GetByteArray(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT_GETBYTEARRAY_OFFSET))(a1, a2);
		}
	};
}
