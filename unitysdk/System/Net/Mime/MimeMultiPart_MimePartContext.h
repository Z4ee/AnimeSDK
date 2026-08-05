#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class Stream; }
namespace System::Net { class LazyAsyncResult; }
namespace System::Net::Mime { class BaseWriter; }
namespace System::Net::Mime { class MimeBasePart; }

#define SYSTEM_NET_MIME_MIMEMULTIPART_MIMEPARTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D475900)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimeMultiPart_MimePartContext_TypeDefinitionIndex = 3621;

	class MimeMultiPart_MimePartContext : public ::System::Object
	{
	public:
		::System::IO::Stream* outputStream; // 0x10
		::System::Collections::Generic::IEnumerator_1<::System::Net::Mime::MimeBasePart*>* partsEnumerator; // 0x18
		::System::Net::Mime::BaseWriter* writer; // 0x20
		::System::Net::LazyAsyncResult* result; // 0x28
		::System::Boolean completedSynchronously; // 0x30
		::System::Boolean completed; // 0x31

		::System::Void _ctor(::System::Net::Mime::BaseWriter* writer, ::System::Net::LazyAsyncResult* result, ::System::Collections::Generic::IEnumerator_1<::System::Net::Mime::MimeBasePart*>* partsEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::Net::LazyAsyncResult*, ::System::Collections::Generic::IEnumerator_1<::System::Net::Mime::MimeBasePart*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEMULTIPART_MIMEPARTCONTEXT__CTOR_OFFSET))(this, writer, result, partsEnumerator);
		}
	};
}
