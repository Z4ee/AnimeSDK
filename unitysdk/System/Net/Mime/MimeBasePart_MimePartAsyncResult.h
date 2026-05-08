#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/LazyAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class Object; }
namespace System::Net::Mime { class MimeBasePart; }

#define SYSTEM_NET_MIME_MIMEBASEPART_MIMEPARTASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EC3C0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimeBasePart_MimePartAsyncResult_TypeDefinitionIndex = 3620;

	class MimeBasePart_MimePartAsyncResult : public ::System::Net::LazyAsyncResult
	{
	public:
		::System::Void _ctor(::System::Net::Mime::MimeBasePart* part, ::System::Object* state, ::System::AsyncCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::MimeBasePart*, ::System::Object*, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEBASEPART_MIMEPARTASYNCRESULT__CTOR_OFFSET))(this, part, state, callback);
		}
	};
}
