#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/ByteArrayContent.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_HTTP_STRINGCONTENT_GETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1D49E810)
#define SYSTEM_NET_HTTP_STRINGCONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D49E410)
#define SYSTEM_NET_HTTP_STRINGCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49E400)

namespace System::Net::Http
{
	inline static constexpr unsigned int StringContent_TypeDefinitionIndex = 26124;

	class StringContent : public ::System::Net::Http::ByteArrayContent
	{
	public:
		::System::Void _ctor(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT__CTOR_OFFSET))(this, content);
		}

		::System::Void _ctor_1(::System::String* content, ::System::Text::Encoding* encoding, ::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT__CTOR_1_OFFSET))(this, content, encoding, mediaType);
		}

		static ::Il2CppArray<::System::Byte>* GetByteArray(::System::String* content, ::System::Text::Encoding* encoding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT_GETBYTEARRAY_OFFSET))(content, encoding);
		}
	};
}
